// Fill out your copyright notice in the Description page of Project Settings.


#include "Orbiter/Components/OrbiterMovementComponent.h"
#include "Orbiter/Core/OrbiterDataService.h"
#include "GeoReferencingSystem.h"
#include <cmath>

namespace 
{
	FBodyState PerformDeadReckoning(const float DeltaTime, const FBodyState& InBodyState)
	{
		FBodyState UpdatedState;
		UpdatedState.Ecef = InBodyState.Ecef + InBodyState.EcefVelocity * DeltaTime;
		return UpdatedState;
	}
}

// Sets default values for this component's properties
UOrbiterMovementComponent::UOrbiterMovementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

void UOrbiterMovementComponent::RegisterWithService(AOrbiterDataService* InDataService)
{
	DataService = InDataService;
}

void UOrbiterMovementComponent::TickMovement(float DeltaTime, const FBodyState& NewState)
{
	if (!DataService)
		return;

	AGeoReferencingSystem* GeoSystem = DataService->CachedGeoSystem;

	if (!GeoSystem)
		return;

	const float SimTime = DataService->SimulationTime;
	const float Statetime = NewState.UtcTime;

	const float UpdateDeltaTime = DataService->SimulationTime - NewState.UtcTime;
	
	const FBodyState DisBasedStateResult = PerformDeadReckoning(UpdateDeltaTime, NewState);

	// Location
	FVector Location;
	GeoSystem->ECEFToEngine(NewState.Ecef, Location);

	// Finally set the final location.
	GetOwner()->SetActorLocation(Location);

}

void UOrbiterMovementComponent::OrientationStates(FRotator Rotation, FTransform EcefToEnu, FVector LLA, FRotator& OutRotation)
{
	const double EntityLatRadians = FMath::DegreesToRadians(LLA.X);
	const double EntityLonRadians = FMath::DegreesToRadians(LLA.Y);

	// Rotation: convert euler angles to yaw/pitch/roll <- this is true
	const double PsiRadians = Rotation.Roll;
	const double ThetaRadians = Rotation.Pitch;
	const double PhiRadians = Rotation.Yaw;

	double HeadingRadians = 0.0;
	double PitchRadians = 0.0;
	double RollRadians = 0.0;

	//EulerToHeadingPitchRoll(EntityLatRadians, EntityLonRadians, PsiRadians,
	//	ThetaRadians, PhiRadians, HeadingRadians, PitchRadians, RollRadians);

	// store heading, pitch, and roll for Unreal frame
	const double HeadingDegrees = FMath::RadiansToDegrees(HeadingRadians);
	const double PitchDegrees = FMath::RadiansToDegrees(PitchRadians);
	const double RollDegrees = FMath::RadiansToDegrees(RollRadians);

	FRotator LocalRotation = FRotator(PitchDegrees, HeadingDegrees, RollDegrees);

	const FQuat NorthQuat = (-(EcefToEnu.GetUnitAxis(EAxis::Y))).ToOrientationQuat();
	OutRotation = (NorthQuat * LocalRotation.Quaternion()).Rotator();


}

