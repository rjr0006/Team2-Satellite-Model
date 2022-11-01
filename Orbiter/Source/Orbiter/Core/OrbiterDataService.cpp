// Fill out your copyright notice in the Description page of Project Settings.


#include "Orbiter/Core/OrbiterDataService.h"
#include "SocketSubsystem.h"
#include "Interfaces/IPv4/IPv4Address.h"
#include "Sockets.h"
#include "Orbiter/Components/OrbiterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GeoReferencingSystem.h"

namespace
{
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

		//memcpy(&BodyState.EciRotation, Data, sizeof(FQuat));
		//Data += sizeof(FQuat);

		//memcpy(&BodyState.EcefRotation, Data, sizeof(FQuat));
		memcpy(&BodyState.ECEFRot, Data, sizeof(FRotator));



	}


	void CreateMovementComponentForActor(AActor* Actor)
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
	AOrbiterDataService* Actor = nullptr;

	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		TArray<AActor*> Actors;
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
	Connect();
}


void AOrbiterDataService::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!SocketPtr)
		return;

	TArray<uint8> ReceivedData;

	uint32 Size;
	FBodyState NewState;

	SimulationTime += DeltaTime;

	bool bReceivedUpdated(false);
	while (SocketPtr->HasPendingData(Size))
	{
		ReceivedData.Init(FMath::Min(Size, 65507u), Size);

		int32 Read = 0;
		bReceivedUpdated = SocketPtr->Recv(ReceivedData.GetData(), ReceivedData.Num(), Read);

		ParseBodyStateData(ReceivedData.GetData(), NewState);

		SimulationTime = NewState.UtcTime;

		// We do not have a reference to the satellite actor so we need to spawn it. 
		if (!Satellite)
		{
			CreateSatellite();
		}

	}

	if (MovementComponent && bReceivedUpdated)
	{
		MovementComponent->TickMovement(DeltaTime, NewState);
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
	UClass* SatelliteClassToSpawn = SatelliteActorClass.TryLoadClass<UObject>();
	if (SatelliteClassToSpawn)
	{
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
		
	}
}

