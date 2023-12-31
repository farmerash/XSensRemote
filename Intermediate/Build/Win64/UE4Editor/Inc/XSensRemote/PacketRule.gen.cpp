// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XSensRemote/Public/PacketRule/PacketRule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacketRule() {}
// Cross Module References
	XSENSREMOTE_API UEnum* Z_Construct_UEnum_XSensRemote_ECNBufferEndian();
	UPackage* Z_Construct_UPackage__Script_XSensRemote();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UPacketRule_NoRegister();
	XSENSREMOTE_API UClass* Z_Construct_UClass_UPacketRule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ECNBufferEndian_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_XSensRemote_ECNBufferEndian, Z_Construct_UPackage__Script_XSensRemote(), TEXT("ECNBufferEndian"));
		}
		return Singleton;
	}
	template<> XSENSREMOTE_API UEnum* StaticEnum<ECNBufferEndian>()
	{
		return ECNBufferEndian_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECNBufferEndian(ECNBufferEndian_StaticEnum, TEXT("/Script/XSensRemote"), TEXT("ECNBufferEndian"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_XSensRemote_ECNBufferEndian_Hash() { return 1343619551U; }
	UEnum* Z_Construct_UEnum_XSensRemote_ECNBufferEndian()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_XSensRemote();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECNBufferEndian"), 0, Get_Z_Construct_UEnum_XSensRemote_ECNBufferEndian_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECNBufferEndian::Big", (int64)ECNBufferEndian::Big },
				{ "ECNBufferEndian::Little", (int64)ECNBufferEndian::Little },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Big.Comment", "/** Big Endian */" },
				{ "Big.Name", "ECNBufferEndian::Big" },
				{ "Big.ToolTip", "Big Endian" },
				{ "BlueprintType", "true" },
				{ "Little.Comment", "/** Little Endian */" },
				{ "Little.Name", "ECNBufferEndian::Little" },
				{ "Little.ToolTip", "Little Endian" },
				{ "ModuleRelativePath", "Public/PacketRule/PacketRule.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_XSensRemote,
				nullptr,
				"ECNBufferEndian",
				"ECNBufferEndian",
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
	void UPacketRule::StaticRegisterNativesUPacketRule()
	{
	}
	UClass* Z_Construct_UClass_UPacketRule_NoRegister()
	{
		return UPacketRule::StaticClass();
	}
	struct Z_Construct_UClass_UPacketRule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPacketRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_XSensRemote,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPacketRule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PacketRule/PacketRule.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PacketRule/PacketRule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPacketRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPacketRule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPacketRule_Statics::ClassParams = {
		&UPacketRule::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPacketRule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPacketRule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPacketRule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPacketRule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPacketRule, 512589147);
	template<> XSENSREMOTE_API UClass* StaticClass<UPacketRule>()
	{
		return UPacketRule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPacketRule(Z_Construct_UClass_UPacketRule, &UPacketRule::StaticClass, TEXT("/Script/XSensRemote"), TEXT("UPacketRule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPacketRule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
