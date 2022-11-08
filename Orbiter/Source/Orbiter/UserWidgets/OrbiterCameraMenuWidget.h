
#pragma once

#include "Blueprint/UserWidget.h"
#include "OrbiterCameraMenuWidget.generated.h"

/* Forward Declarations */
class UComboBoxString;
enum class EOrbiterCameraMode : uint8;

/**
 * Displays camera options to the user.
 * Currently support Satellite-Fixed or Free Fly.
 * Derived Class: Content/Orbiter/UserWidgets/WBP_OrbiterCameraMenu
 */
UCLASS()
class ORBITER_API UOrbiterCameraMenuWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	/* UserWidget overrides */
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

private:
	/**
	 * @brief Callback when the camera option has changed. 
	 * 
	 * @param SelectedItem - Selected option
	 * @param SelectionType - How the item was selected.
	 */
	UFUNCTION()
	void OnCameraOptionSelected(FString SelectedItem, ESelectInfo::Type SelectionType);

protected:
	/* Combo box for camera options */
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UComboBoxString> CameraComboBox;
	/* A map of camera modes to display names. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<EOrbiterCameraMode, FString> CameraModeToNameMap;

};
