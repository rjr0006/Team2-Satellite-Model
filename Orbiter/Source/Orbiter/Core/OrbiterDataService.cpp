// Fill out your copyright notice in the Description page of Project Settings.


#include "Orbiter/Core/OrbiterDataService.h"
#include "SocketSubsystem.h"
#include "Interfaces/IPv4/IPv4Address.h"
#include "Sockets.h"

void AOrbiterDataService::BeginPlay()
{
	Super::BeginPlay();
	Connect();
}

void AOrbiterDataService::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!SocketPtr) 
		return;

	//Binary Array!
	TArray<uint8> ReceivedData;

	uint32 Size;
	while (SocketPtr->HasPendingData(Size))
	{
		ReceivedData.Init(FMath::Min(Size, 65507u), Size);

		int32 Read = 0;
		SocketPtr->Recv(ReceivedData.GetData(), ReceivedData.Num(), Read);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Data Read! %d"), ReceivedData.Num()));
	}
}
void AOrbiterDataService::Connect()
{
	if (SocketPtr)
	{
		Disconnect();
	}

	SocketPtr = MakeShareable(ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_DGram, TEXT("default"), false));

	FString address = TEXT("127.0.0.1");
	int32 port = 8080;
	FIPv4Address ip;
	FIPv4Address::Parse(address, ip);
	TSharedRef<FInternetAddr> addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	addr->SetIp(ip.Value);
	addr->SetPort(port);



	if (!SocketPtr->Bind(*addr)) {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Faied to bind socket");
		}
	}
	else {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, "Socket connect succesuflly");
		}
	}
}


void AOrbiterDataService::Disconnect()
{
	if (SocketPtr)
	{
		SocketPtr->Close();
		SocketPtr.Reset();
	}
}

