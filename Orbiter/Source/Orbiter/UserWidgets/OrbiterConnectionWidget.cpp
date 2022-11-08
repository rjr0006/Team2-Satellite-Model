
#include "Orbiter/UserWidgets/OrbiterConnectionWidget.h"
#include "Components/EditableText.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Orbiter/Core/OrbiterDataService.h"

void UOrbiterConnectionWidget::NativeConstruct()
{
	Super::NativeConstruct();

	CachedDataService = AOrbiterDataService::GetDataService(this);

	// Bind to the widget delegates. 
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

	// Initialize the content in the widgets. 
	if (CachedDataService)
	{
		const FText AddressText = FText::FromString(CachedDataService->IpAddress);
		const FText PortText = FText::FromString(FString::FromInt(CachedDataService->Port));
		const FText ConnectedText = CachedDataService->bIsConnected ? FText::FromString("Disconnect") : FText::FromString("Connect");
		AddressTextBox->SetText(AddressText);
		PortTextBox->SetText(PortText);		
		ConnectionText->SetText(ConnectedText);
	}
}

void UOrbiterConnectionWidget::NativeDestruct()
{
	Super::NativeDestruct();

	// Remove delegate bindings. 
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

	// TODO: Check for valid address format 
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
