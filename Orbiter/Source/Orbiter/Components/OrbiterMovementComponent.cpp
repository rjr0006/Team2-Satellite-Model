// Fill out your copyright notice in the Description page of Project Settings.


#include "Orbiter/Components/OrbiterMovementComponent.h"
#include "Orbiter/Core/OrbiterDataService.h"
#include "GeoReferencingSystem.h"

// Sets default values for this component's properties
UOrbiterMovementComponent::UOrbiterMovementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

void UOrbiterMovementComponent::RegisterWithService(AOrbiterDataService* InDataService)
{
	DataService = InDataService;
}

void UOrbiterMovementComponent::TickMovement(float DeltaTime, const FBodyState& NewState)
{
	if (!DataService)
		return;

	AGeoReferencingSystem* GeoSystem = DataService->CachedGeoSystem;

	if (!GeoSystem)
		return;

	// Location
	FVector Location;
	GeoSystem->ECEFToEngine(NewState.Ecef, Location);

	// Finally set the final location.
	GetOwner()->SetActorLocation(Location);

}

