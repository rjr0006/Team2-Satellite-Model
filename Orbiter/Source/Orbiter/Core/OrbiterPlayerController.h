// Fill out your copyright notice in the Description page of Project Settings.

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

	void SetSatelliteCameraMode(const EOrbiterCameraMode CameraMode);
	

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Orbiter)
	EOrbiterCameraMode SatelliteCameraMode;
};
