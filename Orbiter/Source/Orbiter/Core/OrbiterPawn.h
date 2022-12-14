
#pragma once

#include "GameFramework/SpectatorPawn.h"
#include "OrbiterPawn.generated.h"

/* Forward Declarations */
class UCameraComponent;
class AGeoReferencingSystem;
class UInputComponent;
class USpringArmComponent;

/**
 * Pawn that moves around the scene processes user controls. 
 * Also, contains the camera system. 
 * 
 */
UCLASS(Config = Game)
class ORBITER_API AOrbiterPawn : public ASpectatorPawn
{
	GENERATED_UCLASS_BODY()

public:
	/* ASpectatorPawn Overrides */
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

	/** 
	 * @brief Set the spectate target
	 * 
	 * @param Target - actor to spectate. 
	 * @param bUseFirstPerson - Whether to use the first or third person camera. 
	*/
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

private:
	/* Toggle the controls widget on / off. */
	void ShowControls();
	void HideControls();

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
	UPROPERTY(VisibleAnywhere, Category=Movement)
	float FlightIncrement{0.f};
	/* The curve used to update the flight speed of the pawn movment component. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	TObjectPtr<UCurveFloat> FlightCurve;
	/*Sets the flight speed relative to the flight curve.*/
	float FlightScale {1.0f};
	/* Georeferencing system used to get altitude. */
	UPROPERTY()
	TObjectPtr<AGeoReferencingSystem> GeoRefSystem;

	/** 1p camera component. */
	UPROPERTY(VisibleAnywhere, Category=Camera)
	TObjectPtr<UCameraComponent> FirstPersonCamera;
	/** 3p camera component. */
	UPROPERTY(VisibleAnywhere, Category = Camera)
	TObjectPtr<UCameraComponent> ThirdPersonCamera;
	/** 3p camera boom component. */
	UPROPERTY(VisibleAnywhere, Category = Camera)
	TObjectPtr<USpringArmComponent> ThirdPersonSpringArm;
	/** Cached pointer to the thing we're spectating, or nullptr if we're free-flying. */
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<AActor> SpectateTarget;

};
