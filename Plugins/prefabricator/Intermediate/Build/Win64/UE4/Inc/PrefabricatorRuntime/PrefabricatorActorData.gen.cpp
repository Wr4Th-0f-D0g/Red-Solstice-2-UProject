// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrefabricatorRuntime/Public/PrefabricatorActorData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrefabricatorActorData() {}
// Cross Module References
	PREFABRICATORRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPrefabricatorActorData();
	UPackage* Z_Construct_UPackage__Script_PrefabricatorRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	PREFABRICATORRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPrefabProperty();
	PREFABRICATORRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPrefabricatorComponentData();
// End Cross Module References
class UScriptStruct* FPrefabricatorActorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PREFABRICATORRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPrefabricatorActorData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrefabricatorActorData, Z_Construct_UPackage__Script_PrefabricatorRuntime(), TEXT("PrefabricatorActorData"), sizeof(FPrefabricatorActorData), Get_Z_Construct_UScriptStruct_FPrefabricatorActorData_Hash());
	}
	return Singleton;
}
template<> PREFABRICATORRUNTIME_API UScriptStruct* StaticStruct<FPrefabricatorActorData>()
{
	return FPrefabricatorActorData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPrefabricatorActorData(FPrefabricatorActorData::StaticStruct, TEXT("/Script/PrefabricatorRuntime"), TEXT("PrefabricatorActorData"), false, nullptr, nullptr);
static struct FScriptStruct_PrefabricatorRuntime_StaticRegisterNativesFPrefabricatorActorData
{
	FScriptStruct_PrefabricatorRuntime_StaticRegisterNativesFPrefabricatorActorData()
	{
		UScriptStruct::DeferCppStructOps<FPrefabricatorActorData>(FName(TEXT("PrefabricatorActorData")));
	}
} ScriptStruct_PrefabricatorRuntime_StaticRegisterNativesFPrefabricatorActorData;
	struct Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrefabItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrefabItemID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClassPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActorTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassPathRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClassPathRef;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrefabProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrefabProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrefabProperties;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Components_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Components;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PrefabricatorActorData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrefabricatorActorData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_PrefabItemID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorActorData" },
		{ "ModuleRelativePath", "Public/PrefabricatorActorData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_PrefabItemID = { "PrefabItemID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrefabricatorActorData, PrefabItemID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_PrefabItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_PrefabItemID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorActorData" },
		{ "ModuleRelativePath", "Public/PrefabricatorActorData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrefabricatorActorData, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_RelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_ClassPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorActorData" },
		{ "ModuleRelativePath", "Public/PrefabricatorActorData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_ClassPath = { "ClassPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrefabricatorActorData, ClassPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_ClassPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_ClassPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorActorData" },
		{ "ModuleRelativePath", "Public/PrefabricatorActorData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrefabricatorActorData, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_GameplayTags_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_ActorTags_Inner = { "ActorTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_ActorTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorActorData" },
		{ "ModuleRelativePath", "Public/PrefabricatorActorData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_ActorTags = { "ActorTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrefabricatorActorData, ActorTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_ActorTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_ActorTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_ClassPathRef_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorActorData" },
		{ "ModuleRelativePath", "Public/PrefabricatorActorData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_ClassPathRef = { "ClassPathRef", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrefabricatorActorData, ClassPathRef), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_ClassPathRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_ClassPathRef_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_PrefabProperties_Inner = { "PrefabProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPrefabProperty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_PrefabProperties_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorActorData" },
		{ "ModuleRelativePath", "Public/PrefabricatorActorData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_PrefabProperties = { "PrefabProperties", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrefabricatorActorData, PrefabProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_PrefabProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_PrefabProperties_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPrefabricatorComponentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_Components_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorActorData" },
		{ "ModuleRelativePath", "Public/PrefabricatorActorData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrefabricatorActorData, Components), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_Components_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_Components_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_PrefabItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_RelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_ClassPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_GameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_ActorTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_ActorTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_ClassPathRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_PrefabProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_PrefabProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_Components_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::NewProp_Components,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PrefabricatorRuntime,
		nullptr,
		&NewStructOps,
		"PrefabricatorActorData",
		sizeof(FPrefabricatorActorData),
		alignof(FPrefabricatorActorData),
		Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPrefabricatorActorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPrefabricatorActorData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PrefabricatorRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PrefabricatorActorData"), sizeof(FPrefabricatorActorData), Get_Z_Construct_UScriptStruct_FPrefabricatorActorData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPrefabricatorActorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPrefabricatorActorData_Hash() { return 1477246199U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
