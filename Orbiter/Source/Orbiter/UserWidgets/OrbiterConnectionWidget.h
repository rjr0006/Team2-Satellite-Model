
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
	TObjectPtr<UEditableText> AddressTextBox;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UEditableText> PortTextBox;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> ConnectionButton;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> ConnectionText;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> StatusTextBlock;

private:
	UPROPERTY()
	TObjectPtr<AOrbiterDataService> CachedDataService;
};
