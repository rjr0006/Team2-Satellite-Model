
#include "OrbiterGameModeBase.h"
#include "Orbiter/Core/OrbiterPawn.h"
#include "Orbiter/Core/OrbiterPlayerController.h"

AOrbiterGameModeBase::AOrbiterGameModeBase()
{
    // Set default classes 
   	DefaultPawnClass = AOrbiterPawn::StaticClass();
    PlayerControllerClass = AOrbiterPlayerController::StaticClass();
}