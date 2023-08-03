// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XSensRemote/Public/DeliveryBox/DeliveryBoxFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeliveryBoxFactory() {}
// Cross Module References
	XSENSREMOTE_API UClass* Z_Construct_UClass_UDeliveryBoxFactory_NoRegister();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UDeliveryBoxFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_XSensRemote();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UUtf8StringDeliveryBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDeliveryBoxFactory::execCreateUtf8StringDeliveryBox)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUtf8StringDeliveryBox**)Z_Param__Result=UDeliveryBoxFactory::CreateUtf8StringDeliveryBox();
		P_NATIVE_END;
	}
	void UDeliveryBoxFactory::StaticRegisterNativesUDeliveryBoxFactory()
	{
		UClass* Class = UDeliveryBoxFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateUtf8StringDeliveryBox", &UDeliveryBoxFactory::execCreateUtf8StringDeliveryBox },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDeliveryBoxFactory_CreateUtf8StringDeliveryBox_Statics
	{
		struct DeliveryBoxFactory_eventCreateUtf8StringDeliveryBox_Parms
		{
			UUtf8StringDeliveryBox* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeliveryBoxFactory_CreateUtf8StringDeliveryBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeliveryBoxFactory_eventCreateUtf8StringDeliveryBox_Parms, ReturnValue), Z_Construct_UClass_UUtf8StringDeliveryBox_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeliveryBoxFactory_CreateUtf8StringDeliveryBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeliveryBoxFactory_CreateUtf8StringDeliveryBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeliveryBoxFactory_CreateUtf8StringDeliveryBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "XSensRemote|DeliveryBox" },
		{ "Comment", "/**\n\x09 * create delivery box (object with json serializer)\n\x09 * @param TargetClass - target object class\n\x09 \n\x09UFUNCTION(BlueprintPure, Category = \"ObjectDeliverer|DeliveryBox\")\n\x09static class UObjectDeliveryBoxUsingJson* CreateObjectDeliveryBoxUsingJson(UClass* TargetClass);\n\n\x09/**\n\x09 * create delivery box (object with json serializer)\n\x09\n\x09UFUNCTION(BlueprintPure, Category = \"ObjectDeliverer|DeliveryBox\")\n\x09static class UObjectDeliveryBoxUsingJson* CreateDynamicObjectDeliveryBoxUsingJson();\n\n\x09/**\n\x09 * create delivery box (object with json serializer)\n\x09 * @param DefaultSerializerType -  default serialization method\n\x09 * @param ObjectSerializerTypes - Set the object class and serialization method class of the property as a pair\n\x09 * @param TargetClass - target object class\n\x09\n\x09UFUNCTION(BlueprintPure, Category = \"ObjectDeliverer|DeliveryBox\")\n\x09static class UObjectDeliveryBoxUsingJson* CreateCustomObjectDeliveryBoxUsingJson(EODJsonSerializeType DefaultSerializerType, const TMap<UClass*, EODJsonSerializeType>& ObjectSerializerTypes, UClass* TargetClass);\n\n\x09/**\n\x09 * create delivery box (utf-8 string)\n\x09 */" },
		{ "ModuleRelativePath", "Public/DeliveryBox/DeliveryBoxFactory.h" },
		{ "ToolTip", "create delivery box (object with json serializer)\n@param TargetClass - target object class\n\n       UFUNCTION(BlueprintPure, Category = \"ObjectDeliverer|DeliveryBox\")\n       static class UObjectDeliveryBoxUsingJson* CreateObjectDeliveryBoxUsingJson(UClass* TargetClass);\n\n\ncreate delivery box (object with json serializer)\n\n       UFUNCTION(BlueprintPure, Category = \"ObjectDeliverer|DeliveryBox\")\n       static class UObjectDeliveryBoxUsingJson* CreateDynamicObjectDeliveryBoxUsingJson();\n\n\ncreate delivery box (object with json serializer)\n@param DefaultSerializerType -  default serialization method\n@param ObjectSerializerTypes - Set the object class and serialization method class of the property as a pair\n@param TargetClass - target object class\n\n       UFUNCTION(BlueprintPure, Category = \"ObjectDeliverer|DeliveryBox\")\n       static class UObjectDeliveryBoxUsingJson* CreateCustomObjectDeliveryBoxUsingJson(EODJsonSerializeType DefaultSerializerType, const TMap<UClass*, EODJsonSerializeType>& ObjectSerializerTypes, UClass* TargetClass);\n\n\ncreate delivery box (utf-8 string)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeliveryBoxFactory_CreateUtf8StringDeliveryBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeliveryBoxFactory, nullptr, "CreateUtf8StringDeliveryBox", nullptr, nullptr, sizeof(DeliveryBoxFactory_eventCreateUtf8StringDeliveryBox_Parms), Z_Construct_UFunction_UDeliveryBoxFactory_CreateUtf8StringDeliveryBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeliveryBoxFactory_CreateUtf8StringDeliveryBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeliveryBoxFactory_CreateUtf8StringDeliveryBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeliveryBoxFactory_CreateUtf8StringDeliveryBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeliveryBoxFactory_CreateUtf8StringDeliveryBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeliveryBoxFactory_CreateUtf8StringDeliveryBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDeliveryBoxFactory_NoRegister()
	{
		return UDeliveryBoxFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDeliveryBoxFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeliveryBoxFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_XSensRemote,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDeliveryBoxFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeliveryBoxFactory_CreateUtf8StringDeliveryBox, "CreateUtf8StringDeliveryBox" }, // 247978685
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeliveryBoxFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DeliveryBox/DeliveryBoxFactory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DeliveryBox/DeliveryBoxFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeliveryBoxFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeliveryBoxFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeliveryBoxFactory_Statics::ClassParams = {
		&UDeliveryBoxFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDeliveryBoxFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeliveryBoxFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeliveryBoxFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeliveryBoxFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeliveryBoxFactory, 334061018);
	template<> XSENSREMOTE_API UClass* StaticClass<UDeliveryBoxFactory>()
	{
		return UDeliveryBoxFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeliveryBoxFactory(Z_Construct_UClass_UDeliveryBoxFactory, &UDeliveryBoxFactory::StaticClass, TEXT("/Script/XSensRemote"), TEXT("UDeliveryBoxFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeliveryBoxFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
