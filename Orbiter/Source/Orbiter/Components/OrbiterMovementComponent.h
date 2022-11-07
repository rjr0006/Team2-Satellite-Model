// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "OrbiterMovementComponent.generated.h"

// Forward Declarations
class AOrbiterDataService;
struct FBodyState;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ORBITER_API UOrbiterMovementComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOrbiterMovementComponent();

	void RegisterWithService(AOrbiterDataService* InDataService);
	void TickMovement(float DeltaTime, const FBodyState& NewState);
	void OrientationStates(FTransform EcefToEnu, FVector3d LLA, FRotator Rotation, FRotator& OutRotation);

	UFUNCTION(BlueprintCallable)
	void ConvertRotation(FRotator& OutRotation);

public:
	UPROPERTY()
	TObjectPtr<AOrbiterDataService> DataService;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FQuat TestQuat { (-0.306335, 0.881598, -0.036695, 0.357207) };
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector TestLoc{ (-5032439.114494, -2329652.185219, 3902868.001784) };



	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
	//	FQuat TestQuat {
	//	(-0.306335, 0.881598, -0.036695, 0.357207)
	//};
	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
	//	FVector TestLoc {
	//	(-5762649.7257627770, -1682708.3766899903, 3156028.2696684157)
	//};

};
