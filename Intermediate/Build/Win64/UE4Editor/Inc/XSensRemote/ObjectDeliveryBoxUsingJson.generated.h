// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UObjectDelivererProtocol;
enum class EODJsonSerializeType : uint8;
class UObject; enum class EODJsonSerializeType : uint8;
#ifdef XSENSREMOTE_ObjectDeliveryBoxUsingJson_generated_h
#error "ObjectDeliveryBoxUsingJson.generated.h already included, missing '#pragma once' in ObjectDeliveryBoxUsingJson.h"
#endif
#define XSENSREMOTE_ObjectDeliveryBoxUsingJson_generated_h

#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h_10_DELEGATE \
struct _Script_XSensRemote_eventCNObjectDeliveryBoxReceived_Parms \
{ \
	UObject* ReceivedObject; \
	FString ReceivedJsonString; \
	const UObjectDelivererProtocol* FromObject; \
}; \
static inline void FCNObjectDeliveryBoxReceived_DelegateWrapper(const FMulticastScriptDelegate& CNObjectDeliveryBoxReceived, UObject* ReceivedObject, const FString& ReceivedJsonString, const UObjectDelivererProtocol* FromObject) \
{ \
	_Script_XSensRemote_eventCNObjectDeliveryBoxReceived_Parms Parms; \
	Parms.ReceivedObject=ReceivedObject; \
	Parms.ReceivedJsonString=ReceivedJsonString; \
	Parms.FromObject=FromObject; \
	CNObjectDeliveryBoxReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h_15_SPARSE_DATA
#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendTo); \
	DECLARE_FUNCTION(execSend); \
	DECLARE_FUNCTION(execInitializeCustom); \
	DECLARE_FUNCTION(execInitialize);


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendTo); \
	DECLARE_FUNCTION(execSend); \
	DECLARE_FUNCTION(execInitializeCustom); \
	DECLARE_FUNCTION(execInitialize);


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectDeliveryBoxUsingJson(); \
	friend struct Z_Construct_UClass_UObjectDeliveryBoxUsingJson_Statics; \
public: \
	DECLARE_CLASS(UObjectDeliveryBoxUsingJson, UDeliveryBox, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XSensRemote"), NO_API) \
	DECLARE_SERIALIZER(UObjectDeliveryBoxUsingJson)


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUObjectDeliveryBoxUsingJson(); \
	friend struct Z_Construct_UClass_UObjectDeliveryBoxUsingJson_Statics; \
public: \
	DECLARE_CLASS(UObjectDeliveryBoxUsingJson, UDeliveryBox, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XSensRemote"), NO_API) \
	DECLARE_SERIALIZER(UObjectDeliveryBoxUsingJson)


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectDeliveryBoxUsingJson(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectDeliveryBoxUsingJson) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectDeliveryBoxUsingJson); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectDeliveryBoxUsingJson); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectDeliveryBoxUsingJson(UObjectDeliveryBoxUsingJson&&); \
	NO_API UObjectDeliveryBoxUsingJson(const UObjectDeliveryBoxUsingJson&); \
public:


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectDeliveryBoxUsingJson(UObjectDeliveryBoxUsingJson&&); \
	NO_API UObjectDeliveryBoxUsingJson(const UObjectDeliveryBoxUsingJson&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectDeliveryBoxUsingJson); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectDeliveryBoxUsingJson); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UObjectDeliveryBoxUsingJson)


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TargetClass() { return STRUCT_OFFSET(UObjectDeliveryBoxUsingJson, TargetClass); } \
	FORCEINLINE static uint32 __PPO__Serializer() { return STRUCT_OFFSET(UObjectDeliveryBoxUsingJson, Serializer); } \
	FORCEINLINE static uint32 __PPO__Deserializer() { return STRUCT_OFFSET(UObjectDeliveryBoxUsingJson, Deserializer); }


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h_12_PROLOG
#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h_15_PRIVATE_PROPERTY_OFFSET \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h_15_SPARSE_DATA \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h_15_RPC_WRAPPERS \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h_15_INCLASS \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h_15_PRIVATE_PROPERTY_OFFSET \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h_15_SPARSE_DATA \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h_15_INCLASS_NO_PURE_DECLS \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XSENSREMOTE_API UClass* StaticClass<class UObjectDeliveryBoxUsingJson>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_ObjectDeliveryBoxUsingJson_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
