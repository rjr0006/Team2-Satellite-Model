
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
        double roll = FMath::Atan2(2.0 * Quat.Y * Quat.W - 2.0 * Quat.X * Quat.Z, 1.0 - 2.0 * Quat.Y * Quat.Y - 2.0 * Quat.Z * Quat.Z);
        double pitch = FMath::Atan2(2.0 * Quat.X * Quat.W - 2.0 * Quat.Y * Quat.Z, 1.0 - 2.0 * Quat.X * Quat.X - 2.0 * Quat.Z * Quat.Z);
        double yaw = FMath::Asin(2.0 * Quat.X * Quat.Y + 2.0 * Quat.Z * Quat.W);
        return FRotator(pitch, yaw, roll);
    }

}

// Sets default values for this component's properties
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


    FRotator Rot = QuatToRotator(StateResult.EcefRotation);
   
    //OrientationStates(GeoSystem->GetTangentTransformAtECEFLocation(NewState.Ecef), NewState.LatLongAlt, NewState.ECEFRot, Rot);


    ////store heading, pitch, and yaw for Unreal frame
    //const double HeadingDegrees = RadToDeg(NewState.ECEFRot.Roll);
    //const double PitchDegrees = RadToDeg(NewState.ECEFRot.Pitch);
    //const double RollDegrees = RadToDeg(NewState.ECEFRot.Yaw);

    //const FRotator Rot = FRotator(PitchDegrees, 90 -  HeadingDegrees  , RollDegrees);


	// Finally set the final location.
	GetOwner()->SetActorLocationAndRotation(Location, Rot);
    //GetOwner()->SetActorLocation(Location);

}

void UOrbiterMovementComponent::OrientationStates(FTransform EcefToEnu, FVector3d LLA, FRotator Rotation, FRotator& OutRotation)
{
	const double EntityLatRadians = DegToRad(LLA.X);
	const double EntityLonRadians = DegToRad(LLA.Y);

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
	const double HeadingDegrees = RadToDeg(HeadingRadians);
	const double PitchDegrees = RadToDeg(PitchRadians);
	const double RollDegrees = RadToDeg(RollRadians);

	FRotator LocalRotation = FRotator(PitchDegrees, HeadingDegrees, RollDegrees);
    //OutRotation = FRotator(PitchDegrees, HeadingDegrees, RollDegrees);

	const FQuat NorthQuat = (-(EcefToEnu.GetUnitAxis(EAxis::Y))).ToOrientationQuat();
	OutRotation = (NorthQuat * LocalRotation.Quaternion()).Rotator();


}

void UOrbiterMovementComponent::ConvertRotation(FRotator& OutRotation)
{
    double Lat(27.880800164971465);
    double Lon(-163.72206132831204);
    double LatRadians = DegToRad(Lat);
    double LonRadians = DegToRad(Lon);
    //convert euler angles to yaw/pitch/roll

    double RotX =-2.2298563697540787;
    double RotY =-0.74996953186652615;
    double RotZ = -0.57644098094662222;


    const double PsiRadians = RotZ;
    const double ThetaRadians = RotY;
    const double PhiRadians = RotX;

    double HeadingRadians = 0.0;
    double PitchRadians = 0.0;
    double RollRadians = 0.0;

    //EulerToHeadingPitchRoll(LatRadians, LonRadians, PsiRadians, ThetaRadians, PhiRadians,
    //    HeadingRadians, PitchRadians, RollRadians);


    //store heading, pitch, and yaw for Unreal frame
    const double HeadingDegrees = RadToDeg(RotX);
    const double PitchDegrees = RadToDeg(RotY);
    const double RollDegrees = RadToDeg(RotZ);

    OutRotation = FRotator(PitchDegrees, HeadingDegrees - 90, RollDegrees);

    //FRotator Rotation = TestQuat.Rotator();
    //OutRotation = FRotator(Rotation.Pitch, Rotation.Yaw - 90, Rotation.Roll);
}

