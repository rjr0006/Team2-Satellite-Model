

#pragma once

#include "OrbiterCameraMode.generated.h"

UENUM(BlueprintType)
enum class EOrbiterCameraMode : uint8
{
	FreeFly			= 0,
	SatelliteFixed	= 1,
	MODE_MAX		= 3
};

