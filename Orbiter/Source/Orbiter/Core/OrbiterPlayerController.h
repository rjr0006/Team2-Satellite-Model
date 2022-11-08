
#pragma once

#include "GameFramework/PlayerController.h"
#include "OrbiterPlayerController.generated.h"

/* Forward Declarations */
enum class EOrbiterCameraMode : uint8;

/**
 * Controls the pawn and manages world origin rebasing. 
 */
UCLASS()
class ORBITER_API AOrbiterPlayerController : public APlayerController
{
	GENERATED_BODY()

	
public:
	/* Constructor */
	AOrbiterPlayerController();

	/* APlayerController Overrides */
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void Tick(float DeltaTime) override;

	/**
	 * @brief Set the Satellite Camera Mode option
	 * 
	 * @param CameraMode - satellite camera mode. 
	 */
	void SetSatelliteCameraMode(const EOrbiterCameraMode CameraMode);

private:
	/**
	 * @brief Callback for when the satellite object is spawned. 
	 * This allows us to cache the satellite. 
	 * 
	 * @param Satellite - Newly spawned satellite.
	 */
	void OnSatelliteSpawned(TObjectPtr<AActor> Satellite);

public:
	/* The satellite camera mode. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Orbiter)
	EOrbiterCameraMode SatelliteCameraMode;
	
private:
	/* Whether to enable origin rebasing or not. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	bool bEnableOriginRebasing{ true };
	/* The threshold from the active view target to the origin. */
	UPROPERTY(config)
	float RebaseThreshold{ 100000.f };
	/* The cached satellite object. */
	UPROPERTY()
	TObjectPtr<AActor> CachedSatellite;
};
