// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConstructionSystemRuntime/Public/ConstructionSystemUIPrefabEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructionSystemUIPrefabEntry() {}
// Cross Module References
	CONSTRUCTIONSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry();
	UPackage* Z_Construct_UPackage__Script_ConstructionSystemRuntime();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAssetInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FConstructionSystemUIPrefabEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CONSTRUCTIONSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry, Z_Construct_UPackage__Script_ConstructionSystemRuntime(), TEXT("ConstructionSystemUIPrefabEntry"), sizeof(FConstructionSystemUIPrefabEntry), Get_Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Hash());
	}
	return Singleton;
}
template<> CONSTRUCTIONSYSTEMRUNTIME_API UScriptStruct* StaticStruct<FConstructionSystemUIPrefabEntry>()
{
	return FConstructionSystemUIPrefabEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstructionSystemUIPrefabEntry(FConstructionSystemUIPrefabEntry::StaticStruct, TEXT("/Script/ConstructionSystemRuntime"), TEXT("ConstructionSystemUIPrefabEntry"), false, nullptr, nullptr);
static struct FScriptStruct_ConstructionSystemRuntime_StaticRegisterNativesFConstructionSystemUIPrefabEntry
{
	FScriptStruct_ConstructionSystemRuntime_StaticRegisterNativesFConstructionSystemUIPrefabEntry()
	{
		UScriptStruct::DeferCppStructOps<FConstructionSystemUIPrefabEntry>(FName(TEXT("ConstructionSystemUIPrefabEntry")));
	}
} ScriptStruct_ConstructionSystemRuntime_StaticRegisterNativesFConstructionSystemUIPrefabEntry;
	struct Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Tooltip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefab_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Prefab;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ConstructionSystemUIPrefabEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstructionSystemUIPrefabEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemUIPrefabEntry" },
		{ "ModuleRelativePath", "Public/ConstructionSystemUIPrefabEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstructionSystemUIPrefabEntry, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::NewProp_Tooltip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemUIPrefabEntry" },
		{ "ModuleRelativePath", "Public/ConstructionSystemUIPrefabEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstructionSystemUIPrefabEntry, Tooltip), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::NewProp_Tooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::NewProp_Tooltip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::NewProp_Icon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemUIPrefabEntry" },
		{ "ModuleRelativePath", "Public/ConstructionSystemUIPrefabEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstructionSystemUIPrefabEntry, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::NewProp_Prefab_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemUIPrefabEntry" },
		{ "ModuleRelativePath", "Public/ConstructionSystemUIPrefabEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::NewProp_Prefab = { "Prefab", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstructionSystemUIPrefabEntry, Prefab), Z_Construct_UClass_UPrefabricatorAssetInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::NewProp_Prefab_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::NewProp_Prefab_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::NewProp_Tooltip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::NewProp_Prefab,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConstructionSystemRuntime,
		nullptr,
		&NewStructOps,
		"ConstructionSystemUIPrefabEntry",
		sizeof(FConstructionSystemUIPrefabEntry),
		alignof(FConstructionSystemUIPrefabEntry),
		Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ConstructionSystemRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstructionSystemUIPrefabEntry"), sizeof(FConstructionSystemUIPrefabEntry), Get_Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry_Hash() { return 3127578309U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
