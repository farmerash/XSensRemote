// Copyright 2020. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "ODStringUtil.generated.h"


UCLASS(BlueprintType)
class XSENSREMOTE_API UODStringUtil : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "XSensRemote")
	static void StringToBuffer(const FString& message, TArray<uint8>& DataBuffer);

	UFUNCTION(BlueprintPure, Category = "XSensRemote")
	static FString BufferToString(const TArray<uint8>& DataBuffer);
	

	UFUNCTION(BlueprintPure, Category = "XSensRemote")
	static void SendReCenter(TArray<uint8>& DataBuffer);


};
