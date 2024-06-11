// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrefabricatorRuntime/Public/LevelPrefabData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelPrefabData() {}
// Cross Module References
	PREFABRICATORRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLevelPrefabData();
	UPackage* Z_Construct_UPackage__Script_PrefabricatorRuntime();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAssetCollection_NoRegister();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FLevelPrefabData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PREFABRICATORRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FLevelPrefabData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelPrefabData, Z_Construct_UPackage__Script_PrefabricatorRuntime(), TEXT("LevelPrefabData"), sizeof(FLevelPrefabData), Get_Z_Construct_UScriptStruct_FLevelPrefabData_Hash());
	}
	return Singleton;
}
template<> PREFABRICATORRUNTIME_API UScriptStruct* StaticStruct<FLevelPrefabData>()
{
	return FLevelPrefabData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelPrefabData(FLevelPrefabData::StaticStruct, TEXT("/Script/PrefabricatorRuntime"), TEXT("LevelPrefabData"), false, nullptr, nullptr);
static struct FScriptStruct_PrefabricatorRuntime_StaticRegisterNativesFLevelPrefabData
{
	FScriptStruct_PrefabricatorRuntime_StaticRegisterNativesFLevelPrefabData()
	{
		UScriptStruct::DeferCppStructOps<FLevelPrefabData>(FName(TEXT("LevelPrefabData")));
	}
} ScriptStruct_PrefabricatorRuntime_StaticRegisterNativesFLevelPrefabData;
	struct Z_Construct_UScriptStruct_FLevelPrefabData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LevelName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelPrefabCollections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelPrefabCollections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelPrefabCollections;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LevelPrefabAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelPrefabAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelPrefabAssets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticPrefabCollections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticPrefabCollections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticPrefabCollections;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_StaticPrefabs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticPrefabs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticPrefabs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelPrefabData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LevelPrefabData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelPrefabData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_LevelName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelPrefabData" },
		{ "ModuleRelativePath", "Public/LevelPrefabData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelPrefabData, LevelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_LevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_LevelName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_LevelPrefabCollections_Inner = { "LevelPrefabCollections", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrefabricatorAssetCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_LevelPrefabCollections_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelPrefabData" },
		{ "ModuleRelativePath", "Public/LevelPrefabData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_LevelPrefabCollections = { "LevelPrefabCollections", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelPrefabData, LevelPrefabCollections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_LevelPrefabCollections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_LevelPrefabCollections_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_LevelPrefabAssets_Inner = { "LevelPrefabAssets", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrefabricatorAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_LevelPrefabAssets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelPrefabData" },
		{ "ModuleRelativePath", "Public/LevelPrefabData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_LevelPrefabAssets = { "LevelPrefabAssets", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelPrefabData, LevelPrefabAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_LevelPrefabAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_LevelPrefabAssets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_StaticPrefabCollections_Inner = { "StaticPrefabCollections", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrefabricatorAssetCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_StaticPrefabCollections_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelPrefabData" },
		{ "ModuleRelativePath", "Public/LevelPrefabData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_StaticPrefabCollections = { "StaticPrefabCollections", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelPrefabData, StaticPrefabCollections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_StaticPrefabCollections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_StaticPrefabCollections_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_StaticPrefabs_Inner = { "StaticPrefabs", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrefabricatorAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_StaticPrefabs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelPrefabData" },
		{ "ModuleRelativePath", "Public/LevelPrefabData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_StaticPrefabs = { "StaticPrefabs", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelPrefabData, StaticPrefabs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_StaticPrefabs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_StaticPrefabs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelPrefabData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_LevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_LevelPrefabCollections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_LevelPrefabCollections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_LevelPrefabAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_LevelPrefabAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_StaticPrefabCollections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_StaticPrefabCollections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_StaticPrefabs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelPrefabData_Statics::NewProp_StaticPrefabs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelPrefabData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PrefabricatorRuntime,
		nullptr,
		&NewStructOps,
		"LevelPrefabData",
		sizeof(FLevelPrefabData),
		alignof(FLevelPrefabData),
		Z_Construct_UScriptStruct_FLevelPrefabData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelPrefabData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelPrefabData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelPrefabData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelPrefabData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelPrefabData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PrefabricatorRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelPrefabData"), sizeof(FLevelPrefabData), Get_Z_Construct_UScriptStruct_FLevelPrefabData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelPrefabData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelPrefabData_Hash() { return 4136413827U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
