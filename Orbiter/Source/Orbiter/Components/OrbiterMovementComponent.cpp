
#include "Orbiter/Components/OrbiterMovementComponent.h"
#include "Orbiter/Core/OrbiterDataService.h"
#include "GeoReferencingSystem.h"
#include <cmath>

namespace 
{
#define KDIS_PI 3.14159265358979323846
    FBodyState PerformDeadReckoning(const float DeltaTime, const FBodyState& InBodyState)
	{
		FBodyState UpdatedState;
		UpdatedState.Ecef = InBodyState.Ecef + InBodyState.EcefVelocity * DeltaTime;
		return UpdatedState;
	}

    template<class Type>
    inline void RotateAboutAxis(Type d[3], Type const s[3], Type const n[3], Type  t)
    {
        double  st = sin(t);
        double  ct = cos(t);

        d[0] = static_cast<Type>((1.0 - ct) * (n[0] * n[0] * s[0] + n[0] * n[1] * s[1] + n[0] * n[2] * s[2]) + ct * s[0] + st * (n[1] * s[2] - n[2] * s[1]));
        d[1] = static_cast<Type>((1.0 - ct) * (n[0] * n[1] * s[0] + n[1] * n[1] * s[1] + n[1] * n[2] * s[2]) + ct * s[1] + st * (n[2] * s[0] - n[0] * s[2]));
        d[2] = static_cast<Type>((1.0 - ct) * (n[0] * n[2] * s[0] + n[1] * n[2] * s[1] + n[2] * n[2] * s[2]) + ct * s[2] + st * (n[0] * s[1] - n[1] * s[0]));
    }

    template<class Type>
    inline void Cross(Type  d[3], Type const  a[3], Type const b[3])
    {
        d[0] = a[1] * b[2] - b[1] * a[2];
        d[1] = b[0] * a[2] - a[0] * b[2];
        d[2] = a[0] * b[1] - b[0] * a[1];
    }

    template<class Type>
    inline Type Dot(Type const a[3], Type const b[3])
    {
        return  a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
    }

    template<class Type>
    void EulerToHeadingPitchRoll(Type Lat, Type Lon, Type Psi, Type Theta, Type Phi, Type& H, Type& P, Type& R)
    {
        // local NED vectors in ECEF coordinate frame
        Type  N[3];
        Type  E[3];
        Type  D[3];

        // Calculate NED from lat and lon
        // local NED
        //Type const  D0[3] = { 1. , 0. , 0. };
        Type const  E0[3] = { 0. , 1. , 0. };
        Type const  N0[3] = { 0. , 0. , 1. };
        Type        me[3];
        // 'E'
        RotateAboutAxis(E, E0, N0, Lon);
        me[0] = -E[0];
        me[1] = -E[1];
        me[2] = -E[2];
        // 'N'
        RotateAboutAxis(N, N0, me, Lat);
        // 'D'
        Cross(D, N, E);
        /*
         *  Orientation:
         *    input : (x0,y0,z0)=(N,E,D) and (Psi,Theta,Phi Euler angles)
         *    output: (x3,y3,z3)=body vectors in local frame
         */
         // rotate about Z by Psi
        Type  X[] = { 1.,0.,0. };
        Type  Y[] = { 0.,1.,0. };
        Type  Z[] = { 0.,0.,1. };
        Type  X1[3], Y1[3], Z1[3];
        RotateAboutAxis(X1, X, Z, Psi);
        RotateAboutAxis(Y1, Y, Z, Psi);
        memcpy(Z1, Z, sizeof(Type[3]));
        // rotate about Y1 vector by Theta
        Type  X2[3], Y2[3], Z2[3];
        RotateAboutAxis(X2, X1, Y1, Theta);
        memcpy(Y2, Y1, sizeof(Type[3]));
        RotateAboutAxis(Z2, Z1, Y1, Theta);
        // rotate about X2 by Phi
        Type  X3[3], Y3[3], Z3[3];
        memcpy(X3, X2, sizeof(Type[3]));
        RotateAboutAxis(Y3, Y2, X2, Phi);
        RotateAboutAxis(Z3, Z2, X2, Phi);
        // calculate angles from vectors
        Type x0[3];
        memcpy(x0, N, sizeof(Type[3]));
        Type y0[3];
        memcpy(y0, E, sizeof(Type[3]));
        Type z0[3];
        memcpy(z0, D, sizeof(Type[3]));
        Type  y2[3];
        Type  z2[3];
        H = static_cast<Type>(atan2(Dot(X3, y0), Dot(X3, x0)));
        P = static_cast<Type>(atan2(-Dot(X3, z0), sqrt(pow(Dot(X3, x0), 2) + pow(Dot(X3, y0), 2))));
        RotateAboutAxis(y2, y0, z0, H);
        RotateAboutAxis(z2, z0, y2, P);
        R = static_cast<Type>(atan2(Dot(Y3, z2), Dot(Y3, y2)));
    }

    template<class Type>
    inline Type RadToDeg(Type Rad)
    {
        return static_cast<Type>(Rad * (180.0 / KDIS_PI));
    }

    template<class Type>
    inline Type DegToRad(Type Deg)
    {
        return static_cast<Type>(Deg * (KDIS_PI / 180.0));
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


    FRotator Rot;
   
    OrientationStates(GeoSystem->GetTangentTransformAtECEFLocation(NewState.Ecef), NewState.LatLongAlt, NewState.ECEFRot, Rot);


    ////store heading, pitch, and yaw for Unreal frame
    //const double HeadingDegrees = RadToDeg(NewState.ECEFRot.Roll);
    //const double PitchDegrees = RadToDeg(NewState.ECEFRot.Pitch);
    //const double RollDegrees = RadToDeg(NewState.ECEFRot.Yaw);

    //const FRotator Rot = FRotator(PitchDegrees, 90 -  HeadingDegrees  , RollDegrees);


	// Finally set the final location.
	//GetOwner()->SetActorLocationAndRotation(Location, Rot);
    GetOwner()->SetActorLocation(Location);

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

	EulerToHeadingPitchRoll(EntityLatRadians, EntityLonRadians, PsiRadians,
		ThetaRadians, PhiRadians, HeadingRadians, PitchRadians, RollRadians);

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

    EulerToHeadingPitchRoll(LatRadians, LonRadians, PsiRadians, ThetaRadians, PhiRadians,
        HeadingRadians, PitchRadians, RollRadians);


    //store heading, pitch, and yaw for Unreal frame
    const double HeadingDegrees = RadToDeg(RotX);
    const double PitchDegrees = RadToDeg(RotY);
    const double RollDegrees = RadToDeg(RotZ);

    OutRotation = FRotator(PitchDegrees, HeadingDegrees - 90, RollDegrees);



    //FRotator Rotation = TestQuat.Rotator();


    //OutRotation = FRotator(Rotation.Pitch, Rotation.Yaw - 90, Rotation.Roll);



}

