// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Public/FMODBankLookup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODBankLookup() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBankLookup_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBankLookup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	void UFMODBankLookup::StaticRegisterNativesUFMODBankLookup()
	{
	}
	UClass* Z_Construct_UClass_UFMODBankLookup_NoRegister()
	{
		return UFMODBankLookup::StaticClass();
	}
	struct Z_Construct_UClass_UFMODBankLookup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterBankPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MasterBankPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterAssetsBankPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MasterAssetsBankPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterStringsBankPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MasterStringsBankPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFMODBankLookup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODBankLookup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FMODBankLookup.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FMODBankLookup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_DataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODBankLookup" },
		{ "ModuleRelativePath", "Public/FMODBankLookup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODBankLookup, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_DataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterBankPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODBankLookup" },
		{ "ModuleRelativePath", "Public/FMODBankLookup.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterBankPath = { "MasterBankPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODBankLookup, MasterBankPath), METADATA_PARAMS(Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterBankPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterBankPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterAssetsBankPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODBankLookup" },
		{ "ModuleRelativePath", "Public/FMODBankLookup.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterAssetsBankPath = { "MasterAssetsBankPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODBankLookup, MasterAssetsBankPath), METADATA_PARAMS(Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterAssetsBankPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterAssetsBankPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterStringsBankPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODBankLookup" },
		{ "ModuleRelativePath", "Public/FMODBankLookup.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterStringsBankPath = { "MasterStringsBankPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODBankLookup, MasterStringsBankPath), METADATA_PARAMS(Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterStringsBankPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterStringsBankPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFMODBankLookup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_DataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterBankPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterAssetsBankPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterStringsBankPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODBankLookup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODBankLookup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFMODBankLookup_Statics::ClassParams = {
		&UFMODBankLookup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFMODBankLookup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBankLookup_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFMODBankLookup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBankLookup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFMODBankLookup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFMODBankLookup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODBankLookup, 431089258);
	template<> FMODSTUDIO_API UClass* StaticClass<UFMODBankLookup>()
	{
		return UFMODBankLookup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODBankLookup(Z_Construct_UClass_UFMODBankLookup, &UFMODBankLookup::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODBankLookup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODBankLookup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
