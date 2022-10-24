// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Info.h"
#include "OrbiterDataService.generated.h"

/* Forward Declarations */
class SocketPtr;

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
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int VariableSize{0};
private:
	TSharedPtr<FSocket> SocketPtr;
};
