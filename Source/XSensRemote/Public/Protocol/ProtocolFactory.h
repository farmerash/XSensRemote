// Copyright 2020. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "ProtocolFactory.generated.h"


UCLASS(BlueprintType)
class XSENSREMOTE_API UProtocolFactory : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * create protocol (UDP send only)
	 * @param IpAddress - ip address of the destination
	 * @param Port - port number of the destination
	 */
	UFUNCTION(BlueprintPure, Category = "XSensRemote|Protocol")
	static class UProtocolUdpSocketSender* CreateProtocolUdpSocketSender(const FString& IpAddress = "localhost", int32 Port = 8000);

	/**
	 * create protocol (UDP receive only)
	 * @param Port - Port number to bind to
	 */
	UFUNCTION(BlueprintPure, Category = "XSensRemote|Protocol")
	static class UProtocolUdpSocketReceiver* CreateProtocolUdpSocketReceiver(int32 BoundPort = 8000);



};
