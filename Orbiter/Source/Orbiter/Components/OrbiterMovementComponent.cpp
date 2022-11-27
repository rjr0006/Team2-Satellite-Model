
#include "Orbiter/Components/OrbiterMovementComponent.h"
#include "GeoReferencingSystem.h"
#include "Orbiter/Core/OrbiterDataService.h"
#include <cmath>

namespace 
{
    #define ORBITER_PI 3.14159265358979323846

    FBodyState PerformDeadReckoning(const float DeltaTime, const FBodyState& InBodyState)
	{
		FBodyState UpdatedState = InBodyState;
		UpdatedState.Ecef = InBodyState.Ecef + InBodyState.EcefVelocity * DeltaTime;
		return UpdatedState;
	}

    template<class Type>
    inline Type RadToDeg(Type Rad)
    {
        return static_cast<Type>(Rad * (180.0 / ORBITER_PI));
    }

    template<class Type>
    inline Type DegToRad(Type Deg)
    {
        return static_cast<Type>(Deg * (ORBITER_PI / 180.0));
    }

    FRotator QuatToRotator(const FQuat& Quat)
    {      
        double RollRad = FMath::Atan2(2.0 * Quat.Y * Quat.W - 2.0 * Quat.X * Quat.Z, 1.0 - 2.0 * Quat.Y * Quat.Y - 2.0 * Quat.Z * Quat.Z);
        double PitchRad = FMath::Atan2(2.0 * Quat.X * Quat.W - 2.0 * Quat.Y * Quat.Z, 1.0 - 2.0 * Quat.X * Quat.X - 2.0 * Quat.Z * Quat.Z);
        double YawRad = FMath::Asin(2.0 * Quat.X * Quat.Y + 2.0 * Quat.Z * Quat.W);

        return FRotator(PitchRad, YawRad, RollRad);
    }
}

UOrbiterMovementComponent::UOrbiterMovementComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UOrbiterMovementComponent::RegisterWithService(AOrbiterDataService* InDataService)
{
	DataService = InDataService;
}

void UOrbiterMovementComponent::TickMovement(float DeltaTime, const FBodyState& NewState)
{
	if (!DataService)
		return;

	TObjectPtr<AGeoReferencingSystem> GeoSystem = DataService->CachedGeoSystem;

	if (!GeoSystem)
		return;

	const float SimTime = DataService->SimulationTime;
	const float Statetime = NewState.UtcTime;
	const float UpdateDeltaTime = DataService->SimulationTime - NewState.UtcTime;
	
	const FBodyState StateResult = PerformDeadReckoning(UpdateDeltaTime, NewState);

	// Location
	FVector Location;
	GeoSystem->ECEFToEngine(StateResult.Ecef, Location);

    const FRotator RotationInRad = QuatToRotator(StateResult.EcefRotation);
   
    //store heading, pitch, and yaw for Unreal frame
    const double HeadingDegrees = RadToDeg(RotationInRad.Roll);
    const double PitchDegrees = RadToDeg(RotationInRad.Pitch);
    const double RollDegrees = RadToDeg(RotationInRad.Yaw);

    const FRotator Rotation = FRotator(PitchDegrees, 90.f - HeadingDegrees  , RollDegrees);

	// Finally set the final location.
	GetOwner()->SetActorLocationAndRotation(Location, Rotation);
}