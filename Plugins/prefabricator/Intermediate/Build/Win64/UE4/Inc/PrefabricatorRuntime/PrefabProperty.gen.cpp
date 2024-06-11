// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrefabricatorRuntime/Public/PrefabProperty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrefabProperty() {}
// Cross Module References
	PREFABRICATORRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPrefabProperty();
	UPackage* Z_Construct_UPackage__Script_PrefabricatorRuntime();
	PREFABRICATORRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FPrefabProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PREFABRICATORRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPrefabProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrefabProperty, Z_Construct_UPackage__Script_PrefabricatorRuntime(), TEXT("PrefabProperty"), sizeof(FPrefabProperty), Get_Z_Construct_UScriptStruct_FPrefabProperty_Hash());
	}
	return Singleton;
}
template<> PREFABRICATORRUNTIME_API UScriptStruct* StaticStruct<FPrefabProperty>()
{
	return FPrefabProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPrefabProperty(FPrefabProperty::StaticStruct, TEXT("/Script/PrefabricatorRuntime"), TEXT("PrefabProperty"), false, nullptr, nullptr);
static struct FScriptStruct_PrefabricatorRuntime_StaticRegisterNativesFPrefabProperty
{
	FScriptStruct_PrefabricatorRuntime_StaticRegisterNativesFPrefabProperty()
	{
		UScriptStruct::DeferCppStructOps<FPrefabProperty>(FName(TEXT("PrefabProperty")));
	}
} ScriptStruct_PrefabricatorRuntime_StaticRegisterNativesFPrefabProperty;
	struct Z_Construct_UScriptStruct_FPrefabProperty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportedValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExportedValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetSoftReferenceMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetSoftReferenceMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetSoftReferenceMappings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCrossReferencedActor_MetaData[];
#endif
		static void NewProp_bIsCrossReferencedActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCrossReferencedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossReferencePrefabActorId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrossReferencePrefabActorId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PrefabProperty.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrefabProperty>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_PropertyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabProperty" },
		{ "ModuleRelativePath", "Public/PrefabProperty.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrefabProperty, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_ExportedValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabProperty" },
		{ "ModuleRelativePath", "Public/PrefabProperty.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_ExportedValue = { "ExportedValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrefabProperty, ExportedValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_ExportedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_ExportedValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_AssetSoftReferenceMappings_Inner = { "AssetSoftReferenceMappings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPrefabricatorPropertyAssetMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_AssetSoftReferenceMappings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabProperty" },
		{ "ModuleRelativePath", "Public/PrefabProperty.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_AssetSoftReferenceMappings = { "AssetSoftReferenceMappings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrefabProperty, AssetSoftReferenceMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_AssetSoftReferenceMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_AssetSoftReferenceMappings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_bIsCrossReferencedActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabProperty" },
		{ "ModuleRelativePath", "Public/PrefabProperty.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_bIsCrossReferencedActor_SetBit(void* Obj)
	{
		((FPrefabProperty*)Obj)->bIsCrossReferencedActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_bIsCrossReferencedActor = { "bIsCrossReferencedActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPrefabProperty), &Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_bIsCrossReferencedActor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_bIsCrossReferencedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_bIsCrossReferencedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_CrossReferencePrefabActorId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabProperty" },
		{ "ModuleRelativePath", "Public/PrefabProperty.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_CrossReferencePrefabActorId = { "CrossReferencePrefabActorId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrefabProperty, CrossReferencePrefabActorId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_CrossReferencePrefabActorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_CrossReferencePrefabActorId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPrefabProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_ExportedValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_AssetSoftReferenceMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_AssetSoftReferenceMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_bIsCrossReferencedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabProperty_Statics::NewProp_CrossReferencePrefabActorId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrefabProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PrefabricatorRuntime,
		nullptr,
		&NewStructOps,
		"PrefabProperty",
		sizeof(FPrefabProperty),
		alignof(FPrefabProperty),
		Z_Construct_UScriptStruct_FPrefabProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPrefabProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPrefabProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PrefabricatorRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PrefabProperty"), sizeof(FPrefabProperty), Get_Z_Construct_UScriptStruct_FPrefabProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPrefabProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPrefabProperty_Hash() { return 2105580741U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
