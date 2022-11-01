// Fill out your copyright notice in the Description page of Project Settings.


#include "Orbiter/UserWidgets/OrbiterCameraMenuWidget.h"
#include "Orbiter/Core/OrbiterPlayerController.h"
#include "Components/ComboBoxString.h"
#include "Orbiter/DataTypes/OrbiterCameraMode.h"

void UOrbiterCameraMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	auto OwningPlayer = Cast<AOrbiterPlayerController>(GetOwningPlayer());

	if (!OwningPlayer)
		return;

	// Build the map
	CameraModeToNameMap.Add(EOrbiterCameraMode::SatelliteFixed, FString("Satellite Fixed"));
	CameraModeToNameMap.Add(EOrbiterCameraMode::NorthPole, FString("North Pole"));
	CameraModeToNameMap.Add(EOrbiterCameraMode::FreeFly, FString("Free Fly"));

	if (CameraComboBox)
	{
		CameraComboBox->OnSelectionChanged.AddDynamic(this, &UOrbiterCameraMenuWidget::OnCameraOptionSelected);

		// Build the camera option combo box
		TArray<FString> ValueArray;
		CameraModeToNameMap.GenerateValueArray(ValueArray);
		for (const FString Option : ValueArray)
		{
			CameraComboBox->AddOption(Option);
		}

		const FString* NamePtr = CameraModeToNameMap.Find(OwningPlayer->SatelliteCameraMode);
		CameraComboBox->SetSelectedOption(*NamePtr);
	}
}

void UOrbiterCameraMenuWidget::NativeDestruct()
{
	Super::NativeDestruct();

	if (CameraComboBox)
	{
		CameraComboBox->OnSelectionChanged.RemoveAll(this);
	}
}

void UOrbiterCameraMenuWidget::OnCameraOptionSelected(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	auto OwningPlayer = Cast<AOrbiterPlayerController>(GetOwningPlayer());

	if (!OwningPlayer)
		return;

	const EOrbiterCameraMode CameraMode = (EOrbiterCameraMode)CameraComboBox->GetSelectedIndex();
	OwningPlayer->SetSatelliteCameraMode(CameraMode);
}
