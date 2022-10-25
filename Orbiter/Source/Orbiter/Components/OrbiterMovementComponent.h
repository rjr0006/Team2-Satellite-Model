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
		
public:
	UPROPERTY()
	TObjectPtr<AOrbiterDataService> DataService;
};
