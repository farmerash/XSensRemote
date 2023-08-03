// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XSensRemote/Private/Utils/JsonSerializer/ODJsonDeserializer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODJsonDeserializer() {}
// Cross Module References
	XSENSREMOTE_API UClass* Z_Construct_UClass_UODJsonDeserializer_NoRegister();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UODJsonDeserializer();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UODJsonSerializerBase();
	UPackage* Z_Construct_UPackage__Script_XSensRemote();
// End Cross Module References
	void UODJsonDeserializer::StaticRegisterNativesUODJsonDeserializer()
	{
	}
	UClass* Z_Construct_UClass_UODJsonDeserializer_NoRegister()
	{
		return UODJsonDeserializer::StaticClass();
	}
	struct Z_Construct_UClass_UODJsonDeserializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UODJsonDeserializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UODJsonSerializerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_XSensRemote,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UODJsonDeserializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/JsonSerializer/ODJsonDeserializer.h" },
		{ "ModuleRelativePath", "Private/Utils/JsonSerializer/ODJsonDeserializer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UODJsonDeserializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODJsonDeserializer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UODJsonDeserializer_Statics::ClassParams = {
		&UODJsonDeserializer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UODJsonDeserializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UODJsonDeserializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UODJsonDeserializer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UODJsonDeserializer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UODJsonDeserializer, 2381879159);
	template<> XSENSREMOTE_API UClass* StaticClass<UODJsonDeserializer>()
	{
		return UODJsonDeserializer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UODJsonDeserializer(Z_Construct_UClass_UODJsonDeserializer, &UODJsonDeserializer::StaticClass, TEXT("/Script/XSensRemote"), TEXT("UODJsonDeserializer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UODJsonDeserializer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
