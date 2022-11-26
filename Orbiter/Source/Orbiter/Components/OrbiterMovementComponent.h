
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
	/**
	 * @brief Compute the orientation of the satellite
	 * 
	 * @param EcefToEnu 	- The Ecef to Enu frame
	 * @param LLA 			- Latitude, Longitude, and Altitude
	 * @param Rotation 		- Body state euler angles
	 * @return				- Computed rotation
	 */
	FRotator OrientationStates(FTransform EcefToEnu, FVector3d LLA, FRotator Rotation);

	UFUNCTION(BlueprintCallable)
	void ConvertRotation(FRotator& OutRotation);

public:
 	/* Cached data service */
	UPROPERTY()
	TObjectPtr<AOrbiterDataService> DataService;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FQuat TestQuat { (-0.306335, 0.881598, -0.036695, 0.357207) };
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector TestLoc{ (-5032439.114494, -2329652.185219, 3902868.001784) };
};
