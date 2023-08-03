// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef XSENSREMOTE_IODConvertPropertyName_generated_h
#error "IODConvertPropertyName.generated.h already included, missing '#pragma once' in IODConvertPropertyName.h"
#endif
#define XSENSREMOTE_IODConvertPropertyName_generated_h

#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_SPARSE_DATA
#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_RPC_WRAPPERS \
	virtual FString ConvertFPropertyName_Implementation(FName const& PropertyName) const { return TEXT(""); }; \
 \
	DECLARE_FUNCTION(execConvertFPropertyName);


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FString ConvertFPropertyName_Implementation(FName const& PropertyName) const { return TEXT(""); }; \
 \
	DECLARE_FUNCTION(execConvertFPropertyName);


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_EVENT_PARMS \
	struct ODConvertPropertyName_eventConvertFPropertyName_Parms \
	{ \
		FName PropertyName; \
		FString ReturnValue; \
	};


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_CALLBACK_WRAPPERS
#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UODConvertPropertyName(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UODConvertPropertyName) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UODConvertPropertyName); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UODConvertPropertyName); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UODConvertPropertyName(UODConvertPropertyName&&); \
	NO_API UODConvertPropertyName(const UODConvertPropertyName&); \
public:


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UODConvertPropertyName(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UODConvertPropertyName(UODConvertPropertyName&&); \
	NO_API UODConvertPropertyName(const UODConvertPropertyName&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UODConvertPropertyName); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UODConvertPropertyName); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UODConvertPropertyName)


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUODConvertPropertyName(); \
	friend struct Z_Construct_UClass_UODConvertPropertyName_Statics; \
public: \
	DECLARE_CLASS(UODConvertPropertyName, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/XSensRemote"), NO_API) \
	DECLARE_SERIALIZER(UODConvertPropertyName)


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_GENERATED_UINTERFACE_BODY() \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_GENERATED_UINTERFACE_BODY() \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IODConvertPropertyName() {} \
public: \
	typedef UODConvertPropertyName UClassType; \
	typedef IODConvertPropertyName ThisClass; \
	static FString Execute_ConvertFPropertyName(const UObject* O, FName const& PropertyName); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IODConvertPropertyName() {} \
public: \
	typedef UODConvertPropertyName UClassType; \
	typedef IODConvertPropertyName ThisClass; \
	static FString Execute_ConvertFPropertyName(const UObject* O, FName const& PropertyName); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_8_PROLOG \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_EVENT_PARMS


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_SPARSE_DATA \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_RPC_WRAPPERS \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_CALLBACK_WRAPPERS \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_SPARSE_DATA \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_CALLBACK_WRAPPERS \
	BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XSENSREMOTE_API UClass* StaticClass<class UODConvertPropertyName>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BronTakeRec_4_26_1_Plugins_XSensRemote_Source_XSensRemote_Public_DeliveryBox_IODConvertPropertyName_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
