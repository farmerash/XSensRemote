// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XSensRemote/Private/Utils/JsonSerializer/ODJsonSerializerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODJsonSerializerBase() {}
// Cross Module References
	XSENSREMOTE_API UClass* Z_Construct_UClass_UODJsonSerializerBase_NoRegister();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UODJsonSerializerBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_XSensRemote();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UODOverrideJsonSerializer_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UODJsonSerializerBase::StaticRegisterNativesUODJsonSerializerBase()
	{
	}
	UClass* Z_Construct_UClass_UODJsonSerializerBase_NoRegister()
	{
		return UODJsonSerializerBase::StaticClass();
	}
	struct Z_Construct_UClass_UODJsonSerializerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSerializer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultSerializer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectSerializeres_ValueProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectSerializeres_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectSerializeres_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ObjectSerializeres;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UODJsonSerializerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_XSensRemote,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UODJsonSerializerBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/JsonSerializer/ODJsonSerializerBase.h" },
		{ "ModuleRelativePath", "Private/Utils/JsonSerializer/ODJsonSerializerBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UODJsonSerializerBase_Statics::NewProp_DefaultSerializer_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utils/JsonSerializer/ODJsonSerializerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODJsonSerializerBase_Statics::NewProp_DefaultSerializer = { "DefaultSerializer", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UODJsonSerializerBase, DefaultSerializer), Z_Construct_UClass_UODOverrideJsonSerializer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UODJsonSerializerBase_Statics::NewProp_DefaultSerializer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UODJsonSerializerBase_Statics::NewProp_DefaultSerializer_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODJsonSerializerBase_Statics::NewProp_ObjectSerializeres_ValueProp = { "ObjectSerializeres", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UODOverrideJsonSerializer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UODJsonSerializerBase_Statics::NewProp_ObjectSerializeres_Key_KeyProp = { "ObjectSerializeres_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UODJsonSerializerBase_Statics::NewProp_ObjectSerializeres_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utils/JsonSerializer/ODJsonSerializerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UODJsonSerializerBase_Statics::NewProp_ObjectSerializeres = { "ObjectSerializeres", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UODJsonSerializerBase, ObjectSerializeres), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UODJsonSerializerBase_Statics::NewProp_ObjectSerializeres_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UODJsonSerializerBase_Statics::NewProp_ObjectSerializeres_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UODJsonSerializerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODJsonSerializerBase_Statics::NewProp_DefaultSerializer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODJsonSerializerBase_Statics::NewProp_ObjectSerializeres_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODJsonSerializerBase_Statics::NewProp_ObjectSerializeres_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODJsonSerializerBase_Statics::NewProp_ObjectSerializeres,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UODJsonSerializerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODJsonSerializerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UODJsonSerializerBase_Statics::ClassParams = {
		&UODJsonSerializerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UODJsonSerializerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UODJsonSerializerBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UODJsonSerializerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UODJsonSerializerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UODJsonSerializerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UODJsonSerializerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UODJsonSerializerBase, 3991686090);
	template<> XSENSREMOTE_API UClass* StaticClass<UODJsonSerializerBase>()
	{
		return UODJsonSerializerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UODJsonSerializerBase(Z_Construct_UClass_UODJsonSerializerBase, &UODJsonSerializerBase::StaticClass, TEXT("/Script/XSensRemote"), TEXT("UODJsonSerializerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UODJsonSerializerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
