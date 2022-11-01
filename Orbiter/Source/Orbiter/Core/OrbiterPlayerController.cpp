// Fill out your copyright notice in the Description page of Project Settings.


#include "Orbiter/Core/OrbiterPlayerController.h"
#include "Orbiter/DataTypes/OrbiterCameraMode.h"

void AOrbiterPlayerController::SetSatelliteCameraMode(const EOrbiterCameraMode CameraMode)
{
	SatelliteCameraMode = CameraMode;
}
