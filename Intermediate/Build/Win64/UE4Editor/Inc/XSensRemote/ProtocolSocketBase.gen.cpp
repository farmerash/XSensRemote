// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XSensRemote/Public/Protocol/ProtocolSocketBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProtocolSocketBase() {}
// Cross Module References
	XSENSREMOTE_API UClass* Z_Construct_UClass_UProtocolSocketBase_NoRegister();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UProtocolSocketBase();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UObjectDelivererProtocol();
	UPackage* Z_Construct_UPackage__Script_XSensRemote();
// End Cross Module References
	void UProtocolSocketBase::StaticRegisterNativesUProtocolSocketBase()
	{
	}
	UClass* Z_Construct_UClass_UProtocolSocketBase_NoRegister()
	{
		return UProtocolSocketBase::StaticClass();
	}
	struct Z_Construct_UClass_UProtocolSocketBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProtocolSocketBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObjectDelivererProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_XSensRemote,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProtocolSocketBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Protocol/ProtocolSocketBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Protocol/ProtocolSocketBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProtocolSocketBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProtocolSocketBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProtocolSocketBase_Statics::ClassParams = {
		&UProtocolSocketBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UProtocolSocketBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProtocolSocketBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProtocolSocketBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProtocolSocketBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProtocolSocketBase, 1891749774);
	template<> XSENSREMOTE_API UClass* StaticClass<UProtocolSocketBase>()
	{
		return UProtocolSocketBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProtocolSocketBase(Z_Construct_UClass_UProtocolSocketBase, &UProtocolSocketBase::StaticClass, TEXT("/Script/XSensRemote"), TEXT("UProtocolSocketBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProtocolSocketBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
