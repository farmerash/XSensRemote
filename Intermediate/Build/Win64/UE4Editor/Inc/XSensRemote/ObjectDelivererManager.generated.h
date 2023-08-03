// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObjectDelivererProtocol;
enum class EDialogResult : uint8;
class AActor;
class UPacketRule;
class UObjectDelivererManager;
#ifdef XSENSREMOTE_ObjectDelivererManager_generated_h
#error "ObjectDelivererManager.generated.h already included, missing '#pragma once' in ObjectDelivererManager.h"
#endif
#define XSENSREMOTE_ObjectDelivererManager_generated_h

#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_22_DELEGATE \
struct _Script_XSensRemote_eventObjectDelivererManagerReceiveData_Parms \
{ \
	const UObjectDelivererProtocol* ClientSocket; \
	TArray<uint8> Buffer; \
}; \
static inline void FObjectDelivererManagerReceiveData_DelegateWrapper(const FMulticastScriptDelegate& ObjectDelivererManagerReceiveData, const UObjectDelivererProtocol* ClientSocket, TArray<uint8> const& Buffer) \
{ \
	_Script_XSensRemote_eventObjectDelivererManagerReceiveData_Parms Parms; \
	Parms.ClientSocket=ClientSocket; \
	Parms.Buffer=Buffer; \
	ObjectDelivererManagerReceiveData.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_21_DELEGATE \
struct _Script_XSensRemote_eventObjectDelivererManagerDisconnected_Parms \
{ \
	const UObjectDelivererProtocol* ClientSocket; \
}; \
static inline void FObjectDelivererManagerDisconnected_DelegateWrapper(const FMulticastScriptDelegate& ObjectDelivererManagerDisconnected, const UObjectDelivererProtocol* ClientSocket) \
{ \
	_Script_XSensRemote_eventObjectDelivererManagerDisconnected_Parms Parms; \
	Parms.ClientSocket=ClientSocket; \
	ObjectDelivererManagerDisconnected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_20_DELEGATE \
struct _Script_XSensRemote_eventObjectDelivererManagerConnected_Parms \
{ \
	const UObjectDelivererProtocol* ClientSocket; \
}; \
static inline void FObjectDelivererManagerConnected_DelegateWrapper(const FMulticastScriptDelegate& ObjectDelivererManagerConnected, const UObjectDelivererProtocol* ClientSocket) \
{ \
	_Script_XSensRemote_eventObjectDelivererManagerConnected_Parms Parms; \
	Parms.ClientSocket=ClientSocket; \
	ObjectDelivererManagerConnected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_34_SPARSE_DATA
#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenDirectoryDialog); \
	DECLARE_FUNCTION(execOpenFileDialog); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execGetActorStreamingLevelName); \
	DECLARE_FUNCTION(execSaveTxt); \
	DECLARE_FUNCTION(execLoadTxt); \
	DECLARE_FUNCTION(execSendTo); \
	DECLARE_FUNCTION(execSendStopRecord); \
	DECLARE_FUNCTION(execSendStartRecord); \
	DECLARE_FUNCTION(execSendPlayPause); \
	DECLARE_FUNCTION(execSendActorRecenter); \
	DECLARE_FUNCTION(execSend); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execStartConnection); \
	DECLARE_FUNCTION(execCreateDelivererManager);


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenDirectoryDialog); \
	DECLARE_FUNCTION(execOpenFileDialog); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execGetActorStreamingLevelName); \
	DECLARE_FUNCTION(execSaveTxt); \
	DECLARE_FUNCTION(execLoadTxt); \
	DECLARE_FUNCTION(execSendTo); \
	DECLARE_FUNCTION(execSendStopRecord); \
	DECLARE_FUNCTION(execSendStartRecord); \
	DECLARE_FUNCTION(execSendPlayPause); \
	DECLARE_FUNCTION(execSendActorRecenter); \
	DECLARE_FUNCTION(execSend); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execStartConnection); \
	DECLARE_FUNCTION(execCreateDelivererManager);


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectDelivererManager(); \
	friend struct Z_Construct_UClass_UObjectDelivererManager_Statics; \
public: \
	DECLARE_CLASS(UObjectDelivererManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XSensRemote"), NO_API) \
	DECLARE_SERIALIZER(UObjectDelivererManager)


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUObjectDelivererManager(); \
	friend struct Z_Construct_UClass_UObjectDelivererManager_Statics; \
public: \
	DECLARE_CLASS(UObjectDelivererManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XSensRemote"), NO_API) \
	DECLARE_SERIALIZER(UObjectDelivererManager)


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectDelivererManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectDelivererManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectDelivererManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectDelivererManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectDelivererManager(UObjectDelivererManager&&); \
	NO_API UObjectDelivererManager(const UObjectDelivererManager&); \
public:


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectDelivererManager(UObjectDelivererManager&&); \
	NO_API UObjectDelivererManager(const UObjectDelivererManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectDelivererManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectDelivererManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UObjectDelivererManager)


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_34_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentProtocol() { return STRUCT_OFFSET(UObjectDelivererManager, CurrentProtocol); } \
	FORCEINLINE static uint32 __PPO__DeliveryBox() { return STRUCT_OFFSET(UObjectDelivererManager, DeliveryBox); }


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_31_PROLOG
#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_34_PRIVATE_PROPERTY_OFFSET \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_34_SPARSE_DATA \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_34_RPC_WRAPPERS \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_34_INCLASS \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_34_PRIVATE_PROPERTY_OFFSET \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_34_SPARSE_DATA \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_34_INCLASS_NO_PURE_DECLS \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XSENSREMOTE_API UClass* StaticClass<class UObjectDelivererManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_ObjectDelivererManager_h


#define FOREACH_ENUM_EDIALOGRESULT(op) \
	op(EDialogResult::Successful) \
	op(EDialogResult::Cancelled) 

enum class EDialogResult : uint8;
template<> XSENSREMOTE_API UEnum* StaticEnum<EDialogResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
