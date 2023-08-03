// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XSensRemote/Public/DeliveryBox/IODConvertPropertyName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIODConvertPropertyName() {}
// Cross Module References
	XSENSREMOTE_API UClass* Z_Construct_UClass_UODConvertPropertyName_NoRegister();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UODConvertPropertyName();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_XSensRemote();
// End Cross Module References
	DEFINE_FUNCTION(IODConvertPropertyName::execConvertFPropertyName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ConvertFPropertyName_Implementation(Z_Param_Out_PropertyName);
		P_NATIVE_END;
	}
	FString IODConvertPropertyName::ConvertFPropertyName(FName const& PropertyName) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ConvertFPropertyName instead.");
		ODConvertPropertyName_eventConvertFPropertyName_Parms Parms;
		return Parms.ReturnValue;
	}
	void UODConvertPropertyName::StaticRegisterNativesUODConvertPropertyName()
	{
		UClass* Class = UODConvertPropertyName::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertFPropertyName", &IODConvertPropertyName::execConvertFPropertyName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UODConvertPropertyName_ConvertFPropertyName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UODConvertPropertyName_ConvertFPropertyName_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UODConvertPropertyName_ConvertFPropertyName_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ODConvertPropertyName_eventConvertFPropertyName_Parms, PropertyName), METADATA_PARAMS(Z_Construct_UFunction_UODConvertPropertyName_ConvertFPropertyName_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UODConvertPropertyName_ConvertFPropertyName_Statics::NewProp_PropertyName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UODConvertPropertyName_ConvertFPropertyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ODConvertPropertyName_eventConvertFPropertyName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UODConvertPropertyName_ConvertFPropertyName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODConvertPropertyName_ConvertFPropertyName_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODConvertPropertyName_ConvertFPropertyName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UODConvertPropertyName_ConvertFPropertyName_Statics::Function_MetaDataParams[] = {
		{ "Category", "XSensRemote" },
		{ "ModuleRelativePath", "Public/DeliveryBox/IODConvertPropertyName.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UODConvertPropertyName_ConvertFPropertyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODConvertPropertyName, nullptr, "ConvertFPropertyName", nullptr, nullptr, sizeof(ODConvertPropertyName_eventConvertFPropertyName_Parms), Z_Construct_UFunction_UODConvertPropertyName_ConvertFPropertyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UODConvertPropertyName_ConvertFPropertyName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UODConvertPropertyName_ConvertFPropertyName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UODConvertPropertyName_ConvertFPropertyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UODConvertPropertyName_ConvertFPropertyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UODConvertPropertyName_ConvertFPropertyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UODConvertPropertyName_NoRegister()
	{
		return UODConvertPropertyName::StaticClass();
	}
	struct Z_Construct_UClass_UODConvertPropertyName_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UODConvertPropertyName_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_XSensRemote,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UODConvertPropertyName_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UODConvertPropertyName_ConvertFPropertyName, "ConvertFPropertyName" }, // 1522171058
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UODConvertPropertyName_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DeliveryBox/IODConvertPropertyName.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UODConvertPropertyName_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IODConvertPropertyName>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UODConvertPropertyName_Statics::ClassParams = {
		&UODConvertPropertyName::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UODConvertPropertyName_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UODConvertPropertyName_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UODConvertPropertyName()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UODConvertPropertyName_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UODConvertPropertyName, 3822326798);
	template<> XSENSREMOTE_API UClass* StaticClass<UODConvertPropertyName>()
	{
		return UODConvertPropertyName::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UODConvertPropertyName(Z_Construct_UClass_UODConvertPropertyName, &UODConvertPropertyName::StaticClass, TEXT("/Script/XSensRemote"), TEXT("UODConvertPropertyName"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UODConvertPropertyName);
	static FName NAME_UODConvertPropertyName_ConvertFPropertyName = FName(TEXT("ConvertFPropertyName"));
	FString IODConvertPropertyName::Execute_ConvertFPropertyName(const UObject* O, FName const& PropertyName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UODConvertPropertyName::StaticClass()));
		ODConvertPropertyName_eventConvertFPropertyName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UODConvertPropertyName_ConvertFPropertyName);
		if (Func)
		{
			Parms.PropertyName=PropertyName;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IODConvertPropertyName*)(O->GetNativeInterfaceAddress(UODConvertPropertyName::StaticClass())))
		{
			Parms.ReturnValue = I->ConvertFPropertyName_Implementation(PropertyName);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
