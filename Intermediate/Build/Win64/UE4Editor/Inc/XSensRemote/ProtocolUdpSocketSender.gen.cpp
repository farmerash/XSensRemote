// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XSensRemote/Public/Protocol/ProtocolUdpSocketSender.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProtocolUdpSocketSender() {}
// Cross Module References
	XSENSREMOTE_API UClass* Z_Construct_UClass_UProtocolUdpSocketSender_NoRegister();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UProtocolUdpSocketSender();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UProtocolSocketBase();
	UPackage* Z_Construct_UPackage__Script_XSensRemote();
// End Cross Module References
	DEFINE_FUNCTION(UProtocolUdpSocketSender::execWithSendBufferSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeInBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UProtocolUdpSocketSender**)Z_Param__Result=P_THIS->WithSendBufferSize(Z_Param_SizeInBytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProtocolUdpSocketSender::execInitialize)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IpAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_IpAddress,Z_Param_Port);
		P_NATIVE_END;
	}
	void UProtocolUdpSocketSender::StaticRegisterNativesUProtocolUdpSocketSender()
	{
		UClass* Class = UProtocolUdpSocketSender::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Initialize", &UProtocolUdpSocketSender::execInitialize },
			{ "WithSendBufferSize", &UProtocolUdpSocketSender::execWithSendBufferSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProtocolUdpSocketSender_Initialize_Statics
	{
		struct ProtocolUdpSocketSender_eventInitialize_Parms
		{
			FString IpAddress;
			int32 Port;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IpAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IpAddress;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProtocolUdpSocketSender_Initialize_Statics::NewProp_IpAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProtocolUdpSocketSender_Initialize_Statics::NewProp_IpAddress = { "IpAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProtocolUdpSocketSender_eventInitialize_Parms, IpAddress), METADATA_PARAMS(Z_Construct_UFunction_UProtocolUdpSocketSender_Initialize_Statics::NewProp_IpAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtocolUdpSocketSender_Initialize_Statics::NewProp_IpAddress_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProtocolUdpSocketSender_Initialize_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProtocolUdpSocketSender_eventInitialize_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProtocolUdpSocketSender_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtocolUdpSocketSender_Initialize_Statics::NewProp_IpAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtocolUdpSocketSender_Initialize_Statics::NewProp_Port,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProtocolUdpSocketSender_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "XSensRemote|Protocol" },
		{ "Comment", "/**\n\x09 * Initialize UDP.\n\x09 * @param IpAddress - The ip address of the destination.\n\x09 * @param Port - The port number of the destination.\n\x09 */" },
		{ "CPP_Default_IpAddress", "localhost" },
		{ "CPP_Default_Port", "8000" },
		{ "ModuleRelativePath", "Public/Protocol/ProtocolUdpSocketSender.h" },
		{ "ToolTip", "Initialize UDP.\n@param IpAddress - The ip address of the destination.\n@param Port - The port number of the destination." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtocolUdpSocketSender_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProtocolUdpSocketSender, nullptr, "Initialize", nullptr, nullptr, sizeof(ProtocolUdpSocketSender_eventInitialize_Parms), Z_Construct_UFunction_UProtocolUdpSocketSender_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtocolUdpSocketSender_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProtocolUdpSocketSender_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtocolUdpSocketSender_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProtocolUdpSocketSender_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProtocolUdpSocketSender_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProtocolUdpSocketSender_WithSendBufferSize_Statics
	{
		struct ProtocolUdpSocketSender_eventWithSendBufferSize_Parms
		{
			int32 SizeInBytes;
			UProtocolUdpSocketSender* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeInBytes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProtocolUdpSocketSender_WithSendBufferSize_Statics::NewProp_SizeInBytes = { "SizeInBytes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProtocolUdpSocketSender_eventWithSendBufferSize_Parms, SizeInBytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProtocolUdpSocketSender_WithSendBufferSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProtocolUdpSocketSender_eventWithSendBufferSize_Parms, ReturnValue), Z_Construct_UClass_UProtocolUdpSocketSender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProtocolUdpSocketSender_WithSendBufferSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtocolUdpSocketSender_WithSendBufferSize_Statics::NewProp_SizeInBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtocolUdpSocketSender_WithSendBufferSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProtocolUdpSocketSender_WithSendBufferSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "XSensRemote|Protocol" },
		{ "ModuleRelativePath", "Public/Protocol/ProtocolUdpSocketSender.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtocolUdpSocketSender_WithSendBufferSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProtocolUdpSocketSender, nullptr, "WithSendBufferSize", nullptr, nullptr, sizeof(ProtocolUdpSocketSender_eventWithSendBufferSize_Parms), Z_Construct_UFunction_UProtocolUdpSocketSender_WithSendBufferSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtocolUdpSocketSender_WithSendBufferSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProtocolUdpSocketSender_WithSendBufferSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtocolUdpSocketSender_WithSendBufferSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProtocolUdpSocketSender_WithSendBufferSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProtocolUdpSocketSender_WithSendBufferSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProtocolUdpSocketSender_NoRegister()
	{
		return UProtocolUdpSocketSender::StaticClass();
	}
	struct Z_Construct_UClass_UProtocolUdpSocketSender_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationIpAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestinationIpAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DestinationPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendBufferSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SendBufferSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProtocolUdpSocketSender_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProtocolSocketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_XSensRemote,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProtocolUdpSocketSender_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProtocolUdpSocketSender_Initialize, "Initialize" }, // 3305764870
		{ &Z_Construct_UFunction_UProtocolUdpSocketSender_WithSendBufferSize, "WithSendBufferSize" }, // 1869414919
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProtocolUdpSocketSender_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Protocol/ProtocolUdpSocketSender.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Protocol/ProtocolUdpSocketSender.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProtocolUdpSocketSender_Statics::NewProp_DestinationIpAddress_MetaData[] = {
		{ "Category", "XSensRemote|Protocol" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Protocol/ProtocolUdpSocketSender.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProtocolUdpSocketSender_Statics::NewProp_DestinationIpAddress = { "DestinationIpAddress", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProtocolUdpSocketSender, DestinationIpAddress), METADATA_PARAMS(Z_Construct_UClass_UProtocolUdpSocketSender_Statics::NewProp_DestinationIpAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProtocolUdpSocketSender_Statics::NewProp_DestinationIpAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProtocolUdpSocketSender_Statics::NewProp_DestinationPort_MetaData[] = {
		{ "Category", "XSensRemote|Protocol" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Protocol/ProtocolUdpSocketSender.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProtocolUdpSocketSender_Statics::NewProp_DestinationPort = { "DestinationPort", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProtocolUdpSocketSender, DestinationPort), METADATA_PARAMS(Z_Construct_UClass_UProtocolUdpSocketSender_Statics::NewProp_DestinationPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProtocolUdpSocketSender_Statics::NewProp_DestinationPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProtocolUdpSocketSender_Statics::NewProp_SendBufferSize_MetaData[] = {
		{ "Category", "XSensRemote|Protocol" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Protocol/ProtocolUdpSocketSender.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProtocolUdpSocketSender_Statics::NewProp_SendBufferSize = { "SendBufferSize", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProtocolUdpSocketSender, SendBufferSize), METADATA_PARAMS(Z_Construct_UClass_UProtocolUdpSocketSender_Statics::NewProp_SendBufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProtocolUdpSocketSender_Statics::NewProp_SendBufferSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProtocolUdpSocketSender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtocolUdpSocketSender_Statics::NewProp_DestinationIpAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtocolUdpSocketSender_Statics::NewProp_DestinationPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtocolUdpSocketSender_Statics::NewProp_SendBufferSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProtocolUdpSocketSender_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProtocolUdpSocketSender>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProtocolUdpSocketSender_Statics::ClassParams = {
		&UProtocolUdpSocketSender::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProtocolUdpSocketSender_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProtocolUdpSocketSender_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProtocolUdpSocketSender_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProtocolUdpSocketSender_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProtocolUdpSocketSender()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProtocolUdpSocketSender_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProtocolUdpSocketSender, 447621867);
	template<> XSENSREMOTE_API UClass* StaticClass<UProtocolUdpSocketSender>()
	{
		return UProtocolUdpSocketSender::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProtocolUdpSocketSender(Z_Construct_UClass_UProtocolUdpSocketSender, &UProtocolUdpSocketSender::StaticClass, TEXT("/Script/XSensRemote"), TEXT("UProtocolUdpSocketSender"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProtocolUdpSocketSender);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
