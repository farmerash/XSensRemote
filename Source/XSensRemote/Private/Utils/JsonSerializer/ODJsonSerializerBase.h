// Copyright 2020. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "DeliveryBox/ODOverrideJsonSerializer.h"
#include "ODJsonSerializerBase.generated.h"

UCLASS()
class XSENSREMOTE_API UODJsonSerializerBase : public UObject
{
	GENERATED_BODY()

public:
	UODJsonSerializerBase();

	void AddOverrideJsonSerializers(EODJsonSerializeType DefaultSerializerType, const TMap<UClass*, EODJsonSerializeType>& ObjectSerializerTypes);

protected:
	UODOverrideJsonSerializer* CreateOverrideJsonSerializer(EODJsonSerializeType jsonSerializeType);

protected:
	UPROPERTY(Transient)
	UODOverrideJsonSerializer* DefaultSerializer;

	UPROPERTY(Transient)
	TMap<UClass*, UODOverrideJsonSerializer*> ObjectSerializeres;
};
