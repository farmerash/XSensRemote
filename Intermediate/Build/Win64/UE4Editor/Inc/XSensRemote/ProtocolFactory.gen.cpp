// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XSensRemote/Public/Protocol/ProtocolFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProtocolFactory() {}
// Cross Module References
	XSENSREMOTE_API UClass* Z_Construct_UClass_UProtocolFactory_NoRegister();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UProtocolFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_XSensRemote();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UProtocolUdpSocketReceiver_NoRegister();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UProtocolUdpSocketSender_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UProtocolFactory::execCreateProtocolUdpSocketReceiver)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BoundPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UProtocolUdpSocketReceiver**)Z_Param__Result=UProtocolFactory::CreateProtocolUdpSocketReceiver(Z_Param_BoundPort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProtocolFactory::execCreateProtocolUdpSocketSender)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IpAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UProtocolUdpSocketSender**)Z_Param__Result=UProtocolFactory::CreateProtocolUdpSocketSender(Z_Param_IpAddress,Z_Param_Port);
		P_NATIVE_END;
	}
	void UProtocolFactory::StaticRegisterNativesUProtocolFactory()
	{
		UClass* Class = UProtocolFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProtocolUdpSocketReceiver", &UProtocolFactory::execCreateProtocolUdpSocketReceiver },
			{ "CreateProtocolUdpSocketSender", &UProtocolFactory::execCreateProtocolUdpSocketSender },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketReceiver_Statics
	{
		struct ProtocolFactory_eventCreateProtocolUdpSocketReceiver_Parms
		{
			int32 BoundPort;
			UProtocolUdpSocketReceiver* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoundPort;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketReceiver_Statics::NewProp_BoundPort = { "BoundPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProtocolFactory_eventCreateProtocolUdpSocketReceiver_Parms, BoundPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketReceiver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProtocolFactory_eventCreateProtocolUdpSocketReceiver_Parms, ReturnValue), Z_Construct_UClass_UProtocolUdpSocketReceiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketReceiver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketReceiver_Statics::NewProp_BoundPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketReceiver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketReceiver_Statics::Function_MetaDataParams[] = {
		{ "Category", "XSensRemote|Protocol" },
		{ "Comment", "/**\n\x09 * create protocol (UDP receive only)\n\x09 * @param Port - Port number to bind to\n\x09 */" },
		{ "CPP_Default_BoundPort", "8000" },
		{ "ModuleRelativePath", "Public/Protocol/ProtocolFactory.h" },
		{ "ToolTip", "create protocol (UDP receive only)\n@param Port - Port number to bind to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProtocolFactory, nullptr, "CreateProtocolUdpSocketReceiver", nullptr, nullptr, sizeof(ProtocolFactory_eventCreateProtocolUdpSocketReceiver_Parms), Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketSender_Statics
	{
		struct ProtocolFactory_eventCreateProtocolUdpSocketSender_Parms
		{
			FString IpAddress;
			int32 Port;
			UProtocolUdpSocketSender* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IpAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IpAddress;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketSender_Statics::NewProp_IpAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketSender_Statics::NewProp_IpAddress = { "IpAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProtocolFactory_eventCreateProtocolUdpSocketSender_Parms, IpAddress), METADATA_PARAMS(Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketSender_Statics::NewProp_IpAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketSender_Statics::NewProp_IpAddress_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketSender_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProtocolFactory_eventCreateProtocolUdpSocketSender_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketSender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProtocolFactory_eventCreateProtocolUdpSocketSender_Parms, ReturnValue), Z_Construct_UClass_UProtocolUdpSocketSender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketSender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketSender_Statics::NewProp_IpAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketSender_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketSender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketSender_Statics::Function_MetaDataParams[] = {
		{ "Category", "XSensRemote|Protocol" },
		{ "Comment", "/**\n\x09 * create protocol (UDP send only)\n\x09 * @param IpAddress - ip address of the destination\n\x09 * @param Port - port number of the destination\n\x09 */" },
		{ "CPP_Default_IpAddress", "localhost" },
		{ "CPP_Default_Port", "8000" },
		{ "ModuleRelativePath", "Public/Protocol/ProtocolFactory.h" },
		{ "ToolTip", "create protocol (UDP send only)\n@param IpAddress - ip address of the destination\n@param Port - port number of the destination" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketSender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProtocolFactory, nullptr, "CreateProtocolUdpSocketSender", nullptr, nullptr, sizeof(ProtocolFactory_eventCreateProtocolUdpSocketSender_Parms), Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketSender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketSender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketSender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketSender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketSender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketSender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProtocolFactory_NoRegister()
	{
		return UProtocolFactory::StaticClass();
	}
	struct Z_Construct_UClass_UProtocolFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProtocolFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_XSensRemote,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProtocolFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketReceiver, "CreateProtocolUdpSocketReceiver" }, // 3331906560
		{ &Z_Construct_UFunction_UProtocolFactory_CreateProtocolUdpSocketSender, "CreateProtocolUdpSocketSender" }, // 2748646873
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProtocolFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Protocol/ProtocolFactory.h" },
		{ "ModuleRelativePath", "Public/Protocol/ProtocolFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProtocolFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProtocolFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProtocolFactory_Statics::ClassParams = {
		&UProtocolFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UProtocolFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProtocolFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProtocolFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProtocolFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProtocolFactory, 2733026576);
	template<> XSENSREMOTE_API UClass* StaticClass<UProtocolFactory>()
	{
		return UProtocolFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProtocolFactory(Z_Construct_UClass_UProtocolFactory, &UProtocolFactory::StaticClass, TEXT("/Script/XSensRemote"), TEXT("UProtocolFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProtocolFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
