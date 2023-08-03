// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XSensRemote/Public/DeliveryBox/ODOverrideJsonSerializer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODOverrideJsonSerializer() {}
// Cross Module References
	XSENSREMOTE_API UEnum* Z_Construct_UEnum_XSensRemote_EODJsonSerializeType();
	UPackage* Z_Construct_UPackage__Script_XSensRemote();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UODOverrideJsonSerializer_NoRegister();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UODOverrideJsonSerializer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UODNoWriteTypeJsonSerializer_NoRegister();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UODNoWriteTypeJsonSerializer();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UODWriteTypeJsonSerializer_NoRegister();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UODWriteTypeJsonSerializer();
// End Cross Module References
	static UEnum* EODJsonSerializeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_XSensRemote_EODJsonSerializeType, Z_Construct_UPackage__Script_XSensRemote(), TEXT("EODJsonSerializeType"));
		}
		return Singleton;
	}
	template<> XSENSREMOTE_API UEnum* StaticEnum<EODJsonSerializeType>()
	{
		return EODJsonSerializeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EODJsonSerializeType(EODJsonSerializeType_StaticEnum, TEXT("/Script/XSensRemote"), TEXT("EODJsonSerializeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_XSensRemote_EODJsonSerializeType_Hash() { return 3414834409U; }
	UEnum* Z_Construct_UEnum_XSensRemote_EODJsonSerializeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_XSensRemote();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EODJsonSerializeType"), 0, Get_Z_Construct_UEnum_XSensRemote_EODJsonSerializeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EODJsonSerializeType::NoWriteType", (int64)EODJsonSerializeType::NoWriteType },
				{ "EODJsonSerializeType::WriteType", (int64)EODJsonSerializeType::WriteType },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/DeliveryBox/ODOverrideJsonSerializer.h" },
				{ "NoWriteType.Comment", "/** Do not include the class name */" },
				{ "NoWriteType.Name", "EODJsonSerializeType::NoWriteType" },
				{ "NoWriteType.ToolTip", "Do not include the class name" },
				{ "WriteType.Comment", "/** Include the class name */" },
				{ "WriteType.Name", "EODJsonSerializeType::WriteType" },
				{ "WriteType.ToolTip", "Include the class name" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_XSensRemote,
				nullptr,
				"EODJsonSerializeType",
				"EODJsonSerializeType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UODOverrideJsonSerializer::StaticRegisterNativesUODOverrideJsonSerializer()
	{
	}
	UClass* Z_Construct_UClass_UODOverrideJsonSerializer_NoRegister()
	{
		return UODOverrideJsonSerializer::StaticClass();
	}
	struct Z_Construct_UClass_UODOverrideJsonSerializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UODOverrideJsonSerializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_XSensRemote,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UODOverrideJsonSerializer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DeliveryBox/ODOverrideJsonSerializer.h" },
		{ "ModuleRelativePath", "Public/DeliveryBox/ODOverrideJsonSerializer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UODOverrideJsonSerializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODOverrideJsonSerializer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UODOverrideJsonSerializer_Statics::ClassParams = {
		&UODOverrideJsonSerializer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UODOverrideJsonSerializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UODOverrideJsonSerializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UODOverrideJsonSerializer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UODOverrideJsonSerializer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UODOverrideJsonSerializer, 1863416562);
	template<> XSENSREMOTE_API UClass* StaticClass<UODOverrideJsonSerializer>()
	{
		return UODOverrideJsonSerializer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UODOverrideJsonSerializer(Z_Construct_UClass_UODOverrideJsonSerializer, &UODOverrideJsonSerializer::StaticClass, TEXT("/Script/XSensRemote"), TEXT("UODOverrideJsonSerializer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UODOverrideJsonSerializer);
	void UODNoWriteTypeJsonSerializer::StaticRegisterNativesUODNoWriteTypeJsonSerializer()
	{
	}
	UClass* Z_Construct_UClass_UODNoWriteTypeJsonSerializer_NoRegister()
	{
		return UODNoWriteTypeJsonSerializer::StaticClass();
	}
	struct Z_Construct_UClass_UODNoWriteTypeJsonSerializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UODNoWriteTypeJsonSerializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UODOverrideJsonSerializer,
		(UObject* (*)())Z_Construct_UPackage__Script_XSensRemote,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UODNoWriteTypeJsonSerializer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DeliveryBox/ODOverrideJsonSerializer.h" },
		{ "ModuleRelativePath", "Public/DeliveryBox/ODOverrideJsonSerializer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UODNoWriteTypeJsonSerializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODNoWriteTypeJsonSerializer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UODNoWriteTypeJsonSerializer_Statics::ClassParams = {
		&UODNoWriteTypeJsonSerializer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UODNoWriteTypeJsonSerializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UODNoWriteTypeJsonSerializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UODNoWriteTypeJsonSerializer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UODNoWriteTypeJsonSerializer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UODNoWriteTypeJsonSerializer, 3232289206);
	template<> XSENSREMOTE_API UClass* StaticClass<UODNoWriteTypeJsonSerializer>()
	{
		return UODNoWriteTypeJsonSerializer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UODNoWriteTypeJsonSerializer(Z_Construct_UClass_UODNoWriteTypeJsonSerializer, &UODNoWriteTypeJsonSerializer::StaticClass, TEXT("/Script/XSensRemote"), TEXT("UODNoWriteTypeJsonSerializer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UODNoWriteTypeJsonSerializer);
	void UODWriteTypeJsonSerializer::StaticRegisterNativesUODWriteTypeJsonSerializer()
	{
	}
	UClass* Z_Construct_UClass_UODWriteTypeJsonSerializer_NoRegister()
	{
		return UODWriteTypeJsonSerializer::StaticClass();
	}
	struct Z_Construct_UClass_UODWriteTypeJsonSerializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UODWriteTypeJsonSerializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UODOverrideJsonSerializer,
		(UObject* (*)())Z_Construct_UPackage__Script_XSensRemote,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UODWriteTypeJsonSerializer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DeliveryBox/ODOverrideJsonSerializer.h" },
		{ "ModuleRelativePath", "Public/DeliveryBox/ODOverrideJsonSerializer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UODWriteTypeJsonSerializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODWriteTypeJsonSerializer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UODWriteTypeJsonSerializer_Statics::ClassParams = {
		&UODWriteTypeJsonSerializer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UODWriteTypeJsonSerializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UODWriteTypeJsonSerializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UODWriteTypeJsonSerializer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UODWriteTypeJsonSerializer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UODWriteTypeJsonSerializer, 1680371948);
	template<> XSENSREMOTE_API UClass* StaticClass<UODWriteTypeJsonSerializer>()
	{
		return UODWriteTypeJsonSerializer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UODWriteTypeJsonSerializer(Z_Construct_UClass_UODWriteTypeJsonSerializer, &UODWriteTypeJsonSerializer::StaticClass, TEXT("/Script/XSensRemote"), TEXT("UODWriteTypeJsonSerializer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UODWriteTypeJsonSerializer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
