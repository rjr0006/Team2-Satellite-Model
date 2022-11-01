// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"
#include "OrbiterConnectionWidget.generated.h"

/* Forward Declarations */
class UButton;
class UTextBlock;
class UEditableText;
class AOrbiterDataService;

/**
 * 
 */
UCLASS()
class ORBITER_API UOrbiterConnectionWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	/* UserWidget overrides */
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

private:
	UFUNCTION()
	void OnAddressCommitted(const FText& Address, ETextCommit::Type CommitMethod);
	UFUNCTION()
	void OnPortCommitted(const FText& Port, ETextCommit::Type CommitMethod);
	UFUNCTION()
	void OnConnectionButtonReleased();
protected:
	UPROPERTY(meta = (BindWidget))
	UEditableText* AddressTextBox;
	UPROPERTY(meta = (BindWidget))
	UEditableText* PortTextBox;
	UPROPERTY(meta = (BindWidget))
	UButton* ConnectionButton;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* ConnectionText;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* StatusTextBlock;

private:
	UPROPERTY()
	TObjectPtr<AOrbiterDataService> CachedDataService;
};
