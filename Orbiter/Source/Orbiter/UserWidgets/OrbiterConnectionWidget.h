
#pragma once

#include "Blueprint/UserWidget.h"
#include "OrbiterConnectionWidget.generated.h"

/* Forward Declarations */
class AOrbiterDataService;
class UButton;
class UEditableText;
class UTextBlock;

/**
 * Dispalys the connection ip address, port, and status. Also,
 * Allows the user to connect and disconnect. 
 * Widgets are bound in the derived class.
 * Derived Class: Content/Orbiter/UserWidgets/WBP_OrbiterConnection
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
	/**
	 * @brief Callback when the address text block is committed
	 * 
	 * @param Address - IP Address text
	 * @param CommitType - How the user committed the change. 
	 */
	UFUNCTION()
	void OnAddressCommitted(const FText& Address, ETextCommit::Type CommitMethod);
	/**
	 * @brief Callback when the port text block is committed
	 * 
	 * @param Port - Port text
	 * @param CommitType - How the user committed the change. 
	 */
	UFUNCTION()
	void OnPortCommitted(const FText& Port, ETextCommit::Type CommitMethod);
	/**
	 * @brief Callback when the connection button is released. 
	 */
	UFUNCTION()
	void OnConnectionButtonReleased();
protected:
	/* Text box for the user to set the ip address. */
	UPROPERTY(meta = (BindWidget))
	UEditableText* AddressTextBox;
	/* Text box for the user to set the port number. */
	UPROPERTY(meta = (BindWidget))
	UEditableText* PortTextBox;
	/* Button that connects / disconnects */
	UPROPERTY(meta = (BindWidget))
	UButton* ConnectionButton;
	/* Text within the connection button. */
	UPROPERTY(meta = (BindWidget))
	UTextBlock* ConnectionText;
	/**
	 *  Displays connection status 
	 * 	TODO: Change text color with status. 
	*/
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> StatusTextBlock;

private:
	/* Cached data service. */
	UPROPERTY()
	TObjectPtr<AOrbiterDataService> CachedDataService;
};
