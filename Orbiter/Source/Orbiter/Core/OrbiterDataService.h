// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Info.h"
#include "OrbiterDataService.generated.h"

/* Forward Declarations */
class SocketPtr;
class AGeoReferencingSystem;
class UOrbiterMovementComponent;

USTRUCT(BlueprintType)
struct FBodyState
{
	GENERATED_BODY()
public:
	double UtcTime;
	FVector3d LatLongAlt;
	FVector3d Ecef;
	FVector3d EcefVelocity;
	FQuat EciRotation;
	FQuat EcefRotation;
};

/**
 * 
 */
UCLASS()
class ORBITER_API AOrbiterDataService : public AInfo
{
	GENERATED_BODY()

public:
	AOrbiterDataService();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	void Connect();
	void Disconnect();

private:
	void CreateSatellite();
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int VariableSize{0};
	/* An actor that will be spawned if the entity type is not mapped. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSoftClassPath SatelliteActorClass;

	UPROPERTY()
	TObjectPtr<AGeoReferencingSystem> CachedGeoSystem;


private:
	TSharedPtr<FSocket> SocketPtr;
	
	UPROPERTY()
	TObjectPtr<AActor> Satellite;

	// Could be changed to a TArray for multiple satellites. 
	UPROPERTY()
	TObjectPtr<UOrbiterMovementComponent> MovementComponent;

};
