// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XSensRemote/Private/Utils/JsonSerializer/ODJsonSerializer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODJsonSerializer() {}
// Cross Module References
	XSENSREMOTE_API UClass* Z_Construct_UClass_UODJsonSerializer_NoRegister();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UODJsonSerializer();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UODJsonSerializerBase();
	UPackage* Z_Construct_UPackage__Script_XSensRemote();
// End Cross Module References
	void UODJsonSerializer::StaticRegisterNativesUODJsonSerializer()
	{
	}
	UClass* Z_Construct_UClass_UODJsonSerializer_NoRegister()
	{
		return UODJsonSerializer::StaticClass();
	}
	struct Z_Construct_UClass_UODJsonSerializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UODJsonSerializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UODJsonSerializerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_XSensRemote,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UODJsonSerializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/JsonSerializer/ODJsonSerializer.h" },
		{ "ModuleRelativePath", "Private/Utils/JsonSerializer/ODJsonSerializer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UODJsonSerializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODJsonSerializer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UODJsonSerializer_Statics::ClassParams = {
		&UODJsonSerializer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UODJsonSerializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UODJsonSerializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UODJsonSerializer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UODJsonSerializer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UODJsonSerializer, 1923614068);
	template<> XSENSREMOTE_API UClass* StaticClass<UODJsonSerializer>()
	{
		return UODJsonSerializer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UODJsonSerializer(Z_Construct_UClass_UODJsonSerializer, &UODJsonSerializer::StaticClass, TEXT("/Script/XSensRemote"), TEXT("UODJsonSerializer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UODJsonSerializer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
