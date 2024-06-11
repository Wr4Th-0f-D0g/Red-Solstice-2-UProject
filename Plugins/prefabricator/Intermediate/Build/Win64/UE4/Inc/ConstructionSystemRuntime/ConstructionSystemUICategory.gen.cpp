// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConstructionSystemRuntime/Public/ConstructionSystemUICategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructionSystemUICategory() {}
// Cross Module References
	CONSTRUCTIONSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConstructionSystemUICategory();
	UPackage* Z_Construct_UPackage__Script_ConstructionSystemRuntime();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	CONSTRUCTIONSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry();
// End Cross Module References
class UScriptStruct* FConstructionSystemUICategory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CONSTRUCTIONSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FConstructionSystemUICategory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstructionSystemUICategory, Z_Construct_UPackage__Script_ConstructionSystemRuntime(), TEXT("ConstructionSystemUICategory"), sizeof(FConstructionSystemUICategory), Get_Z_Construct_UScriptStruct_FConstructionSystemUICategory_Hash());
	}
	return Singleton;
}
template<> CONSTRUCTIONSYSTEMRUNTIME_API UScriptStruct* StaticStruct<FConstructionSystemUICategory>()
{
	return FConstructionSystemUICategory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstructionSystemUICategory(FConstructionSystemUICategory::StaticStruct, TEXT("/Script/ConstructionSystemRuntime"), TEXT("ConstructionSystemUICategory"), false, nullptr, nullptr);
static struct FScriptStruct_ConstructionSystemRuntime_StaticRegisterNativesFConstructionSystemUICategory
{
	FScriptStruct_ConstructionSystemRuntime_StaticRegisterNativesFConstructionSystemUICategory()
	{
		UScriptStruct::DeferCppStructOps<FConstructionSystemUICategory>(FName(TEXT("ConstructionSystemUICategory")));
	}
} ScriptStruct_ConstructionSystemRuntime_StaticRegisterNativesFConstructionSystemUICategory;
	struct Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrefabEntries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrefabEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrefabEntries;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ConstructionSystemUICategory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstructionSystemUICategory>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemUICategory" },
		{ "ModuleRelativePath", "Public/ConstructionSystemUICategory.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstructionSystemUICategory, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::NewProp_Icon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemUICategory" },
		{ "ModuleRelativePath", "Public/ConstructionSystemUICategory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstructionSystemUICategory, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::NewProp_Icon_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::NewProp_PrefabEntries_Inner = { "PrefabEntries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConstructionSystemUIPrefabEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::NewProp_PrefabEntries_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemUICategory" },
		{ "ModuleRelativePath", "Public/ConstructionSystemUICategory.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::NewProp_PrefabEntries = { "PrefabEntries", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstructionSystemUICategory, PrefabEntries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::NewProp_PrefabEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::NewProp_PrefabEntries_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::NewProp_PrefabEntries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::NewProp_PrefabEntries,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConstructionSystemRuntime,
		nullptr,
		&NewStructOps,
		"ConstructionSystemUICategory",
		sizeof(FConstructionSystemUICategory),
		alignof(FConstructionSystemUICategory),
		Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstructionSystemUICategory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstructionSystemUICategory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ConstructionSystemRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstructionSystemUICategory"), sizeof(FConstructionSystemUICategory), Get_Z_Construct_UScriptStruct_FConstructionSystemUICategory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConstructionSystemUICategory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstructionSystemUICategory_Hash() { return 3870575445U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
