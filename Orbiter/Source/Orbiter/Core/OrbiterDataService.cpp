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

		memcpy(&BodyState.EciRotation, Data, sizeof(FQuat));
		Data += sizeof(FQuat);

		memcpy(&BodyState.EcefRotation, Data, sizeof(FQuat));
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

void AOrbiterDataService::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetActorOfClass(this, AGeoReferencingSystem::StaticClass());
	Connect();
}


void AOrbiterDataService::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!SocketPtr)
		return;

	TArray<uint8> ReceivedData;

	uint32 Size;
	while (SocketPtr->HasPendingData(Size))
	{
		ReceivedData.Init(FMath::Min(Size, 65507u), Size);

		int32 Read = 0;
		SocketPtr->Recv(ReceivedData.GetData(), ReceivedData.Num(), Read);

		FBodyState NewState;
		ParseBodyStateData(ReceivedData.GetData(), NewState);

		// We do not have a reference to the satellite actor so we need to spawn it. 
		if (!Satellite)
		{
			CreateSatellite();
		}

		if (MovementComponent)
		{
			MovementComponent->TickMovement(DeltaTime, NewState);
		}

	}
}
void AOrbiterDataService::Connect()
{
	if (SocketPtr)
	{
		Disconnect();
	}

	SocketPtr = MakeShareable(ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_DGram, TEXT("default"), false));

	FString address = TEXT("127.0.0.1");
	int32 port = 8080;
	FIPv4Address ip;
	FIPv4Address::Parse(address, ip);
	TSharedRef<FInternetAddr> addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	addr->SetIp(ip.Value);
	addr->SetPort(port);

	if (!SocketPtr->Bind(*addr)) {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Failed to bind socket");
		}
	}
	else {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Socket connect succesuflly");
		}
	}
}


void AOrbiterDataService::Disconnect()
{
	if (SocketPtr)
	{
		SocketPtr->Close();
		SocketPtr.Reset();
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
