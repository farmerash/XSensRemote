// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XSensRemote/Public/DeliveryBox/DeliveryBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeliveryBox() {}
// Cross Module References
	XSENSREMOTE_API UClass* Z_Construct_UClass_UDeliveryBox_NoRegister();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UDeliveryBox();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_XSensRemote();
// End Cross Module References
	void UDeliveryBox::StaticRegisterNativesUDeliveryBox()
	{
	}
	UClass* Z_Construct_UClass_UDeliveryBox_NoRegister()
	{
		return UDeliveryBox::StaticClass();
	}
	struct Z_Construct_UClass_UDeliveryBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeliveryBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_XSensRemote,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeliveryBox_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DeliveryBox/DeliveryBox.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DeliveryBox/DeliveryBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeliveryBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeliveryBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeliveryBox_Statics::ClassParams = {
		&UDeliveryBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDeliveryBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeliveryBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeliveryBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeliveryBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeliveryBox, 2521443116);
	template<> XSENSREMOTE_API UClass* StaticClass<UDeliveryBox>()
	{
		return UDeliveryBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeliveryBox(Z_Construct_UClass_UDeliveryBox, &UDeliveryBox::StaticClass, TEXT("/Script/XSensRemote"), TEXT("UDeliveryBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeliveryBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
