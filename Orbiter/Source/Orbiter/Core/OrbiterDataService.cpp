
#include "Orbiter/Core/OrbiterDataService.h"
#include "GeoReferencingSystem.h"
#include "Interfaces/IPv4/IPv4Address.h"
#include "Kismet/GameplayStatics.h"
#include "Orbiter/Components/OrbiterMovementComponent.h"
#include "Sockets.h"
#include "SocketSubsystem.h"

namespace
{
	/* The command line argument string */
	static const FString CommandLineArg("tx");

	/**
	* @brief Parse the binary data and build the body state structure. 
	* 
	* @param Data		- In binary data to parse. 
	* @param BodyState	- Build body state data. 
	*/
	void ParseBodyStateData(uint8* Data, FBodyState& BodyState)
	{
		memcpy(&BodyState.UtcTime, Data, sizeof(double));
		Data += sizeof(double);

		memcpy(&BodyState.LatLongAlt, Data, sizeof(FVector3d));
		Data += sizeof(FVector3d);

		memcpy(&BodyState.Ecef, Data, sizeof(FVector3d));
		Data += sizeof(FVector3d);

		memcpy(&BodyState.EcefVelocity, Data, sizeof(FVector3d));
		Data += sizeof(FVector3d);

		memcpy(&BodyState.EciRotation, Data, sizeof(FQuat));
		Data += sizeof(FQuat);

		memcpy(&BodyState.EcefRotation, Data, sizeof(FQuat));
	}

	/**
	* @brief Create a movement component for an actor. 
	* 
	* @param Actor - actor object to create the component for. 
	*/
	void CreateMovementComponentForActor(TObjectPtr<AActor> Actor)
	{
		auto MoveComp = NewObject<UOrbiterMovementComponent>(Actor);
		if (MoveComp)
		{
			MoveComp->RegisterComponent();
		}
	}
}

AOrbiterDataService::AOrbiterDataService()
{
	PrimaryActorTick.bCanEverTick = true;
}

AOrbiterDataService* AOrbiterDataService::GetDataService(UObject* WorldContextObject)
{
	TObjectPtr<AOrbiterDataService> Actor = nullptr;

	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		TArray<TObjectPtr<AActor>> Actors;
		UGameplayStatics::GetAllActorsOfClass(World, AOrbiterDataService::StaticClass(), Actors);
		int NbActors = Actors.Num();
		if (NbActors == 0)
		{
			UE_LOG(LogTemp, Error, TEXT("OrbiterDataService actor not found. Please add one to your world to configure your data service."));
		}
		else if (NbActors > 1)
		{
			UE_LOG(LogTemp, Error, TEXT("Multiple OrbiterDataService actors found. Only one actor should be used to configure your data service"));
		}
		else
		{
			Actor = Cast<AOrbiterDataService>(Actors[0]);
		}
	}

	return Actor;
}

void AOrbiterDataService::BeginPlay()
{
	Super::BeginPlay();

	CachedGeoSystem = AGeoReferencingSystem::GetGeoReferencingSystem(this);
	
	// parse connection command line arguments. 
	FString FormattedArgument = FString::Printf(TEXT("-%s="), *CommandLineArg);
	FString ArgumentResult;
	const TCHAR* CommandLineValue = FCommandLine::Get();
	if (FParse::Value(CommandLineValue, *FormattedArgument, ArgumentResult))
	{
		FString AddressArg;
		FString PortArg;
		if (ArgumentResult.Split(TEXT(":"), &AddressArg, &PortArg))
		{
			IpAddress = AddressArg;
			Port = FCString::Atoi(*PortArg);
		}
	}
	else
	{
		// Get the local ip address if it wasn't specified in the command line. 
		bool bCanBind(false);
		TSharedRef<FInternetAddr> LocalAddress = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalHostAddr(*GLog, bCanBind);
		if (LocalAddress->IsValid())
		{
			IpAddress = LocalAddress->ToString(false);
		}
	}

	Connect();
}

void AOrbiterDataService::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!SocketPtr)
		return;

	TArray<uint8> ReceivedData;

	uint32 PacketSize;

	SimulationTime += DeltaTime;

	bool bReceivedUpdated(false);
	while (SocketPtr->HasPendingData(PacketSize))
	{
		ReceivedData.Init(FMath::Min(PacketSize, 65507u), PacketSize);

		int32 BytesReceived = 0;
		bReceivedUpdated = SocketPtr->Recv(ReceivedData.GetData(), ReceivedData.Num(), BytesReceived);

		ParseBodyStateData(ReceivedData.GetData(), CachedState);

		SimulationTime = CachedState.UtcTime;

		// We do not have a reference to the satellite actor so we need to spawn it. 
		if (!Satellite)
		{
			CreateSatellite();
		}
	}

	if (MovementComponent)
	{
		MovementComponent->TickMovement(DeltaTime, CachedState);
	}
}

void AOrbiterDataService::Connect()
{
	if (SocketPtr)
	{
		Disconnect();
	}

	SocketPtr = MakeShareable(ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_DGram, TEXT("default"), false));

	FIPv4Address IP;
	FIPv4Address::Parse(IpAddress, IP);
	TSharedRef<FInternetAddr> Addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	Addr->SetIp(IP.Value);
	Addr->SetPort(Port);

	bIsConnected = SocketPtr->Bind(*Addr);
}


void AOrbiterDataService::Disconnect()
{
	if (SocketPtr)
	{
		SocketPtr->Close();
		SocketPtr.Reset();
		bIsConnected = false;
	}
}

void AOrbiterDataService::CreateSatellite()
{
	TObjectPtr<UClass> SatelliteClassToSpawn = SatelliteActorClass.TryLoadClass<UObject>();
	if (!SatelliteClassToSpawn)
	{
		return;
	}

	Satellite = GetWorld()->SpawnActor(SatelliteClassToSpawn);

	// If the satellite doesn't have a movement component, add a default one so it at least
	// updates location 
	if (!Satellite->GetComponentByClass(UOrbiterMovementComponent::StaticClass()))
	{
		CreateMovementComponentForActor(Satellite);
	}

	// Notify all components that the owner registered
	MovementComponent = Cast<UOrbiterMovementComponent>(Satellite->GetComponentByClass(UOrbiterMovementComponent::StaticClass()));
	MovementComponent->RegisterWithService(this);

	// Notify all the satellite actor has been spawned. 
	OnSatelliteSpawned.Broadcast(Satellite);		
}