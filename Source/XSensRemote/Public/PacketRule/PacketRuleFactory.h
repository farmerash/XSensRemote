// Copyright 2020. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "PacketRule.h"
#include "PacketRuleFactory.generated.h"


UCLASS(BlueprintType)
class XSENSREMOTE_API UPacketRuleFactory : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * create packet rule (no division)
	 */
	UFUNCTION(BlueprintPure, Category = "XSensRemote|PacketRule")
	static class UPacketRuleNodivision* CreatePacketRuleNodivision();
};
