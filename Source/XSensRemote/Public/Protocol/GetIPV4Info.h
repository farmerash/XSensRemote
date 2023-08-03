// Copyright 2020. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GetIPV4Info.generated.h"

UINTERFACE(BlueprintType, meta = (CannotImplementInterfaceInBlueprint))
class XSENSREMOTE_API UGetIPV4Info : public UInterface
{
	GENERATED_BODY()
};


class XSENSREMOTE_API IGetIPV4Info 
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "XSensRemote")
	virtual bool GetIPAddress(TArray<uint8>& IPAddress) = 0;

	UFUNCTION(BlueprintCallable, Category = "XSensRemote")
	virtual bool GetIPAddressInString(FString& IPAddress) = 0;
};
