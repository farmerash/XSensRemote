// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XSensRemote/Public/PacketRule/PacketRuleNodivision.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacketRuleNodivision() {}
// Cross Module References
	XSENSREMOTE_API UClass* Z_Construct_UClass_UPacketRuleNodivision_NoRegister();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UPacketRuleNodivision();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UPacketRule();
	UPackage* Z_Construct_UPackage__Script_XSensRemote();
// End Cross Module References
	void UPacketRuleNodivision::StaticRegisterNativesUPacketRuleNodivision()
	{
	}
	UClass* Z_Construct_UClass_UPacketRuleNodivision_NoRegister()
	{
		return UPacketRuleNodivision::StaticClass();
	}
	struct Z_Construct_UClass_UPacketRuleNodivision_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPacketRuleNodivision_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPacketRule,
		(UObject* (*)())Z_Construct_UPackage__Script_XSensRemote,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPacketRuleNodivision_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PacketRule/PacketRuleNodivision.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PacketRule/PacketRuleNodivision.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPacketRuleNodivision_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPacketRuleNodivision>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPacketRuleNodivision_Statics::ClassParams = {
		&UPacketRuleNodivision::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPacketRuleNodivision_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPacketRuleNodivision_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPacketRuleNodivision()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPacketRuleNodivision_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPacketRuleNodivision, 3272428402);
	template<> XSENSREMOTE_API UClass* StaticClass<UPacketRuleNodivision>()
	{
		return UPacketRuleNodivision::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPacketRuleNodivision(Z_Construct_UClass_UPacketRuleNodivision, &UPacketRuleNodivision::StaticClass, TEXT("/Script/XSensRemote"), TEXT("UPacketRuleNodivision"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPacketRuleNodivision);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
