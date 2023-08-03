// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XSensRemote/Public/Protocol/ObjectDelivererProtocol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectDelivererProtocol() {}
// Cross Module References
	XSENSREMOTE_API UClass* Z_Construct_UClass_UObjectDelivererProtocol_NoRegister();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UObjectDelivererProtocol();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_XSensRemote();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UPacketRule_NoRegister();
// End Cross Module References
	void UObjectDelivererProtocol::StaticRegisterNativesUObjectDelivererProtocol()
	{
	}
	UClass* Z_Construct_UClass_UObjectDelivererProtocol_NoRegister()
	{
		return UObjectDelivererProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UObjectDelivererProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacketRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PacketRule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectDelivererProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_XSensRemote,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectDelivererProtocol_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Protocol/ObjectDelivererProtocol.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Protocol/ObjectDelivererProtocol.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectDelivererProtocol_Statics::NewProp_PacketRule_MetaData[] = {
		{ "ModuleRelativePath", "Public/Protocol/ObjectDelivererProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectDelivererProtocol_Statics::NewProp_PacketRule = { "PacketRule", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectDelivererProtocol, PacketRule), Z_Construct_UClass_UPacketRule_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UObjectDelivererProtocol_Statics::NewProp_PacketRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectDelivererProtocol_Statics::NewProp_PacketRule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectDelivererProtocol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectDelivererProtocol_Statics::NewProp_PacketRule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectDelivererProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectDelivererProtocol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectDelivererProtocol_Statics::ClassParams = {
		&UObjectDelivererProtocol::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UObjectDelivererProtocol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectDelivererProtocol_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectDelivererProtocol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectDelivererProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectDelivererProtocol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectDelivererProtocol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectDelivererProtocol, 2647338475);
	template<> XSENSREMOTE_API UClass* StaticClass<UObjectDelivererProtocol>()
	{
		return UObjectDelivererProtocol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectDelivererProtocol(Z_Construct_UClass_UObjectDelivererProtocol, &UObjectDelivererProtocol::StaticClass, TEXT("/Script/XSensRemote"), TEXT("UObjectDelivererProtocol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectDelivererProtocol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
