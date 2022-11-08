
#pragma once

#include "GameFramework/PlayerController.h"
#include "OrbiterPlayerController.generated.h"

/* Forward Declarations */
enum class EOrbiterCameraMode : uint8;

/**
 * 
 */
UCLASS()
class ORBITER_API AOrbiterPlayerController : public APlayerController
{
	GENERATED_BODY()

	
public:
	AOrbiterPlayerController();
	/* APlayerController Implementations */
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void Tick(float DeltaTime) override;


	void SetSatelliteCameraMode(const EOrbiterCameraMode CameraMode);
	

private:
	void OnSatelliteSpawned(TObjectPtr<AActor> Satellite);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Orbiter)
	EOrbiterCameraMode SatelliteCameraMode;

	
private:
	/* Whether to enable origin rebasing or not. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	bool bEnableOriginRebasing{ true };

	/* The threshold from the active view target to the origin. */
	UPROPERTY(config)
	float RebaseThreshold{ 100000.f };

	UPROPERTY()
	TObjectPtr<AActor> CachedSatellite;
};
