// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXSensRemote_init() {}
	XSENSREMOTE_API UFunction* Z_Construct_UDelegateFunction_XSensRemote_CNObjectDeliveryBoxReceived__DelegateSignature();
	XSENSREMOTE_API UFunction* Z_Construct_UDelegateFunction_XSensRemote_CNUtf8StringDeliveryBoxReceived__DelegateSignature();
	XSENSREMOTE_API UFunction* Z_Construct_UDelegateFunction_XSensRemote_ObjectDelivererManagerConnected__DelegateSignature();
	XSENSREMOTE_API UFunction* Z_Construct_UDelegateFunction_XSensRemote_ObjectDelivererManagerDisconnected__DelegateSignature();
	XSENSREMOTE_API UFunction* Z_Construct_UDelegateFunction_XSensRemote_ObjectDelivererManagerReceiveData__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_XSensRemote()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_XSensRemote_CNObjectDeliveryBoxReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_XSensRemote_CNUtf8StringDeliveryBoxReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_XSensRemote_ObjectDelivererManagerConnected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_XSensRemote_ObjectDelivererManagerDisconnected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_XSensRemote_ObjectDelivererManagerReceiveData__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/XSensRemote",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x282A0429,
				0x3513C0D0,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
