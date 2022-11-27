
#pragma once

#include "Components/ActorComponent.h"
#include "OrbiterMovementComponent.generated.h"

// Forward Declarations
class AOrbiterDataService;
struct FBodyState;

/**
 * @brief Orbiter movement can be added to an actor to position it with 
 * body state data. 
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ORBITER_API UOrbiterMovementComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	/* Constructor */
	UOrbiterMovementComponent();

	/**
	 * @brief Register this component with the data service. 
	 * 
	 * @param InDataService - The service to register with
	 */
	void RegisterWithService(AOrbiterDataService* InDataService);
	/**
	 * @brief Update the componenet
	 * 
	 * @param DeltaTime - The time between the last update. 
	 * @param NewState 	- The new state data. 
	 */
	void TickMovement(float DeltaTime, const FBodyState& NewState);

public:
 	/* Cached data service */
	UPROPERTY()
	TObjectPtr<AOrbiterDataService> DataService;
};
