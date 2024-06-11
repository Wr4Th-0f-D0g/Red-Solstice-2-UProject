// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolsticeMinimap/Public/RenderTargetMinimap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderTargetMinimap() {}
// Cross Module References
	SOLSTICEMINIMAP_API UScriptStruct* Z_Construct_UScriptStruct_FRenderTargetMinimap();
	UPackage* Z_Construct_UPackage__Script_SolsticeMinimap();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FRenderTargetMinimap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOLSTICEMINIMAP_API uint32 Get_Z_Construct_UScriptStruct_FRenderTargetMinimap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderTargetMinimap, Z_Construct_UPackage__Script_SolsticeMinimap(), TEXT("RenderTargetMinimap"), sizeof(FRenderTargetMinimap), Get_Z_Construct_UScriptStruct_FRenderTargetMinimap_Hash());
	}
	return Singleton;
}
template<> SOLSTICEMINIMAP_API UScriptStruct* StaticStruct<FRenderTargetMinimap>()
{
	return FRenderTargetMinimap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRenderTargetMinimap(FRenderTargetMinimap::StaticStruct, TEXT("/Script/SolsticeMinimap"), TEXT("RenderTargetMinimap"), false, nullptr, nullptr);
static struct FScriptStruct_SolsticeMinimap_StaticRegisterNativesFRenderTargetMinimap
{
	FScriptStruct_SolsticeMinimap_StaticRegisterNativesFRenderTargetMinimap()
	{
		UScriptStruct::DeferCppStructOps<FRenderTargetMinimap>(FName(TEXT("RenderTargetMinimap")));
	}
} ScriptStruct_SolsticeMinimap_StaticRegisterNativesFRenderTargetMinimap;
	struct Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisibilityRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RenderTargetMinimap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderTargetMinimap>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_Texture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RenderTargetMinimap" },
		{ "ModuleRelativePath", "Public/RenderTargetMinimap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderTargetMinimap, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_Color_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RenderTargetMinimap" },
		{ "ModuleRelativePath", "Public/RenderTargetMinimap.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderTargetMinimap, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RenderTargetMinimap" },
		{ "ModuleRelativePath", "Public/RenderTargetMinimap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderTargetMinimap, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_VisibilityRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RenderTargetMinimap" },
		{ "ModuleRelativePath", "Public/RenderTargetMinimap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_VisibilityRadius = { "VisibilityRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderTargetMinimap, VisibilityRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_VisibilityRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_VisibilityRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_Actor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RenderTargetMinimap" },
		{ "ModuleRelativePath", "Public/RenderTargetMinimap.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderTargetMinimap, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_VisibilityRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::NewProp_Actor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SolsticeMinimap,
		nullptr,
		&NewStructOps,
		"RenderTargetMinimap",
		sizeof(FRenderTargetMinimap),
		alignof(FRenderTargetMinimap),
		Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRenderTargetMinimap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRenderTargetMinimap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SolsticeMinimap();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RenderTargetMinimap"), sizeof(FRenderTargetMinimap), Get_Z_Construct_UScriptStruct_FRenderTargetMinimap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRenderTargetMinimap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRenderTargetMinimap_Hash() { return 4094878724U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
