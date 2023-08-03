// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObjectDelivererProtocol;
#ifdef XSENSREMOTE_Utf8StringDeliveryBox_generated_h
#error "Utf8StringDeliveryBox.generated.h already included, missing '#pragma once' in Utf8StringDeliveryBox.h"
#endif
#define XSENSREMOTE_Utf8StringDeliveryBox_generated_h

#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h_8_DELEGATE \
struct _Script_XSensRemote_eventCNUtf8StringDeliveryBoxReceived_Parms \
{ \
	FString ReceivedString; \
	const UObjectDelivererProtocol* FromObject; \
}; \
static inline void FCNUtf8StringDeliveryBoxReceived_DelegateWrapper(const FMulticastScriptDelegate& CNUtf8StringDeliveryBoxReceived, const FString& ReceivedString, const UObjectDelivererProtocol* FromObject) \
{ \
	_Script_XSensRemote_eventCNUtf8StringDeliveryBoxReceived_Parms Parms; \
	Parms.ReceivedString=ReceivedString; \
	Parms.FromObject=FromObject; \
	CNUtf8StringDeliveryBoxReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h_13_SPARSE_DATA
#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendTo); \
	DECLARE_FUNCTION(execSend);


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendTo); \
	DECLARE_FUNCTION(execSend);


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUtf8StringDeliveryBox(); \
	friend struct Z_Construct_UClass_UUtf8StringDeliveryBox_Statics; \
public: \
	DECLARE_CLASS(UUtf8StringDeliveryBox, UDeliveryBox, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XSensRemote"), NO_API) \
	DECLARE_SERIALIZER(UUtf8StringDeliveryBox)


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUUtf8StringDeliveryBox(); \
	friend struct Z_Construct_UClass_UUtf8StringDeliveryBox_Statics; \
public: \
	DECLARE_CLASS(UUtf8StringDeliveryBox, UDeliveryBox, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XSensRemote"), NO_API) \
	DECLARE_SERIALIZER(UUtf8StringDeliveryBox)


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUtf8StringDeliveryBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUtf8StringDeliveryBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUtf8StringDeliveryBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUtf8StringDeliveryBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUtf8StringDeliveryBox(UUtf8StringDeliveryBox&&); \
	NO_API UUtf8StringDeliveryBox(const UUtf8StringDeliveryBox&); \
public:


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUtf8StringDeliveryBox(UUtf8StringDeliveryBox&&); \
	NO_API UUtf8StringDeliveryBox(const UUtf8StringDeliveryBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUtf8StringDeliveryBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUtf8StringDeliveryBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUtf8StringDeliveryBox)


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h_13_PRIVATE_PROPERTY_OFFSET
#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h_10_PROLOG
#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h_13_PRIVATE_PROPERTY_OFFSET \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h_13_SPARSE_DATA \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h_13_RPC_WRAPPERS \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h_13_INCLASS \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h_13_PRIVATE_PROPERTY_OFFSET \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h_13_SPARSE_DATA \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h_13_INCLASS_NO_PURE_DECLS \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XSENSREMOTE_API UClass* StaticClass<class UUtf8StringDeliveryBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_Utf8StringDeliveryBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
