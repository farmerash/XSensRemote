// Copyright 2020. All Rights Reserved.
#include "PacketRule/PacketRuleFactory.h"
#include "PacketRule/PacketRuleNodivision.h"


UPacketRuleNodivision* UPacketRuleFactory::CreatePacketRuleNodivision()
{
	return NewObject<UPacketRuleNodivision>();
}