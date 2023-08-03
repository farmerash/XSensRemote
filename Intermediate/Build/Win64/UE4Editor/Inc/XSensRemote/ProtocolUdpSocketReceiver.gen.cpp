// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XSensRemote/Public/Protocol/ProtocolUdpSocketReceiver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProtocolUdpSocketReceiver() {}
// Cross Module References
	XSENSREMOTE_API UClass* Z_Construct_UClass_UProtocolUdpSocketReceiver_NoRegister();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UProtocolUdpSocketReceiver();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UProtocolSocketBase();
	UPackage* Z_Construct_UPackage__Script_XSensRemote();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UObjectDelivererProtocol_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UProtocolUdpSocketReceiver::execReceiveDataFromClient)
	{
		P_GET_OBJECT(UObjectDelivererProtocol,Z_Param_ClientSocket);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveDataFromClient(Z_Param_ClientSocket,Z_Param_Out_Buffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProtocolUdpSocketReceiver::execWithReceiveBufferSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeInBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UProtocolUdpSocketReceiver**)Z_Param__Result=P_THIS->WithReceiveBufferSize(Z_Param_SizeInBytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProtocolUdpSocketReceiver::execInitializeWithReceiver)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BoundPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeWithReceiver(Z_Param_BoundPort);
		P_NATIVE_END;
	}
	void UProtocolUdpSocketReceiver::StaticRegisterNativesUProtocolUdpSocketReceiver()
	{
		UClass* Class = UProtocolUdpSocketReceiver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeWithReceiver", &UProtocolUdpSocketReceiver::execInitializeWithReceiver },
			{ "ReceiveDataFromClient", &UProtocolUdpSocketReceiver::execReceiveDataFromClient },
			{ "WithReceiveBufferSize", &UProtocolUdpSocketReceiver::execWithReceiveBufferSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProtocolUdpSocketReceiver_InitializeWithReceiver_Statics
	{
		struct ProtocolUdpSocketReceiver_eventInitializeWithReceiver_Parms
		{
			int32 BoundPort;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoundPort;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProtocolUdpSocketReceiver_InitializeWithReceiver_Statics::NewProp_BoundPort = { "BoundPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProtocolUdpSocketReceiver_eventInitializeWithReceiver_Parms, BoundPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProtocolUdpSocketReceiver_InitializeWithReceiver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtocolUdpSocketReceiver_InitializeWithReceiver_Statics::NewProp_BoundPort,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProtocolUdpSocketReceiver_InitializeWithReceiver_Statics::Function_MetaDataParams[] = {
		{ "Category", "XSensRemote|Protocol" },
		{ "CPP_Default_BoundPort", "8000" },
		{ "ModuleRelativePath", "Public/Protocol/ProtocolUdpSocketReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtocolUdpSocketReceiver_InitializeWithReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProtocolUdpSocketReceiver, nullptr, "InitializeWithReceiver", nullptr, nullptr, sizeof(ProtocolUdpSocketReceiver_eventInitializeWithReceiver_Parms), Z_Construct_UFunction_UProtocolUdpSocketReceiver_InitializeWithReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtocolUdpSocketReceiver_InitializeWithReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProtocolUdpSocketReceiver_InitializeWithReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtocolUdpSocketReceiver_InitializeWithReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProtocolUdpSocketReceiver_InitializeWithReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProtocolUdpSocketReceiver_InitializeWithReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient_Statics
	{
		struct ProtocolUdpSocketReceiver_eventReceiveDataFromClient_Parms
		{
			const UObjectDelivererProtocol* ClientSocket;
			TArray<uint8> Buffer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientSocket;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient_Statics::NewProp_ClientSocket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient_Statics::NewProp_ClientSocket = { "ClientSocket", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProtocolUdpSocketReceiver_eventReceiveDataFromClient_Parms, ClientSocket), Z_Construct_UClass_UObjectDelivererProtocol_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient_Statics::NewProp_ClientSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient_Statics::NewProp_ClientSocket_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient_Statics::NewProp_Buffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProtocolUdpSocketReceiver_eventReceiveDataFromClient_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient_Statics::NewProp_Buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient_Statics::NewProp_Buffer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient_Statics::NewProp_ClientSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient_Statics::NewProp_Buffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient_Statics::NewProp_Buffer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/ProtocolUdpSocketReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProtocolUdpSocketReceiver, nullptr, "ReceiveDataFromClient", nullptr, nullptr, sizeof(ProtocolUdpSocketReceiver_eventReceiveDataFromClient_Parms), Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProtocolUdpSocketReceiver_WithReceiveBufferSize_Statics
	{
		struct ProtocolUdpSocketReceiver_eventWithReceiveBufferSize_Parms
		{
			int32 SizeInBytes;
			UProtocolUdpSocketReceiver* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeInBytes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProtocolUdpSocketReceiver_WithReceiveBufferSize_Statics::NewProp_SizeInBytes = { "SizeInBytes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProtocolUdpSocketReceiver_eventWithReceiveBufferSize_Parms, SizeInBytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProtocolUdpSocketReceiver_WithReceiveBufferSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProtocolUdpSocketReceiver_eventWithReceiveBufferSize_Parms, ReturnValue), Z_Construct_UClass_UProtocolUdpSocketReceiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProtocolUdpSocketReceiver_WithReceiveBufferSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtocolUdpSocketReceiver_WithReceiveBufferSize_Statics::NewProp_SizeInBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtocolUdpSocketReceiver_WithReceiveBufferSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProtocolUdpSocketReceiver_WithReceiveBufferSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "XSensRemote|Protocol" },
		{ "ModuleRelativePath", "Public/Protocol/ProtocolUdpSocketReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtocolUdpSocketReceiver_WithReceiveBufferSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProtocolUdpSocketReceiver, nullptr, "WithReceiveBufferSize", nullptr, nullptr, sizeof(ProtocolUdpSocketReceiver_eventWithReceiveBufferSize_Parms), Z_Construct_UFunction_UProtocolUdpSocketReceiver_WithReceiveBufferSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtocolUdpSocketReceiver_WithReceiveBufferSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProtocolUdpSocketReceiver_WithReceiveBufferSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtocolUdpSocketReceiver_WithReceiveBufferSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProtocolUdpSocketReceiver_WithReceiveBufferSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProtocolUdpSocketReceiver_WithReceiveBufferSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProtocolUdpSocketReceiver_NoRegister()
	{
		return UProtocolUdpSocketReceiver::StaticClass();
	}
	struct Z_Construct_UClass_UProtocolUdpSocketReceiver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoundPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiveBufferSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReceiveBufferSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProtocolUdpSocketReceiver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProtocolSocketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_XSensRemote,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProtocolUdpSocketReceiver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProtocolUdpSocketReceiver_InitializeWithReceiver, "InitializeWithReceiver" }, // 2213211329
		{ &Z_Construct_UFunction_UProtocolUdpSocketReceiver_ReceiveDataFromClient, "ReceiveDataFromClient" }, // 4118994929
		{ &Z_Construct_UFunction_UProtocolUdpSocketReceiver_WithReceiveBufferSize, "WithReceiveBufferSize" }, // 2897675442
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProtocolUdpSocketReceiver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Protocol/ProtocolUdpSocketReceiver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Protocol/ProtocolUdpSocketReceiver.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProtocolUdpSocketReceiver_Statics::NewProp_BoundPort_MetaData[] = {
		{ "Category", "XSensRemote|Protocol" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Protocol/ProtocolUdpSocketReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProtocolUdpSocketReceiver_Statics::NewProp_BoundPort = { "BoundPort", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProtocolUdpSocketReceiver, BoundPort), METADATA_PARAMS(Z_Construct_UClass_UProtocolUdpSocketReceiver_Statics::NewProp_BoundPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProtocolUdpSocketReceiver_Statics::NewProp_BoundPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProtocolUdpSocketReceiver_Statics::NewProp_ReceiveBufferSize_MetaData[] = {
		{ "Category", "XSensRemote|Protocol" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Protocol/ProtocolUdpSocketReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProtocolUdpSocketReceiver_Statics::NewProp_ReceiveBufferSize = { "ReceiveBufferSize", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProtocolUdpSocketReceiver, ReceiveBufferSize), METADATA_PARAMS(Z_Construct_UClass_UProtocolUdpSocketReceiver_Statics::NewProp_ReceiveBufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProtocolUdpSocketReceiver_Statics::NewProp_ReceiveBufferSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProtocolUdpSocketReceiver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtocolUdpSocketReceiver_Statics::NewProp_BoundPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtocolUdpSocketReceiver_Statics::NewProp_ReceiveBufferSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProtocolUdpSocketReceiver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProtocolUdpSocketReceiver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProtocolUdpSocketReceiver_Statics::ClassParams = {
		&UProtocolUdpSocketReceiver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProtocolUdpSocketReceiver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProtocolUdpSocketReceiver_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProtocolUdpSocketReceiver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProtocolUdpSocketReceiver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProtocolUdpSocketReceiver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProtocolUdpSocketReceiver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProtocolUdpSocketReceiver, 1326874908);
	template<> XSENSREMOTE_API UClass* StaticClass<UProtocolUdpSocketReceiver>()
	{
		return UProtocolUdpSocketReceiver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProtocolUdpSocketReceiver(Z_Construct_UClass_UProtocolUdpSocketReceiver, &UProtocolUdpSocketReceiver::StaticClass, TEXT("/Script/XSensRemote"), TEXT("UProtocolUdpSocketReceiver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProtocolUdpSocketReceiver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
