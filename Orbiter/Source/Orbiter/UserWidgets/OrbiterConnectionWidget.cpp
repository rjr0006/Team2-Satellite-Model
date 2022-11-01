// Fill out your copyright notice in the Description page of Project Settings.


#include "Orbiter/UserWidgets/OrbiterConnectionWidget.h"
#include "Orbiter/Core/OrbiterDataService.h"
#include "Components/EditableText.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"

void UOrbiterConnectionWidget::NativeConstruct()
{
	Super::NativeConstruct();

	CachedDataService = AOrbiterDataService::GetDataService(this);

	if (AddressTextBox)
	{
		AddressTextBox->OnTextCommitted.AddDynamic(this, &UOrbiterConnectionWidget::OnAddressCommitted);
	}
	if (PortTextBox)
	{
		PortTextBox->OnTextCommitted.AddDynamic(this, &UOrbiterConnectionWidget::OnPortCommitted);
	}
	if (ConnectionButton)
	{
		ConnectionButton->OnReleased.AddDynamic(this, &UOrbiterConnectionWidget::OnConnectionButtonReleased);
	}

	if (CachedDataService)
	{
		AddressTextBox->SetText(FText::FromString(CachedDataService->IpAddress));
		PortTextBox->SetText(FText::FromString(FString::FromInt(CachedDataService->Port)));
		const FText ConnectedText = CachedDataService->bIsConnected ? FText::FromString("Disconnect") : FText::FromString("Connect");
		ConnectionText->SetText(ConnectedText);
	}
}

void UOrbiterConnectionWidget::NativeDestruct()
{
	Super::NativeDestruct();

	if (AddressTextBox)
	{
		AddressTextBox->OnTextCommitted.RemoveAll(this);
	}
	if (PortTextBox)
	{
		PortTextBox->OnTextCommitted.RemoveAll(this);
	}
	if (ConnectionButton)
	{
		ConnectionButton->OnReleased.RemoveAll(this);
	}
}


void UOrbiterConnectionWidget::OnAddressCommitted(const FText& Address, ETextCommit::Type CommitMethod)
{
	if (!CachedDataService)
		return;	

	// Could add a check for a valid address. 

	CachedDataService->IpAddress = Address.ToString();
}

void UOrbiterConnectionWidget::OnPortCommitted(const FText& Port, ETextCommit::Type CommitMethod)
{
	if (!CachedDataService)
		return;


	CachedDataService->Port = FCString::Atoi(*Port.ToString());

}

void UOrbiterConnectionWidget::OnConnectionButtonReleased()
{
	if (!CachedDataService)
		return;

	if (CachedDataService->bIsConnected)
	{
		CachedDataService->Disconnect();
		ConnectionText->SetText(FText::FromString("Connect"));

	}
	else
	{
		CachedDataService->Connect();
		ConnectionText->SetText(FText::FromString("Disconnect"));

	}
}
