// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetGenerator/Public/AssetGeneration/AssetGeneratorLocalSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetGeneratorLocalSettings() {}
// Cross Module References
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UAssetGeneratorLocalSettings_NoRegister();
	ASSETGENERATOR_API UClass* Z_Construct_UClass_UAssetGeneratorLocalSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_AssetGenerator();
// End Cross Module References
	void UAssetGeneratorLocalSettings::StaticRegisterNativesUAssetGeneratorLocalSettings()
	{
	}
	UClass* Z_Construct_UClass_UAssetGeneratorLocalSettings_NoRegister()
	{
		return UAssetGeneratorLocalSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAssetDumpPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentAssetDumpPath;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WhitelistedAssetCategories_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhitelistedAssetCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_WhitelistedAssetCategories;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAssetsToAdvancePerTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAssetsToAdvancePerTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRefreshExistingAssets_MetaData[];
#endif
		static void NewProp_bRefreshExistingAssets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRefreshExistingAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGeneratePublicProject_MetaData[];
#endif
		static void NewProp_bGeneratePublicProject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGeneratePublicProject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Asset Generator Local Settings" },
		{ "IncludePath", "AssetGeneration/AssetGeneratorLocalSettings.h" },
		{ "ModuleRelativePath", "Public/AssetGeneration/AssetGeneratorLocalSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_CurrentAssetDumpPath_MetaData[] = {
		{ "Category", "Asset Generator" },
		{ "Comment", "/** Path to the asset dump last generated from, or empty string */" },
		{ "ModuleRelativePath", "Public/AssetGeneration/AssetGeneratorLocalSettings.h" },
		{ "ToolTip", "Path to the asset dump last generated from, or empty string" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_CurrentAssetDumpPath = { "CurrentAssetDumpPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetGeneratorLocalSettings, CurrentAssetDumpPath), METADATA_PARAMS(Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_CurrentAssetDumpPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_CurrentAssetDumpPath_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_WhitelistedAssetCategories_ElementProp = { "WhitelistedAssetCategories", nullptr, (EPropertyFlags)0x0000000000024001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_WhitelistedAssetCategories_MetaData[] = {
		{ "Category", "Asset Generator" },
		{ "Comment", "/** Asset categories that have been whitelisted for the generation. Editable through asset generator UI */" },
		{ "ModuleRelativePath", "Public/AssetGeneration/AssetGeneratorLocalSettings.h" },
		{ "ToolTip", "Asset categories that have been whitelisted for the generation. Editable through asset generator UI" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_WhitelistedAssetCategories = { "WhitelistedAssetCategories", nullptr, (EPropertyFlags)0x0010000000024001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetGeneratorLocalSettings, WhitelistedAssetCategories), METADATA_PARAMS(Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_WhitelistedAssetCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_WhitelistedAssetCategories_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_MaxAssetsToAdvancePerTick_MetaData[] = {
		{ "Category", "Asset Generator" },
		{ "Comment", "/** Maximum amount of asset generators to advance in one tick */" },
		{ "ModuleRelativePath", "Public/AssetGeneration/AssetGeneratorLocalSettings.h" },
		{ "ToolTip", "Maximum amount of asset generators to advance in one tick" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_MaxAssetsToAdvancePerTick = { "MaxAssetsToAdvancePerTick", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetGeneratorLocalSettings, MaxAssetsToAdvancePerTick), METADATA_PARAMS(Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_MaxAssetsToAdvancePerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_MaxAssetsToAdvancePerTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_bRefreshExistingAssets_MetaData[] = {
		{ "Category", "Asset Generator" },
		{ "Comment", "/** Whenever existing assets need to be refreshed */" },
		{ "ModuleRelativePath", "Public/AssetGeneration/AssetGeneratorLocalSettings.h" },
		{ "ToolTip", "Whenever existing assets need to be refreshed" },
	};
#endif
	void Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_bRefreshExistingAssets_SetBit(void* Obj)
	{
		((UAssetGeneratorLocalSettings*)Obj)->bRefreshExistingAssets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_bRefreshExistingAssets = { "bRefreshExistingAssets", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetGeneratorLocalSettings), &Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_bRefreshExistingAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_bRefreshExistingAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_bRefreshExistingAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_bGeneratePublicProject_MetaData[] = {
		{ "Category", "Asset Generator" },
		{ "Comment", "/** Whenever we are generating a public project */" },
		{ "ModuleRelativePath", "Public/AssetGeneration/AssetGeneratorLocalSettings.h" },
		{ "ToolTip", "Whenever we are generating a public project" },
	};
#endif
	void Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_bGeneratePublicProject_SetBit(void* Obj)
	{
		((UAssetGeneratorLocalSettings*)Obj)->bGeneratePublicProject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_bGeneratePublicProject = { "bGeneratePublicProject", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetGeneratorLocalSettings), &Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_bGeneratePublicProject_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_bGeneratePublicProject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_bGeneratePublicProject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_CurrentAssetDumpPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_WhitelistedAssetCategories_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_WhitelistedAssetCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_MaxAssetsToAdvancePerTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_bRefreshExistingAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::NewProp_bGeneratePublicProject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetGeneratorLocalSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::ClassParams = {
		&UAssetGeneratorLocalSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetGeneratorLocalSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetGeneratorLocalSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetGeneratorLocalSettings, 3965249199);
	template<> ASSETGENERATOR_API UClass* StaticClass<UAssetGeneratorLocalSettings>()
	{
		return UAssetGeneratorLocalSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetGeneratorLocalSettings(Z_Construct_UClass_UAssetGeneratorLocalSettings, &UAssetGeneratorLocalSettings::StaticClass, TEXT("/Script/AssetGenerator"), TEXT("UAssetGeneratorLocalSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetGeneratorLocalSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
