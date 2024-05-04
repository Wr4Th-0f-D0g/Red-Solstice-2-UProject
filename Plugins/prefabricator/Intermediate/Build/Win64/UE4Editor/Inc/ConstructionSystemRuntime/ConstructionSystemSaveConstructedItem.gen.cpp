// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConstructionSystemRuntime/Public/ConstructionSystemSaveConstructedItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructionSystemSaveConstructedItem() {}
// Cross Module References
	CONSTRUCTIONSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem();
	UPackage* Z_Construct_UPackage__Script_ConstructionSystemRuntime();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAssetInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FConstructionSystemSaveConstructedItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CONSTRUCTIONSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem, Z_Construct_UPackage__Script_ConstructionSystemRuntime(), TEXT("ConstructionSystemSaveConstructedItem"), sizeof(FConstructionSystemSaveConstructedItem), Get_Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Hash());
	}
	return Singleton;
}
template<> CONSTRUCTIONSYSTEMRUNTIME_API UScriptStruct* StaticStruct<FConstructionSystemSaveConstructedItem>()
{
	return FConstructionSystemSaveConstructedItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstructionSystemSaveConstructedItem(FConstructionSystemSaveConstructedItem::StaticStruct, TEXT("/Script/ConstructionSystemRuntime"), TEXT("ConstructionSystemSaveConstructedItem"), false, nullptr, nullptr);
static struct FScriptStruct_ConstructionSystemRuntime_StaticRegisterNativesFConstructionSystemSaveConstructedItem
{
	FScriptStruct_ConstructionSystemRuntime_StaticRegisterNativesFConstructionSystemSaveConstructedItem()
	{
		UScriptStruct::DeferCppStructOps<FConstructionSystemSaveConstructedItem>(FName(TEXT("ConstructionSystemSaveConstructedItem")));
	}
} ScriptStruct_ConstructionSystemRuntime_StaticRegisterNativesFConstructionSystemSaveConstructedItem;
	struct Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrefabAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrefabAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ConstructionSystemSaveConstructedItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstructionSystemSaveConstructedItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::NewProp_PrefabAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemSaveConstructedItem" },
		{ "ModuleRelativePath", "Public/ConstructionSystemSaveConstructedItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::NewProp_PrefabAsset = { "PrefabAsset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstructionSystemSaveConstructedItem, PrefabAsset), Z_Construct_UClass_UPrefabricatorAssetInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::NewProp_PrefabAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::NewProp_PrefabAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::NewProp_Seed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemSaveConstructedItem" },
		{ "ModuleRelativePath", "Public/ConstructionSystemSaveConstructedItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstructionSystemSaveConstructedItem, Seed), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::NewProp_Transform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemSaveConstructedItem" },
		{ "ModuleRelativePath", "Public/ConstructionSystemSaveConstructedItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstructionSystemSaveConstructedItem, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::NewProp_PrefabAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::NewProp_Transform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConstructionSystemRuntime,
		nullptr,
		&NewStructOps,
		"ConstructionSystemSaveConstructedItem",
		sizeof(FConstructionSystemSaveConstructedItem),
		alignof(FConstructionSystemSaveConstructedItem),
		Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ConstructionSystemRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstructionSystemSaveConstructedItem"), sizeof(FConstructionSystemSaveConstructedItem), Get_Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstructionSystemSaveConstructedItem_Hash() { return 1495676432U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
