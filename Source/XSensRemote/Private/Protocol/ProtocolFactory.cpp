// Copyright 2020 . All Rights Reserved.
#include "Protocol/ProtocolFactory.h"
#include "Protocol/ProtocolUdpSocketSender.h"
#include "Protocol/ProtocolUdpSocketReceiver.h"

UProtocolUdpSocketSender* UProtocolFactory::CreateProtocolUdpSocketSender(const FString& IpAddress /*= "localhost"*/, int32 Port /*= 8000*/)
{
	auto protocol = NewObject<UProtocolUdpSocketSender>();
	protocol->Initialize(IpAddress, Port);
	return protocol;
}

UProtocolUdpSocketReceiver* UProtocolFactory::CreateProtocolUdpSocketReceiver(int32 BoundPort /*= 8000*/)
{
	auto protocol = NewObject<UProtocolUdpSocketReceiver>();
	protocol->InitializeWithReceiver(BoundPort);
	return protocol;
}
