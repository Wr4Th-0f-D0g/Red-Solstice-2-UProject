// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrefabricatorRuntime/Public/PrefabricatorPropertyAssetMapping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrefabricatorPropertyAssetMapping() {}
// Cross Module References
	PREFABRICATORRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping();
	UPackage* Z_Construct_UPackage__Script_PrefabricatorRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
class UScriptStruct* FPrefabricatorPropertyAssetMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PREFABRICATORRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping, Z_Construct_UPackage__Script_PrefabricatorRuntime(), TEXT("PrefabricatorPropertyAssetMapping"), sizeof(FPrefabricatorPropertyAssetMapping), Get_Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Hash());
	}
	return Singleton;
}
template<> PREFABRICATORRUNTIME_API UScriptStruct* StaticStruct<FPrefabricatorPropertyAssetMapping>()
{
	return FPrefabricatorPropertyAssetMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPrefabricatorPropertyAssetMapping(FPrefabricatorPropertyAssetMapping::StaticStruct, TEXT("/Script/PrefabricatorRuntime"), TEXT("PrefabricatorPropertyAssetMapping"), false, nullptr, nullptr);
static struct FScriptStruct_PrefabricatorRuntime_StaticRegisterNativesFPrefabricatorPropertyAssetMapping
{
	FScriptStruct_PrefabricatorRuntime_StaticRegisterNativesFPrefabricatorPropertyAssetMapping()
	{
		UScriptStruct::DeferCppStructOps<FPrefabricatorPropertyAssetMapping>(FName(TEXT("PrefabricatorPropertyAssetMapping")));
	}
} ScriptStruct_PrefabricatorRuntime_StaticRegisterNativesFPrefabricatorPropertyAssetMapping;
	struct Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetObjectPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetObjectPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseQuotes_MetaData[];
#endif
		static void NewProp_bUseQuotes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseQuotes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PrefabricatorPropertyAssetMapping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrefabricatorPropertyAssetMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewProp_AssetReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorPropertyAssetMapping" },
		{ "ModuleRelativePath", "Public/PrefabricatorPropertyAssetMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewProp_AssetReference = { "AssetReference", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrefabricatorPropertyAssetMapping, AssetReference), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewProp_AssetReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewProp_AssetReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewProp_AssetClassName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorPropertyAssetMapping" },
		{ "ModuleRelativePath", "Public/PrefabricatorPropertyAssetMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewProp_AssetClassName = { "AssetClassName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrefabricatorPropertyAssetMapping, AssetClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewProp_AssetClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewProp_AssetClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewProp_AssetObjectPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorPropertyAssetMapping" },
		{ "ModuleRelativePath", "Public/PrefabricatorPropertyAssetMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewProp_AssetObjectPath = { "AssetObjectPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrefabricatorPropertyAssetMapping, AssetObjectPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewProp_AssetObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewProp_AssetObjectPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewProp_bUseQuotes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorPropertyAssetMapping" },
		{ "ModuleRelativePath", "Public/PrefabricatorPropertyAssetMapping.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewProp_bUseQuotes_SetBit(void* Obj)
	{
		((FPrefabricatorPropertyAssetMapping*)Obj)->bUseQuotes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewProp_bUseQuotes = { "bUseQuotes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPrefabricatorPropertyAssetMapping), &Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewProp_bUseQuotes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewProp_bUseQuotes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewProp_bUseQuotes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewProp_AssetReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewProp_AssetClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewProp_AssetObjectPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::NewProp_bUseQuotes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PrefabricatorRuntime,
		nullptr,
		&NewStructOps,
		"PrefabricatorPropertyAssetMapping",
		sizeof(FPrefabricatorPropertyAssetMapping),
		alignof(FPrefabricatorPropertyAssetMapping),
		Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PrefabricatorRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PrefabricatorPropertyAssetMapping"), sizeof(FPrefabricatorPropertyAssetMapping), Get_Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping_Hash() { return 4077608124U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
