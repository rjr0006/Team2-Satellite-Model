// Fill out your copyright notice in the Description page of Project Settings.


#include "Orbiter/Core/OrbiterPawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GeoReferencingSystem.h"
#include "GameFramework/SpectatorPawnMovement.h"
#include "Components/SphereComponent.h"


namespace
{
	/** Distance from center of earth to mean sea level, according to esri.com. */
	const double MeanSeaLevel = 637114600;

	/** Karman line = 100km above mean sea level. */
	const double KarmanLine = MeanSeaLevel + 10000000;

	/** Distance squared, for reduced runtime complexity */
	const double KarmanLineSq = KarmanLine * KarmanLine;
}

AOrbiterPawn::AOrbiterPawn(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCollisionComponent()->SetCollisionProfileName("NoCollision");

	// FP Cam: Cam @ root
	FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCamera->SetupAttachment(GetRootComponent());
	FirstPersonCamera->bUsePawnControlRotation = true;

	// TP Cam: Cam + spring arm, for orbiting around selected actors
	ThirdPersonSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("ThirdPersonSpringArm"));
	ThirdPersonSpringArm->SetupAttachment(GetRootComponent());
	ThirdPersonSpringArm->bUsePawnControlRotation = true;
	ThirdPersonSpringArm->SetActive(false);
	ThirdPersonSpringArm->bAutoActivate = false;
	ThirdPersonSpringArm->bDoCollisionTest = false;
	ThirdPersonSpringArm->ProbeChannel = ECollisionChannel::ECC_Pawn;

	ThirdPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPersonCamera"));
	ThirdPersonCamera->SetupAttachment(ThirdPersonSpringArm);
	ThirdPersonCamera->SetActive(false);


	// Set default movement acceleration and deceleration. 
	UFloatingPawnMovement* FloatingMovement = Cast<UFloatingPawnMovement>(GetMovementComponent());
	if (FloatingMovement)
	{
		FloatingMovement->Acceleration = 9999999999.f;
		FloatingMovement->Deceleration = 9999999999.f;
	}

	// We don't want spacebar to move up... so we have to bind *everything* ourselves >_>
	bAddDefaultMovementBindings = false;
}

void AOrbiterPawn::BeginPlay()
{
	Super::BeginPlay();

	GeoRefSystem = AGeoReferencingSystem::GetGeoReferencingSystem(GetWorld());
}


void AOrbiterPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateFlightSpeed();

}

// Bind button presses to functions
void AOrbiterPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (InputComponent)
	{
		InputComponent->BindAxis("MoveUp", this, &AOrbiterPawn::MoveUp_World);
		InputComponent->BindAxis("MoveForward", this, &AOrbiterPawn::MoveForward);
		InputComponent->BindAxis("MoveRight", this, &AOrbiterPawn::MoveRight);
		InputComponent->BindAxis("Turn", this, &AOrbiterPawn::AddControllerYawInput);
		InputComponent->BindAxis("LookUp", this, &AOrbiterPawn::AddControllerPitchInput);
		InputComponent->BindAxis("AdjustOrbitDistance", this, &AOrbiterPawn::AdjustOrbitDistance);
	}
}

void AOrbiterPawn::SetPlayerDefaults()
{
	Super::SetPlayerDefaults();

	// ControlRotation is set in about 7 different places on startup. This is the last function I (pjb) 
	// could find that was called on the Pawn on startup that would let us override the starting orientation
	AdjustInitialOrientation();
}

void AOrbiterPawn::AdjustInitialOrientation()
{
	if (GeoRefSystem && GeoRefSystem->PlanetShape == EPlanetShape::RoundPlanet)
	{
		const FVector PlanetCenter = GeoRefSystem->GetPlanetCenterTransform().GetLocation();
		const float DistToPlanetCenterSq = (GetPawnViewLocation() - PlanetCenter).SizeSquared();

		// If we're in space, look down towards the globe.
		if (DistToPlanetCenterSq > KarmanLineSq)
		{
			// Rotate to face the center of the earth, north-up
			Controller->SetControlRotation(FRotator(-90, -90, 0));
		}
	}
}


FRotator AOrbiterPawn::GetViewRotation() const
{
	// Apply view rotation to local geo space
	return (FRotationMatrix(ADefaultPawn::GetViewRotation()) * GetEnuFrame()).Rotator();
}

void AOrbiterPawn::ApplyWorldOffset(const FVector& InOffset, bool bWorldShift)
{
	Super::ApplyWorldOffset(InOffset, bWorldShift);

	TrueOrigin = TrueOrigin + InOffset;
}

void AOrbiterPawn::MoveForward(float Val)
{
	 if (Val != 0.f)
	{
		FRotator const ControlSpaceRot = GetViewRotation();

		AddMovementInput(FRotationMatrix(ControlSpaceRot).GetScaledAxis(EAxis::X), Val);
	}
}

void AOrbiterPawn::MoveRight(float Val)
{
	 if (Val != 0.f)
	{
		FRotator const ControlSpaceRot = GetViewRotation();

		AddMovementInput(FRotationMatrix(ControlSpaceRot).GetScaledAxis(EAxis::Y), Val);
	}
}

void AOrbiterPawn::MoveUp_World(float Val)
{
	 if (Val != 0.f)
	{
		AddMovementInput(GetEnuFrame().GetScaledAxis(EAxis::Z), Val);
	}
}

void AOrbiterPawn::UpdateFlightSpeed()
{
	if (GeoRefSystem)
	{
		FCartesianCoordinates ECEF;
		FGeographicCoordinates Geo;
		GeoRefSystem->EngineToECEF(GetActorLocation(), ECEF);
		GeoRefSystem->ECEFToGeographic(ECEF, Geo);
		const float AltitudeKm = Geo.Altitude / 1000.f;

		// Update the flight speed using the curve. 
		UFloatingPawnMovement* FloatingMovement = Cast<UFloatingPawnMovement>(GetMovementComponent());
		if (FloatingMovement && FlightCurve)
		{
			const float FlightSpeed = FlightCurve->GetFloatValue(AltitudeKm);
			FloatingMovement->MaxSpeed = FlightSpeed * FlightScale;
		}
	}
}

void AOrbiterPawn::ActivateFirstPersonCamera()
{
	FirstPersonCamera->SetActive(true);
	ThirdPersonCamera->SetActive(false);
	ThirdPersonSpringArm->SetActive(false);
}

void AOrbiterPawn::ActivateThirdPersonCamera()
{
	ThirdPersonSpringArm->SetActive(true);
	ThirdPersonCamera->SetActive(true);
	FirstPersonCamera->SetActive(false);
}

void AOrbiterPawn::AdjustOrbitDistance(float Direction)
{
	// Only do something if the third person camera is active and we have a non-zero direction
	// (because it's an 'axis'
	if (FMath::Abs(Direction) > KINDA_SMALL_NUMBER)
	{
		if (ThirdPersonCamera->IsActive() && FMath::Abs(Direction) > KINDA_SMALL_NUMBER)
		{
			//Check to prevent Target Arm length from going negative. Fixes object disappearing when zooming in too much
			if (ThirdPersonSpringArm->TargetArmLength + Direction * OrbitScrollMultiplier > 0)
			{
				ThirdPersonSpringArm->TargetArmLength += Direction * OrbitScrollMultiplier;
			}
		}
	}
}

void AOrbiterPawn::ResetOrbitDistance()
{
	ThirdPersonSpringArm->TargetArmLength = DefaultOrbitLength;
}

void AOrbiterPawn::CalculateOrbits(AActor& Target)
{
	FVector TargetLoc, TargetExtent;
	Target.GetActorBounds(false, TargetLoc, TargetExtent);

	// Certain components can increase the extent of an actor causing the camera to 
	// zoom very far out. Keep the bounds from exceeding a defined threshold. 
	const float BoundsThreshold(1000.f);
	float BoundsRadiusHorizontal = FMath::Min(BoundsThreshold, FMath::Max(TargetExtent.X, TargetExtent.Y));
	TargetExtent.Z = FMath::Min(TargetExtent.Z, BoundsThreshold);

	// Default to an orbit such that the target only takes up no more than ~1/3 of the camera's 
	// view, horizontally or vertically
	const float OneOverBoundsFovPct = 3.f;

	DefaultOrbitLength = FMath::Max(
		// Horizontal FoV calculation
		(BoundsRadiusHorizontal * OneOverBoundsFovPct) / FMath::Tan(FMath::DegreesToRadians(ThirdPersonCamera->FieldOfView * 0.5)),
		// Vertical FoV calcuation
		(TargetExtent.Z * OneOverBoundsFovPct) / FMath::Tan(FMath::DegreesToRadians((ThirdPersonCamera->FieldOfView / ThirdPersonCamera->AspectRatio) * 0.5)));

	// Choose reasonable values for max/min
	MaxOrbitLength = DefaultOrbitLength * 3.f;
	MinOrbitLength = FMath::Max(BoundsRadiusHorizontal, TargetExtent.Z);

	// Require 10 clicks of scroll wheel to reach max orbit length
	OrbitScrollMultiplier = (MaxOrbitLength - DefaultOrbitLength) / 10.f;
}

FMatrix AOrbiterPawn::GetEnuFrame() const
{
	if (!GeoRefSystem)
	{
		UE_LOG(LogTemp, Error, TEXT("%s GeoReferencingSystem actor not found."), ANSI_TO_TCHAR(__FUNCTION__));
		return FMatrix::Identity;
	}

	return GeoRefSystem->GetTangentTransformAtEngineLocation(GetPawnViewLocation()).ToMatrixNoScale();
}

void AOrbiterPawn::SetSpectateTarget(AActor* Target, bool bUseFirstPerson)
{
	APlayerController* PC = Cast<APlayerController>(Controller);
	if (!PC)
	{
		return;
	}

	if (SpectateTarget == Target)
	{
		return;
	}

	SpectateTarget = Target;


	if (Target)
	{
		// Activate camera component
		if (bUseFirstPerson)
		{
			ActivateFirstPersonCamera();
		}
		else
		{
			ActivateThirdPersonCamera();
		}

		// Disable pawn movement
		MovementComponent->SetActive(false);

		// Attach to target actor
		AttachToActor(Target, FAttachmentTransformRules::SnapToTargetNotIncludingScale);


		// Reset view target then set it back to us so we blend smoothly to our new location
		PC->SetViewTargetWithBlend(nullptr, 0.25, EViewTargetBlendFunction::VTBlend_Linear, 1.0, true);
		PC->SetViewTargetWithBlend(this, 0.25, EViewTargetBlendFunction::VTBlend_EaseOut, 1.0, true);

		ThirdPersonSpringArm->TargetOffset = FVector(0.f);

		CalculateOrbits(*Target);

		ThirdPersonSpringArm->TargetArmLength = DefaultOrbitLength;
		//ThirdPersonSpringArm->PreviousArmLength = ThirdPersonSpringArm->TargetArmLength;
	}
	else
	{
		// Snap us to the current camera location
		FVector CameraLoc;
		FRotator CameraRot;
		PC->GetPlayerViewPoint(CameraLoc, CameraRot);
		SetActorLocationAndRotation(CameraLoc, CameraRot);

		// Switch to 1p
		ActivateFirstPersonCamera();

		PC->SetViewTarget(this);

		// Enable pawn movement
		MovementComponent->SetActive(true);

		DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	}
	// Update the arm's orbit target so it doesn't block the arm trace
	//ThirdPersonSpringArm->OrbitTarget = Target;
}

