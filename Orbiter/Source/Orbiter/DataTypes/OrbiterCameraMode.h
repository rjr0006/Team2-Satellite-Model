

#pragma once

#include "OrbiterCameraMode.generated.h"

UENUM(BlueprintType)
enum class EOrbiterCameraMode : uint8
{
	SatelliteFixed	= 0,
	NorthPole		= 1,
	FreeFly			= 2,
	MODE_MAX		= 3
};

