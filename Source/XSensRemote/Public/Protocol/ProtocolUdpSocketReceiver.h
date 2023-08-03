// Copyright 2020. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "ProtocolSocketBase.h"
#include "Utils/ODGrowBuffer.h"
#include "ProtocolUdpSocketReceiver.generated.h"


class FSocket;
class FUdpSocketReceiver;
class UProtocolUdpSocket;

UCLASS(BlueprintType, Blueprintable)
class XSENSREMOTE_API UProtocolUdpSocketReceiver : public UProtocolSocketBase
{
	GENERATED_BODY()

public:
	UProtocolUdpSocketReceiver();
	~UProtocolUdpSocketReceiver();

	UFUNCTION(BlueprintCallable, Category = "XSensRemote|Protocol")
	void InitializeWithReceiver(int32 BoundPort = 8000);

	UFUNCTION(BlueprintCallable, Category = "XSensRemote|Protocol")
	UProtocolUdpSocketReceiver* WithReceiveBufferSize(int32 SizeInBytes);

	virtual void Start() override;
	virtual void Close() override;

protected:
	void UdpReceivedCallback(const FArrayReaderPtr& data, const FIPv4Endpoint& ip);
	
	UFUNCTION()
	void ReceiveDataFromClient(const UObjectDelivererProtocol* ClientSocket, const TArray<uint8>& Buffer);

	bool ReceivedData();

private:
	FCriticalSection ct;
	TMap<FIPv4Endpoint, UProtocolUdpSocket*> ConnectedSockets;
	class FODWorkerThread* CurrentInnerThread = nullptr;
	class FRunnableThread* CurrentThread = nullptr;
	ODGrowBuffer ReceiveBuffer;
	bool IsSelfClose = false;
	ISocketSubsystem* SocketSubsystem;

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = true), Category = "XSensRemote|Protocol")
	int32 BoundPort = 8000;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = true), Category = "XSensRemote|Protocol")
	int32 ReceiveBufferSize = 1024 * 1024;

};
