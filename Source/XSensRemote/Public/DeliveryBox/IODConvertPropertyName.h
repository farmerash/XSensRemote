// Copyright 2020. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IODConvertPropertyName.generated.h"

UINTERFACE(BlueprintType)
class XSENSREMOTE_API UODConvertPropertyName : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class XSENSREMOTE_API IODConvertPropertyName
{
	GENERATED_IINTERFACE_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "XSensRemote")
	FString ConvertFPropertyName(const FName& PropertyName) const;
};