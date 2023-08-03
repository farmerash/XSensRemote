// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XSensRemote/Public/Protocol/ProtocolTcpIpSocket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProtocolTcpIpSocket() {}
// Cross Module References
	XSENSREMOTE_API UClass* Z_Construct_UClass_UProtocolTcpIpSocket_NoRegister();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UProtocolTcpIpSocket();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UProtocolSocketBase();
	UPackage* Z_Construct_UPackage__Script_XSensRemote();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UGetIPV4Info_NoRegister();
// End Cross Module References
	void UProtocolTcpIpSocket::StaticRegisterNativesUProtocolTcpIpSocket()
	{
	}
	UClass* Z_Construct_UClass_UProtocolTcpIpSocket_NoRegister()
	{
		return UProtocolTcpIpSocket::StaticClass();
	}
	struct Z_Construct_UClass_UProtocolTcpIpSocket_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiveBufferSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReceiveBufferSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendBufferSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SendBufferSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProtocolTcpIpSocket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProtocolSocketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_XSensRemote,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProtocolTcpIpSocket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Protocol/ProtocolTcpIpSocket.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Protocol/ProtocolTcpIpSocket.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProtocolTcpIpSocket_Statics::NewProp_ReceiveBufferSize_MetaData[] = {
		{ "Category", "XSensRemote|Protocol" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Protocol/ProtocolTcpIpSocket.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProtocolTcpIpSocket_Statics::NewProp_ReceiveBufferSize = { "ReceiveBufferSize", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProtocolTcpIpSocket, ReceiveBufferSize), METADATA_PARAMS(Z_Construct_UClass_UProtocolTcpIpSocket_Statics::NewProp_ReceiveBufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProtocolTcpIpSocket_Statics::NewProp_ReceiveBufferSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProtocolTcpIpSocket_Statics::NewProp_SendBufferSize_MetaData[] = {
		{ "Category", "XsensRemote|Protocol" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Protocol/ProtocolTcpIpSocket.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProtocolTcpIpSocket_Statics::NewProp_SendBufferSize = { "SendBufferSize", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProtocolTcpIpSocket, SendBufferSize), METADATA_PARAMS(Z_Construct_UClass_UProtocolTcpIpSocket_Statics::NewProp_SendBufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProtocolTcpIpSocket_Statics::NewProp_SendBufferSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProtocolTcpIpSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtocolTcpIpSocket_Statics::NewProp_ReceiveBufferSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtocolTcpIpSocket_Statics::NewProp_SendBufferSize,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UProtocolTcpIpSocket_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGetIPV4Info_NoRegister, (int32)VTABLE_OFFSET(UProtocolTcpIpSocket, IGetIPV4Info), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProtocolTcpIpSocket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProtocolTcpIpSocket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProtocolTcpIpSocket_Statics::ClassParams = {
		&UProtocolTcpIpSocket::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProtocolTcpIpSocket_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UProtocolTcpIpSocket_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProtocolTcpIpSocket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProtocolTcpIpSocket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProtocolTcpIpSocket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProtocolTcpIpSocket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProtocolTcpIpSocket, 3707411190);
	template<> XSENSREMOTE_API UClass* StaticClass<UProtocolTcpIpSocket>()
	{
		return UProtocolTcpIpSocket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProtocolTcpIpSocket(Z_Construct_UClass_UProtocolTcpIpSocket, &UProtocolTcpIpSocket::StaticClass, TEXT("/Script/XSensRemote"), TEXT("UProtocolTcpIpSocket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProtocolTcpIpSocket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
