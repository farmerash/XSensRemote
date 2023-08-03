// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XSensRemote/Public/PacketRule/PacketRuleFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacketRuleFactory() {}
// Cross Module References
	XSENSREMOTE_API UClass* Z_Construct_UClass_UPacketRuleFactory_NoRegister();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UPacketRuleFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_XSensRemote();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UPacketRuleNodivision_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPacketRuleFactory::execCreatePacketRuleNodivision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPacketRuleNodivision**)Z_Param__Result=UPacketRuleFactory::CreatePacketRuleNodivision();
		P_NATIVE_END;
	}
	void UPacketRuleFactory::StaticRegisterNativesUPacketRuleFactory()
	{
		UClass* Class = UPacketRuleFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreatePacketRuleNodivision", &UPacketRuleFactory::execCreatePacketRuleNodivision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPacketRuleFactory_CreatePacketRuleNodivision_Statics
	{
		struct PacketRuleFactory_eventCreatePacketRuleNodivision_Parms
		{
			UPacketRuleNodivision* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPacketRuleFactory_CreatePacketRuleNodivision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PacketRuleFactory_eventCreatePacketRuleNodivision_Parms, ReturnValue), Z_Construct_UClass_UPacketRuleNodivision_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPacketRuleFactory_CreatePacketRuleNodivision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPacketRuleFactory_CreatePacketRuleNodivision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPacketRuleFactory_CreatePacketRuleNodivision_Statics::Function_MetaDataParams[] = {
		{ "Category", "XSensRemote|PacketRule" },
		{ "Comment", "/**\n\x09 * create packet rule (no division)\n\x09 */" },
		{ "ModuleRelativePath", "Public/PacketRule/PacketRuleFactory.h" },
		{ "ToolTip", "create packet rule (no division)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPacketRuleFactory_CreatePacketRuleNodivision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPacketRuleFactory, nullptr, "CreatePacketRuleNodivision", nullptr, nullptr, sizeof(PacketRuleFactory_eventCreatePacketRuleNodivision_Parms), Z_Construct_UFunction_UPacketRuleFactory_CreatePacketRuleNodivision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPacketRuleFactory_CreatePacketRuleNodivision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPacketRuleFactory_CreatePacketRuleNodivision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPacketRuleFactory_CreatePacketRuleNodivision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPacketRuleFactory_CreatePacketRuleNodivision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPacketRuleFactory_CreatePacketRuleNodivision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPacketRuleFactory_NoRegister()
	{
		return UPacketRuleFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPacketRuleFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPacketRuleFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_XSensRemote,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPacketRuleFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPacketRuleFactory_CreatePacketRuleNodivision, "CreatePacketRuleNodivision" }, // 4277626566
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPacketRuleFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PacketRule/PacketRuleFactory.h" },
		{ "ModuleRelativePath", "Public/PacketRule/PacketRuleFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPacketRuleFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPacketRuleFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPacketRuleFactory_Statics::ClassParams = {
		&UPacketRuleFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPacketRuleFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPacketRuleFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPacketRuleFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPacketRuleFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPacketRuleFactory, 262615793);
	template<> XSENSREMOTE_API UClass* StaticClass<UPacketRuleFactory>()
	{
		return UPacketRuleFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPacketRuleFactory(Z_Construct_UClass_UPacketRuleFactory, &UPacketRuleFactory::StaticClass, TEXT("/Script/XSensRemote"), TEXT("UPacketRuleFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPacketRuleFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
