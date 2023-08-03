// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XSensRemote/Public/Protocol/ProtocolUdpSocket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProtocolUdpSocket() {}
// Cross Module References
	XSENSREMOTE_API UClass* Z_Construct_UClass_UProtocolUdpSocket_NoRegister();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UProtocolUdpSocket();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UProtocolSocketBase();
	UPackage* Z_Construct_UPackage__Script_XSensRemote();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UGetIPV4Info_NoRegister();
// End Cross Module References
	void UProtocolUdpSocket::StaticRegisterNativesUProtocolUdpSocket()
	{
	}
	UClass* Z_Construct_UClass_UProtocolUdpSocket_NoRegister()
	{
		return UProtocolUdpSocket::StaticClass();
	}
	struct Z_Construct_UClass_UProtocolUdpSocket_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProtocolUdpSocket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProtocolSocketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_XSensRemote,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProtocolUdpSocket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Protocol/ProtocolUdpSocket.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Protocol/ProtocolUdpSocket.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UProtocolUdpSocket_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGetIPV4Info_NoRegister, (int32)VTABLE_OFFSET(UProtocolUdpSocket, IGetIPV4Info), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProtocolUdpSocket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProtocolUdpSocket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProtocolUdpSocket_Statics::ClassParams = {
		&UProtocolUdpSocket::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProtocolUdpSocket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProtocolUdpSocket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProtocolUdpSocket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProtocolUdpSocket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProtocolUdpSocket, 3180431989);
	template<> XSENSREMOTE_API UClass* StaticClass<UProtocolUdpSocket>()
	{
		return UProtocolUdpSocket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProtocolUdpSocket(Z_Construct_UClass_UProtocolUdpSocket, &UProtocolUdpSocket::StaticClass, TEXT("/Script/XSensRemote"), TEXT("UProtocolUdpSocket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProtocolUdpSocket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
