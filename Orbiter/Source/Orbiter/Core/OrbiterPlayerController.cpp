// Fill out your copyright notice in the Description page of Project Settings.


#include "Orbiter/Core/OrbiterPlayerController.h"
#include "Orbiter/DataTypes/OrbiterCameraMode.h"
#include "Orbiter/Core/OrbiterDataService.h"
#include "Orbiter/Core/OrbiterPawn.h"
#include "Kismet/GameplayStatics.h"

AOrbiterPlayerController::AOrbiterPlayerController()
{
	bShowMouseCursor = true;
}

void AOrbiterPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (TObjectPtr<AOrbiterDataService> DataService = AOrbiterDataService::GetDataService(this))
	{
		DataService->GetSatelliteSpawnedDelegate().AddUObject(this, &AOrbiterPlayerController::OnSatelliteSpawned);
	}

	TArray<AActor*> Actors;
	UGameplayStatics::GetAllActorsOfClassWithTag(this, AActor::StaticClass(), FName("Satellite"), Actors);
	if (Actors.Num() > 0)
	{
		CachedSatellite = Actors[0];
	}
}

void AOrbiterPlayerController::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (TObjectPtr<AOrbiterDataService> DataService = AOrbiterDataService::GetDataService(this))
	{
		DataService->GetSatelliteSpawnedDelegate().RemoveAll(this);
	}

}

void AOrbiterPlayerController::Tick(float DeltaTime)
{
	// Execute world origin rebasing if this camera reaches 
	// a certain distance from the current origin.
	if (bEnableOriginRebasing)
	{
		if (GetViewTarget() && (GetViewTarget()->GetActorLocation().Size() > RebaseThreshold))
		{
			const FIntVector CurrentWorldOrigin = UGameplayStatics::GetWorldOriginLocation(GetWorld());
			// Calculate the true actor location if there was no origin rebasing.
			// This will be the location we rebase to!
			const FIntVector TrueActorLocation = FIntVector(GetViewTarget()->GetActorLocation()) + CurrentWorldOrigin;
			UGameplayStatics::SetWorldOriginLocation(this, TrueActorLocation);
		}
	}
}

void AOrbiterPlayerController::SetSatelliteCameraMode(const EOrbiterCameraMode CameraMode)
{
	SatelliteCameraMode = CameraMode;

	if (auto* OrbitPawn = Cast<AOrbiterPawn>(GetPawn()))
	{
		switch (SatelliteCameraMode)
		{
		case EOrbiterCameraMode::SatelliteFixed:
			OrbitPawn->SetSpectateTarget(CachedSatellite, false);
			break;
		case EOrbiterCameraMode::FreeFly:
			OrbitPawn->SetSpectateTarget(nullptr, false);
			break;
		case EOrbiterCameraMode::MODE_MAX:
			break;
		default:
			break;
		}
		}

}

void AOrbiterPlayerController::OnSatelliteSpawned(TObjectPtr<AActor> Satellite)
{
	CachedSatellite = Satellite;
}
