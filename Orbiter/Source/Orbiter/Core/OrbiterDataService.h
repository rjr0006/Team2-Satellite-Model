// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Info.h"
#include "OrbiterDataService.generated.h"

/* Forward Declarations */
class SocketPtr;

/**
 * 
 */
UCLASS()
class ORBITER_API AOrbiterDataService : public AInfo
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	void Connect();
	void Disconnect();
	
private:
	TSharedPtr<FSocket> SocketPtr;
};
