// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolsticeMinimap/Public/MapElement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapElement() {}
// Cross Module References
	SOLSTICEMINIMAP_API UScriptStruct* Z_Construct_UScriptStruct_FMapElement();
	UPackage* Z_Construct_UPackage__Script_SolsticeMinimap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SOLSTICEMINIMAP_API UScriptStruct* Z_Construct_UScriptStruct_FMinimapElementInfo();
	SOLSTICEMINIMAP_API UScriptStruct* Z_Construct_UScriptStruct_FMapElementInfo();
// End Cross Module References

static_assert(std::is_polymorphic<FMapElement>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMapElement cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FMapElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOLSTICEMINIMAP_API uint32 Get_Z_Construct_UScriptStruct_FMapElement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapElement, Z_Construct_UPackage__Script_SolsticeMinimap(), TEXT("MapElement"), sizeof(FMapElement), Get_Z_Construct_UScriptStruct_FMapElement_Hash());
	}
	return Singleton;
}
template<> SOLSTICEMINIMAP_API UScriptStruct* StaticStruct<FMapElement>()
{
	return FMapElement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMapElement(FMapElement::StaticStruct, TEXT("/Script/SolsticeMinimap"), TEXT("MapElement"), false, nullptr, nullptr);
static struct FScriptStruct_SolsticeMinimap_StaticRegisterNativesFMapElement
{
	FScriptStruct_SolsticeMinimap_StaticRegisterNativesFMapElement()
	{
		UScriptStruct::DeferCppStructOps<FMapElement>(FName(TEXT("MapElement")));
	}
} ScriptStruct_SolsticeMinimap_StaticRegisterNativesFMapElement;
	struct Z_Construct_UScriptStruct_FMapElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ElementClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowInBigMap_MetaData[];
#endif
		static void NewProp_bShowInBigMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowInBigMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowInMinimap_MetaData[];
#endif
		static void NewProp_bShowInMinimap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowInMinimap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapElementInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinimapElementInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapElementInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapElementInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowInDebugAllIcons_MetaData[];
#endif
		static void NewProp_bShowInDebugAllIcons_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowInDebugAllIcons;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MapElement.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapElement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_ElementClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapElement" },
		{ "ModuleRelativePath", "Public/MapElement.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_ElementClass = { "ElementClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapElement, ElementClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_ElementClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_ElementClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_bShowInBigMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapElement" },
		{ "ModuleRelativePath", "Public/MapElement.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_bShowInBigMap_SetBit(void* Obj)
	{
		((FMapElement*)Obj)->bShowInBigMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_bShowInBigMap = { "bShowInBigMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMapElement), &Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_bShowInBigMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_bShowInBigMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_bShowInBigMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_bShowInMinimap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapElement" },
		{ "ModuleRelativePath", "Public/MapElement.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_bShowInMinimap_SetBit(void* Obj)
	{
		((FMapElement*)Obj)->bShowInMinimap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_bShowInMinimap = { "bShowInMinimap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMapElement), &Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_bShowInMinimap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_bShowInMinimap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_bShowInMinimap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_MinimapElementInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapElement" },
		{ "ModuleRelativePath", "Public/MapElement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_MinimapElementInfo = { "MinimapElementInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapElement, MinimapElementInfo), Z_Construct_UScriptStruct_FMinimapElementInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_MinimapElementInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_MinimapElementInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_MapElementInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapElement" },
		{ "ModuleRelativePath", "Public/MapElement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_MapElementInfo = { "MapElementInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapElement, MapElementInfo), Z_Construct_UScriptStruct_FMapElementInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_MapElementInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_MapElementInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_bShowInDebugAllIcons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapElement" },
		{ "ModuleRelativePath", "Public/MapElement.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_bShowInDebugAllIcons_SetBit(void* Obj)
	{
		((FMapElement*)Obj)->bShowInDebugAllIcons = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_bShowInDebugAllIcons = { "bShowInDebugAllIcons", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMapElement), &Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_bShowInDebugAllIcons_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_bShowInDebugAllIcons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_bShowInDebugAllIcons_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_ElementClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_bShowInBigMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_bShowInMinimap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_MinimapElementInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_MapElementInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapElement_Statics::NewProp_bShowInDebugAllIcons,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SolsticeMinimap,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MapElement",
		sizeof(FMapElement),
		alignof(FMapElement),
		Z_Construct_UScriptStruct_FMapElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMapElement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SolsticeMinimap();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MapElement"), sizeof(FMapElement), Get_Z_Construct_UScriptStruct_FMapElement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMapElement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMapElement_Hash() { return 1546752200U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
