// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef XSENSREMOTE_PacketRule_generated_h
#error "PacketRule.generated.h already included, missing '#pragma once' in PacketRule.h"
#endif
#define XSENSREMOTE_PacketRule_generated_h

#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_PacketRule_PacketRule_h_23_SPARSE_DATA
#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_PacketRule_PacketRule_h_23_RPC_WRAPPERS
#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_PacketRule_PacketRule_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_PacketRule_PacketRule_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPacketRule(); \
	friend struct Z_Construct_UClass_UPacketRule_Statics; \
public: \
	DECLARE_CLASS(UPacketRule, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XSensRemote"), NO_API) \
	DECLARE_SERIALIZER(UPacketRule)


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_PacketRule_PacketRule_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPacketRule(); \
	friend struct Z_Construct_UClass_UPacketRule_Statics; \
public: \
	DECLARE_CLASS(UPacketRule, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XSensRemote"), NO_API) \
	DECLARE_SERIALIZER(UPacketRule)


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_PacketRule_PacketRule_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPacketRule(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPacketRule) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPacketRule); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPacketRule); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPacketRule(UPacketRule&&); \
	NO_API UPacketRule(const UPacketRule&); \
public:


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_PacketRule_PacketRule_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPacketRule(UPacketRule&&); \
	NO_API UPacketRule(const UPacketRule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPacketRule); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPacketRule); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPacketRule)


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_PacketRule_PacketRule_h_23_PRIVATE_PROPERTY_OFFSET
#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_PacketRule_PacketRule_h_20_PROLOG
#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_PacketRule_PacketRule_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_PacketRule_PacketRule_h_23_PRIVATE_PROPERTY_OFFSET \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_PacketRule_PacketRule_h_23_SPARSE_DATA \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_PacketRule_PacketRule_h_23_RPC_WRAPPERS \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_PacketRule_PacketRule_h_23_INCLASS \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_PacketRule_PacketRule_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_PacketRule_PacketRule_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_PacketRule_PacketRule_h_23_PRIVATE_PROPERTY_OFFSET \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_PacketRule_PacketRule_h_23_SPARSE_DATA \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_PacketRule_PacketRule_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_PacketRule_PacketRule_h_23_INCLASS_NO_PURE_DECLS \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_PacketRule_PacketRule_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XSENSREMOTE_API UClass* StaticClass<class UPacketRule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_PacketRule_PacketRule_h


#define FOREACH_ENUM_ECNBUFFERENDIAN(op) \
	op(ECNBufferEndian::Big) \
	op(ECNBufferEndian::Little) 

enum class ECNBufferEndian : uint8;
template<> XSENSREMOTE_API UEnum* StaticEnum<ECNBufferEndian>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
