
#pragma once

#include "GameFramework/GameModeBase.h"
#include "OrbiterGameModeBase.generated.h"

/**
 * Base game mode for the orbiter application 
 */
UCLASS()
class ORBITER_API AOrbiterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()	

public:
	/* Constructor */
	AOrbiterGameModeBase();
};
