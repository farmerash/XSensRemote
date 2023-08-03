// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XSensRemote/Private/Utils/ODStringUtil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODStringUtil() {}
// Cross Module References
	XSENSREMOTE_API UClass* Z_Construct_UClass_UODStringUtil_NoRegister();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UODStringUtil();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_XSensRemote();
// End Cross Module References
	DEFINE_FUNCTION(UODStringUtil::execSendReCenter)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DataBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UODStringUtil::SendReCenter(Z_Param_Out_DataBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UODStringUtil::execBufferToString)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DataBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UODStringUtil::BufferToString(Z_Param_Out_DataBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UODStringUtil::execStringToBuffer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DataBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UODStringUtil::StringToBuffer(Z_Param_message,Z_Param_Out_DataBuffer);
		P_NATIVE_END;
	}
	void UODStringUtil::StaticRegisterNativesUODStringUtil()
	{
		UClass* Class = UODStringUtil::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BufferToString", &UODStringUtil::execBufferToString },
			{ "SendReCenter", &UODStringUtil::execSendReCenter },
			{ "StringToBuffer", &UODStringUtil::execStringToBuffer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UODStringUtil_BufferToString_Statics
	{
		struct ODStringUtil_eventBufferToString_Parms
		{
			TArray<uint8> DataBuffer;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataBuffer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataBuffer;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UODStringUtil_BufferToString_Statics::NewProp_DataBuffer_Inner = { "DataBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UODStringUtil_BufferToString_Statics::NewProp_DataBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UODStringUtil_BufferToString_Statics::NewProp_DataBuffer = { "DataBuffer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ODStringUtil_eventBufferToString_Parms, DataBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UODStringUtil_BufferToString_Statics::NewProp_DataBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UODStringUtil_BufferToString_Statics::NewProp_DataBuffer_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UODStringUtil_BufferToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ODStringUtil_eventBufferToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UODStringUtil_BufferToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODStringUtil_BufferToString_Statics::NewProp_DataBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODStringUtil_BufferToString_Statics::NewProp_DataBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODStringUtil_BufferToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UODStringUtil_BufferToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "XSensRemote" },
		{ "ModuleRelativePath", "Private/Utils/ODStringUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UODStringUtil_BufferToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODStringUtil, nullptr, "BufferToString", nullptr, nullptr, sizeof(ODStringUtil_eventBufferToString_Parms), Z_Construct_UFunction_UODStringUtil_BufferToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UODStringUtil_BufferToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UODStringUtil_BufferToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UODStringUtil_BufferToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UODStringUtil_BufferToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UODStringUtil_BufferToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UODStringUtil_SendReCenter_Statics
	{
		struct ODStringUtil_eventSendReCenter_Parms
		{
			TArray<uint8> DataBuffer;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataBuffer_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataBuffer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UODStringUtil_SendReCenter_Statics::NewProp_DataBuffer_Inner = { "DataBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UODStringUtil_SendReCenter_Statics::NewProp_DataBuffer = { "DataBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ODStringUtil_eventSendReCenter_Parms, DataBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UODStringUtil_SendReCenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODStringUtil_SendReCenter_Statics::NewProp_DataBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODStringUtil_SendReCenter_Statics::NewProp_DataBuffer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UODStringUtil_SendReCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "XSensRemote" },
		{ "ModuleRelativePath", "Private/Utils/ODStringUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UODStringUtil_SendReCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODStringUtil, nullptr, "SendReCenter", nullptr, nullptr, sizeof(ODStringUtil_eventSendReCenter_Parms), Z_Construct_UFunction_UODStringUtil_SendReCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UODStringUtil_SendReCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UODStringUtil_SendReCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UODStringUtil_SendReCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UODStringUtil_SendReCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UODStringUtil_SendReCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UODStringUtil_StringToBuffer_Statics
	{
		struct ODStringUtil_eventStringToBuffer_Parms
		{
			FString message;
			TArray<uint8> DataBuffer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataBuffer_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataBuffer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UODStringUtil_StringToBuffer_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UODStringUtil_StringToBuffer_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ODStringUtil_eventStringToBuffer_Parms, message), METADATA_PARAMS(Z_Construct_UFunction_UODStringUtil_StringToBuffer_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UODStringUtil_StringToBuffer_Statics::NewProp_message_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UODStringUtil_StringToBuffer_Statics::NewProp_DataBuffer_Inner = { "DataBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UODStringUtil_StringToBuffer_Statics::NewProp_DataBuffer = { "DataBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ODStringUtil_eventStringToBuffer_Parms, DataBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UODStringUtil_StringToBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODStringUtil_StringToBuffer_Statics::NewProp_message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODStringUtil_StringToBuffer_Statics::NewProp_DataBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODStringUtil_StringToBuffer_Statics::NewProp_DataBuffer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UODStringUtil_StringToBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "XSensRemote" },
		{ "ModuleRelativePath", "Private/Utils/ODStringUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UODStringUtil_StringToBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODStringUtil, nullptr, "StringToBuffer", nullptr, nullptr, sizeof(ODStringUtil_eventStringToBuffer_Parms), Z_Construct_UFunction_UODStringUtil_StringToBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UODStringUtil_StringToBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UODStringUtil_StringToBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UODStringUtil_StringToBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UODStringUtil_StringToBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UODStringUtil_StringToBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UODStringUtil_NoRegister()
	{
		return UODStringUtil::StaticClass();
	}
	struct Z_Construct_UClass_UODStringUtil_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UODStringUtil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_XSensRemote,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UODStringUtil_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UODStringUtil_BufferToString, "BufferToString" }, // 2938551429
		{ &Z_Construct_UFunction_UODStringUtil_SendReCenter, "SendReCenter" }, // 2816831845
		{ &Z_Construct_UFunction_UODStringUtil_StringToBuffer, "StringToBuffer" }, // 543581145
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UODStringUtil_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Utils/ODStringUtil.h" },
		{ "ModuleRelativePath", "Private/Utils/ODStringUtil.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UODStringUtil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODStringUtil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UODStringUtil_Statics::ClassParams = {
		&UODStringUtil::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UODStringUtil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UODStringUtil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UODStringUtil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UODStringUtil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UODStringUtil, 761644209);
	template<> XSENSREMOTE_API UClass* StaticClass<UODStringUtil>()
	{
		return UODStringUtil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UODStringUtil(Z_Construct_UClass_UODStringUtil, &UODStringUtil::StaticClass, TEXT("/Script/XSensRemote"), TEXT("UODStringUtil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UODStringUtil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
