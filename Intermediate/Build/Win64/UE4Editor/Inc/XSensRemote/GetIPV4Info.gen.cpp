// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XSensRemote/Public/Protocol/GetIPV4Info.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetIPV4Info() {}
// Cross Module References
	XSENSREMOTE_API UClass* Z_Construct_UClass_UGetIPV4Info_NoRegister();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UGetIPV4Info();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_XSensRemote();
// End Cross Module References
	DEFINE_FUNCTION(IGetIPV4Info::execGetIPAddressInString)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_IPAddress);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIPAddressInString(Z_Param_Out_IPAddress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGetIPV4Info::execGetIPAddress)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_IPAddress);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIPAddress(Z_Param_Out_IPAddress);
		P_NATIVE_END;
	}
	void UGetIPV4Info::StaticRegisterNativesUGetIPV4Info()
	{
		UClass* Class = UGetIPV4Info::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIPAddress", &IGetIPV4Info::execGetIPAddress },
			{ "GetIPAddressInString", &IGetIPV4Info::execGetIPAddressInString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetIPV4Info_GetIPAddress_Statics
	{
		struct GetIPV4Info_eventGetIPAddress_Parms
		{
			TArray<uint8> IPAddress;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IPAddress_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IPAddress;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGetIPV4Info_GetIPAddress_Statics::NewProp_IPAddress_Inner = { "IPAddress", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGetIPV4Info_GetIPAddress_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetIPV4Info_eventGetIPAddress_Parms, IPAddress), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGetIPV4Info_GetIPAddress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GetIPV4Info_eventGetIPAddress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGetIPV4Info_GetIPAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GetIPV4Info_eventGetIPAddress_Parms), &Z_Construct_UFunction_UGetIPV4Info_GetIPAddress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetIPV4Info_GetIPAddress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetIPV4Info_GetIPAddress_Statics::NewProp_IPAddress_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetIPV4Info_GetIPAddress_Statics::NewProp_IPAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetIPV4Info_GetIPAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetIPV4Info_GetIPAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "XSensRemote" },
		{ "ModuleRelativePath", "Public/Protocol/GetIPV4Info.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetIPV4Info_GetIPAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetIPV4Info, nullptr, "GetIPAddress", nullptr, nullptr, sizeof(GetIPV4Info_eventGetIPAddress_Parms), Z_Construct_UFunction_UGetIPV4Info_GetIPAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetIPV4Info_GetIPAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetIPV4Info_GetIPAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetIPV4Info_GetIPAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetIPV4Info_GetIPAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetIPV4Info_GetIPAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGetIPV4Info_GetIPAddressInString_Statics
	{
		struct GetIPV4Info_eventGetIPAddressInString_Parms
		{
			FString IPAddress;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IPAddress;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGetIPV4Info_GetIPAddressInString_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetIPV4Info_eventGetIPAddressInString_Parms, IPAddress), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGetIPV4Info_GetIPAddressInString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GetIPV4Info_eventGetIPAddressInString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGetIPV4Info_GetIPAddressInString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GetIPV4Info_eventGetIPAddressInString_Parms), &Z_Construct_UFunction_UGetIPV4Info_GetIPAddressInString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetIPV4Info_GetIPAddressInString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetIPV4Info_GetIPAddressInString_Statics::NewProp_IPAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetIPV4Info_GetIPAddressInString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetIPV4Info_GetIPAddressInString_Statics::Function_MetaDataParams[] = {
		{ "Category", "XSensRemote" },
		{ "ModuleRelativePath", "Public/Protocol/GetIPV4Info.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetIPV4Info_GetIPAddressInString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetIPV4Info, nullptr, "GetIPAddressInString", nullptr, nullptr, sizeof(GetIPV4Info_eventGetIPAddressInString_Parms), Z_Construct_UFunction_UGetIPV4Info_GetIPAddressInString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetIPV4Info_GetIPAddressInString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetIPV4Info_GetIPAddressInString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetIPV4Info_GetIPAddressInString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetIPV4Info_GetIPAddressInString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetIPV4Info_GetIPAddressInString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGetIPV4Info_NoRegister()
	{
		return UGetIPV4Info::StaticClass();
	}
	struct Z_Construct_UClass_UGetIPV4Info_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetIPV4Info_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_XSensRemote,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetIPV4Info_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetIPV4Info_GetIPAddress, "GetIPAddress" }, // 1817006474
		{ &Z_Construct_UFunction_UGetIPV4Info_GetIPAddressInString, "GetIPAddressInString" }, // 442823961
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetIPV4Info_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Protocol/GetIPV4Info.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetIPV4Info_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGetIPV4Info>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetIPV4Info_Statics::ClassParams = {
		&UGetIPV4Info::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGetIPV4Info_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetIPV4Info_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetIPV4Info()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetIPV4Info_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetIPV4Info, 446479246);
	template<> XSENSREMOTE_API UClass* StaticClass<UGetIPV4Info>()
	{
		return UGetIPV4Info::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetIPV4Info(Z_Construct_UClass_UGetIPV4Info, &UGetIPV4Info::StaticClass, TEXT("/Script/XSensRemote"), TEXT("UGetIPV4Info"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetIPV4Info);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
