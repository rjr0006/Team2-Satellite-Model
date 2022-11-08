
#pragma once

#include "Blueprint/UserWidget.h"
#include "OrbiterCameraMenuWidget.generated.h"

/* Forward Declarations */
class UComboBoxString;
enum class EOrbiterCameraMode : uint8;

/**
 * 
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
	UFUNCTION()
	void OnCameraOptionSelected(FString SelectedItem, ESelectInfo::Type SelectionType);
protected:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UComboBoxString> CameraComboBox;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<EOrbiterCameraMode, FString> CameraModeToNameMap;

};
