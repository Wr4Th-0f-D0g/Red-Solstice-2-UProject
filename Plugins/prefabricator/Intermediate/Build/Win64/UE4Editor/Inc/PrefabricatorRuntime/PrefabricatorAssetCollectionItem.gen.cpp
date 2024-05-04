// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrefabricatorRuntime/Public/PrefabricatorAssetCollectionItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrefabricatorAssetCollectionItem() {}
// Cross Module References
	PREFABRICATORRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem();
	UPackage* Z_Construct_UPackage__Script_PrefabricatorRuntime();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FPrefabricatorAssetCollectionItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PREFABRICATORRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem, Z_Construct_UPackage__Script_PrefabricatorRuntime(), TEXT("PrefabricatorAssetCollectionItem"), sizeof(FPrefabricatorAssetCollectionItem), Get_Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Hash());
	}
	return Singleton;
}
template<> PREFABRICATORRUNTIME_API UScriptStruct* StaticStruct<FPrefabricatorAssetCollectionItem>()
{
	return FPrefabricatorAssetCollectionItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPrefabricatorAssetCollectionItem(FPrefabricatorAssetCollectionItem::StaticStruct, TEXT("/Script/PrefabricatorRuntime"), TEXT("PrefabricatorAssetCollectionItem"), false, nullptr, nullptr);
static struct FScriptStruct_PrefabricatorRuntime_StaticRegisterNativesFPrefabricatorAssetCollectionItem
{
	FScriptStruct_PrefabricatorRuntime_StaticRegisterNativesFPrefabricatorAssetCollectionItem()
	{
		UScriptStruct::DeferCppStructOps<FPrefabricatorAssetCollectionItem>(FName(TEXT("PrefabricatorAssetCollectionItem")));
	}
} ScriptStruct_PrefabricatorRuntime_StaticRegisterNativesFPrefabricatorAssetCollectionItem;
	struct Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrefabAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PrefabAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEmptyLot_MetaData[];
#endif
		static void NewProp_bEmptyLot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEmptyLot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabledPrefab_MetaData[];
#endif
		static void NewProp_bDisabledPrefab_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabledPrefab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUnique_MetaData[];
#endif
		static void NewProp_bUnique_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUnique;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMustExist_MetaData[];
#endif
		static void NewProp_bMustExist_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMustExist;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PrefabricatorAssetCollectionItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrefabricatorAssetCollectionItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_PrefabAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorAssetCollectionItem" },
		{ "ModuleRelativePath", "Public/PrefabricatorAssetCollectionItem.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_PrefabAsset = { "PrefabAsset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrefabricatorAssetCollectionItem, PrefabAsset), Z_Construct_UClass_UPrefabricatorAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_PrefabAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_PrefabAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_Weight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorAssetCollectionItem" },
		{ "ModuleRelativePath", "Public/PrefabricatorAssetCollectionItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrefabricatorAssetCollectionItem, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bEmptyLot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorAssetCollectionItem" },
		{ "ModuleRelativePath", "Public/PrefabricatorAssetCollectionItem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bEmptyLot_SetBit(void* Obj)
	{
		((FPrefabricatorAssetCollectionItem*)Obj)->bEmptyLot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bEmptyLot = { "bEmptyLot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPrefabricatorAssetCollectionItem), &Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bEmptyLot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bEmptyLot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bEmptyLot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bDisabledPrefab_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorAssetCollectionItem" },
		{ "ModuleRelativePath", "Public/PrefabricatorAssetCollectionItem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bDisabledPrefab_SetBit(void* Obj)
	{
		((FPrefabricatorAssetCollectionItem*)Obj)->bDisabledPrefab = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bDisabledPrefab = { "bDisabledPrefab", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPrefabricatorAssetCollectionItem), &Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bDisabledPrefab_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bDisabledPrefab_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bDisabledPrefab_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bUnique_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorAssetCollectionItem" },
		{ "ModuleRelativePath", "Public/PrefabricatorAssetCollectionItem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bUnique_SetBit(void* Obj)
	{
		((FPrefabricatorAssetCollectionItem*)Obj)->bUnique = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bUnique = { "bUnique", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPrefabricatorAssetCollectionItem), &Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bUnique_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bUnique_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bUnique_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bMustExist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorAssetCollectionItem" },
		{ "ModuleRelativePath", "Public/PrefabricatorAssetCollectionItem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bMustExist_SetBit(void* Obj)
	{
		((FPrefabricatorAssetCollectionItem*)Obj)->bMustExist = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bMustExist = { "bMustExist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPrefabricatorAssetCollectionItem), &Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bMustExist_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bMustExist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bMustExist_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_PrefabAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bEmptyLot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bDisabledPrefab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bUnique,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::NewProp_bMustExist,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PrefabricatorRuntime,
		nullptr,
		&NewStructOps,
		"PrefabricatorAssetCollectionItem",
		sizeof(FPrefabricatorAssetCollectionItem),
		alignof(FPrefabricatorAssetCollectionItem),
		Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PrefabricatorRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PrefabricatorAssetCollectionItem"), sizeof(FPrefabricatorAssetCollectionItem), Get_Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem_Hash() { return 2991412814U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
