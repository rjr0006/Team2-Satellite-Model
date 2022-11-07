// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/SpectatorPawn.h"
#include "OrbiterPawn.generated.h"

class AGeoReferencingSystem;
class UInputComponent;

UCLASS(Config = Game)
class ORBITER_API AOrbiterPawn : public ASpectatorPawn
{
	GENERATED_UCLASS_BODY()

public:

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	virtual void ApplyWorldOffset(const FVector& InOffset, bool bWorldShift) override;
	virtual FRotator GetViewRotation() const override;
	virtual void SetPlayerDefaults() override;


	/* Override movement controls. */
	virtual void MoveForward(float Val) override;
	virtual void MoveRight(float Val) override;
	virtual void MoveUp_World(float Val) override;
	/**
 * Modifies the 3p camera's spring arm length in the desired direction, zooming into or out
 * from the spectate target.
 */
	void AdjustOrbitDistance(float Direction);
	/** Resets the 3p camera's spring arm length to the default value we calculated. */
	void ResetOrbitDistance();

	/**
 * Gets a matrix that rotates from the world space to the pawn's local (ENU) space
 * based on the world's coordinate system settings.
 */
	FMatrix GetEnuFrame() const;

	void SetSpectateTarget(AActor* Target, bool bUseFirstPerson);


protected:
	/** Update the pawn flight speed using the flight float curve. */
	virtual void UpdateFlightSpeed();


	/** Directly activate camera, deactivating the other. */
	void ActivateFirstPersonCamera();
	void ActivateThirdPersonCamera();


	/** Sets orbit lengths based on the spectate target. */
	void CalculateOrbits(AActor& Target);

	/**
	 * Called on startup to rotate the controller such that it faces the center of
	 * the earth north-up if we're in ECEF and in space.
	 */
	void AdjustInitialOrientation();

protected:
		/* True origin of level. */
	UPROPERTY(VisibleAnywhere)
	FVector TrueOrigin;

	/** Default 3p cam orbit distance. Can reset to this distance with middle mouse. */
	float DefaultOrbitLength;

	/** Furthest we want to allow our 3p cam to orbit around our spectate target. */
	float MaxOrbitLength;
	/** Closest we want to allow our 3p cam to orbit around our spectate target. */
	float MinOrbitLength;
	/** Speed at which scrollwheel should change orbit distance. */
	float OrbitScrollMultiplier{ 1.f };

	/* The current flight increment value used to adjust the pawn flight speed. */
	UPROPERTY(VisibleAnywhere, Category=DashMovement)
	float FlightIncrement{0.f};
	/* The curve used to update the flight speed of the pawn movment component. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DashMovement, meta = (AllowPrivateAccess = "true"))
	UCurveFloat* FlightCurve;
	/*Sets the flight speed relative to the flight curve.*/
	float FlightScale = 1.0f;
	/* Georeferencing system used to get altitude. */
	UPROPERTY()
	AGeoReferencingSystem* GeoRefSystem;

	/** 1p camera component. */
	UPROPERTY(VisibleAnywhere, Category=Camera)
	class UCameraComponent* FirstPersonCamera;
	/** 3p camera component. */
	UPROPERTY(VisibleAnywhere, Category = Camera)
	class UCameraComponent* ThirdPersonCamera;
	/** 3p camera boom component. */
	UPROPERTY(VisibleAnywhere, Category = Camera)
	class USpringArmComponent* ThirdPersonSpringArm;
	/** Cached pointer to the thing we're spectating, or nullptr if we're free-flying. */
	UPROPERTY(VisibleAnywhere)
		AActor* SpectateTarget;

};
