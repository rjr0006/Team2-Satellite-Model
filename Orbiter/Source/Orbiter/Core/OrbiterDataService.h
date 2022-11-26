
#pragma once

#include "GameFramework/Info.h"
#include "OrbiterDataService.generated.h"

/* Forward Declarations */
class AGeoReferencingSystem;
class FSocket;
class UOrbiterMovementComponent;

/* Notify subscribers when a satellite has been created. */
DECLARE_MULTICAST_DELEGATE_OneParam(FSatelliteSpawned, TObjectPtr<AActor>);

/**
 * @brief Describes a satellite ody state. 
 */
USTRUCT(BlueprintType)
struct FBodyState
{
	GENERATED_BODY()
public:
	/* Time the state was received */
	double UtcTime;
	/* Latitude, Longitude, and Altitude */
	FVector3d LatLongAlt;
	/* Earth Centered Earth Fixed Position */
	FVector3d Ecef;
	/* Earth Centered Earth Fixed Velocity */
	FVector3d EcefVelocity;
	/* Earth Centered Inertial Rotation */
	FQuat EciRotation;
	/* Earth Centered Earth Fixed Rotation */
	FQuat EcefRotation;
};


/**
 * @brief Manage body state updates and establish udp / tcp connection
 */
UCLASS()
class ORBITER_API AOrbiterDataService : public AInfo
{
	GENERATED_BODY()

public:
	/* Constructor*/
	AOrbiterDataService();

	/* AActor Overrides */
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	/* Get the data service actor */
	UFUNCTION(BlueprintPure, Category = "OrbiterDataService", meta = (WorldContext = "WorldContextObject"))
	static AOrbiterDataService* GetDataService(UObject* WorldContextObject);

	/* Connect using tcp or udp */
	void Connect();
	/* Disconnect from the current connection */
	void Disconnect();
	/* Get the satellite spawned delegate. */
	FSatelliteSpawned& GetSatelliteSpawnedDelegate() { return OnSatelliteSpawned; }

private:
	/* Construct the satellite */
	void CreateSatellite();
	
public:
	/* An actor that will be spawned if the entity type is not mapped. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSoftClassPath SatelliteActorClass;
	/* The ip address the system the visualizer is running on */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString IpAddress { FString("127.0.0.1") };
	/* Default connection port */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Port { 24999 };
	/* Whether the service is connected or not. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsConnected {false};
	/* Cached geo reference system */
	UPROPERTY()
	TObjectPtr<AGeoReferencingSystem> CachedGeoSystem;
	/* Current simulation time */
	UPROPERTY()
	float SimulationTime;
protected:

	/* Cached satellite actor */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<AActor> Satellite;
	// Could be changed to a TArray for multiple satellites. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UOrbiterMovementComponent> MovementComponent;

private:
	/* Current connection */
	TSharedPtr<FSocket> SocketPtr;
	/* Delegate for when a satellite is spawned */
	FSatelliteSpawned OnSatelliteSpawned;

	/* Cached satellite body state */
	FBodyState CachedState;
};
