// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolsticeMinimap/Public/MapSystemActorBounds.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapSystemActorBounds() {}
// Cross Module References
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_AMapSystemActorBounds_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_AMapSystemActorBounds();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SolsticeMinimap();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneCaptureSource();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_AMapSystemManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMapSystemActorBounds::execCreateMapSnapshot)
	{
		P_GET_UBOOL(Z_Param_bNoDelay);
		P_GET_PROPERTY(FByteProperty,Z_Param_CaptureSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateMapSnapshot(Z_Param_bNoDelay,ESceneCaptureSource(Z_Param_CaptureSource));
		P_NATIVE_END;
	}
	void AMapSystemActorBounds::StaticRegisterNativesAMapSystemActorBounds()
	{
		UClass* Class = AMapSystemActorBounds::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMapSnapshot", &AMapSystemActorBounds::execCreateMapSnapshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMapSystemActorBounds_CreateMapSnapshot_Statics
	{
		struct MapSystemActorBounds_eventCreateMapSnapshot_Parms
		{
			bool bNoDelay;
			TEnumAsByte<ESceneCaptureSource> CaptureSource;
		};
		static void NewProp_bNoDelay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoDelay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CaptureSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMapSystemActorBounds_CreateMapSnapshot_Statics::NewProp_bNoDelay_SetBit(void* Obj)
	{
		((MapSystemActorBounds_eventCreateMapSnapshot_Parms*)Obj)->bNoDelay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapSystemActorBounds_CreateMapSnapshot_Statics::NewProp_bNoDelay = { "bNoDelay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemActorBounds_eventCreateMapSnapshot_Parms), &Z_Construct_UFunction_AMapSystemActorBounds_CreateMapSnapshot_Statics::NewProp_bNoDelay_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMapSystemActorBounds_CreateMapSnapshot_Statics::NewProp_CaptureSource = { "CaptureSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemActorBounds_eventCreateMapSnapshot_Parms, CaptureSource), Z_Construct_UEnum_Engine_ESceneCaptureSource, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapSystemActorBounds_CreateMapSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemActorBounds_CreateMapSnapshot_Statics::NewProp_bNoDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemActorBounds_CreateMapSnapshot_Statics::NewProp_CaptureSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemActorBounds_CreateMapSnapshot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemActorBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapSystemActorBounds_CreateMapSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapSystemActorBounds, nullptr, "CreateMapSnapshot", nullptr, nullptr, sizeof(MapSystemActorBounds_eventCreateMapSnapshot_Parms), Z_Construct_UFunction_AMapSystemActorBounds_CreateMapSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemActorBounds_CreateMapSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemActorBounds_CreateMapSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemActorBounds_CreateMapSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapSystemActorBounds_CreateMapSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapSystemActorBounds_CreateMapSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMapSystemActorBounds_NoRegister()
	{
		return AMapSystemActorBounds::StaticClass();
	}
	struct Z_Construct_UClass_AMapSystemActorBounds_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundingBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapSystemManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapSystemManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneCapComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneCapComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateSnapshotOnBeginPlay_MetaData[];
#endif
		static void NewProp_bCreateSnapshotOnBeginPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateSnapshotOnBeginPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapshotDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotRenderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnapshotRenderTarget;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HiddenActorClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenActorClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HiddenActorClasses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapCanvasSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinimapCanvasSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoundsSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainScene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelBoundsX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LevelBoundsX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelBoundsY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LevelBoundsY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelBoundsZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LevelBoundsZ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMapSystemActorBounds_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SolsticeMinimap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMapSystemActorBounds_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMapSystemActorBounds_CreateMapSnapshot, "CreateMapSnapshot" }, // 1858800070
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemActorBounds_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MapSystemActorBounds.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MapSystemActorBounds.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MapTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemActorBounds" },
		{ "ModuleRelativePath", "Public/MapSystemActorBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MapTexture = { "MapTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemActorBounds, MapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MapTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MapTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_BoundingBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemActorBounds" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystemActorBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemActorBounds, BoundingBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_BoundingBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_BoundingBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_Collection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemActorBounds" },
		{ "ModuleRelativePath", "Public/MapSystemActorBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemActorBounds, Collection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_Collection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MapSystemManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemActorBounds" },
		{ "ModuleRelativePath", "Public/MapSystemActorBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MapSystemManager = { "MapSystemManager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemActorBounds, MapSystemManager), Z_Construct_UClass_AMapSystemManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MapSystemManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MapSystemManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_SceneCapComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemActorBounds" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystemActorBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_SceneCapComponent = { "SceneCapComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemActorBounds, SceneCapComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_SceneCapComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_SceneCapComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_bCreateSnapshotOnBeginPlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemActorBounds" },
		{ "ModuleRelativePath", "Public/MapSystemActorBounds.h" },
	};
#endif
	void Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_bCreateSnapshotOnBeginPlay_SetBit(void* Obj)
	{
		((AMapSystemActorBounds*)Obj)->bCreateSnapshotOnBeginPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_bCreateSnapshotOnBeginPlay = { "bCreateSnapshotOnBeginPlay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMapSystemActorBounds), &Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_bCreateSnapshotOnBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_bCreateSnapshotOnBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_bCreateSnapshotOnBeginPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_SnapshotDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemActorBounds" },
		{ "ModuleRelativePath", "Public/MapSystemActorBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_SnapshotDelay = { "SnapshotDelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemActorBounds, SnapshotDelay), METADATA_PARAMS(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_SnapshotDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_SnapshotDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_SnapshotRenderTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemActorBounds" },
		{ "ModuleRelativePath", "Public/MapSystemActorBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_SnapshotRenderTarget = { "SnapshotRenderTarget", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemActorBounds, SnapshotRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_SnapshotRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_SnapshotRenderTarget_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_HiddenActorClasses_Inner = { "HiddenActorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_HiddenActorClasses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemActorBounds" },
		{ "ModuleRelativePath", "Public/MapSystemActorBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_HiddenActorClasses = { "HiddenActorClasses", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemActorBounds, HiddenActorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_HiddenActorClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_HiddenActorClasses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MinimapCanvasSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemActorBounds" },
		{ "ModuleRelativePath", "Public/MapSystemActorBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MinimapCanvasSize = { "MinimapCanvasSize", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemActorBounds, MinimapCanvasSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MinimapCanvasSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MinimapCanvasSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_Origin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemActorBounds" },
		{ "ModuleRelativePath", "Public/MapSystemActorBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemActorBounds, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MinBounds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemActorBounds" },
		{ "ModuleRelativePath", "Public/MapSystemActorBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MinBounds = { "MinBounds", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemActorBounds, MinBounds), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MinBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MinBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MaxBounds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemActorBounds" },
		{ "ModuleRelativePath", "Public/MapSystemActorBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MaxBounds = { "MaxBounds", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemActorBounds, MaxBounds), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MaxBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MaxBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_BoundsSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemActorBounds" },
		{ "ModuleRelativePath", "Public/MapSystemActorBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_BoundsSize = { "BoundsSize", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemActorBounds, BoundsSize), METADATA_PARAMS(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_BoundsSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_BoundsSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MainScene_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemActorBounds" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystemActorBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MainScene = { "MainScene", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemActorBounds, MainScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MainScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MainScene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_LevelBoundsX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemActorBounds" },
		{ "ModuleRelativePath", "Public/MapSystemActorBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_LevelBoundsX = { "LevelBoundsX", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemActorBounds, LevelBoundsX), METADATA_PARAMS(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_LevelBoundsX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_LevelBoundsX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_LevelBoundsY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemActorBounds" },
		{ "ModuleRelativePath", "Public/MapSystemActorBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_LevelBoundsY = { "LevelBoundsY", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemActorBounds, LevelBoundsY), METADATA_PARAMS(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_LevelBoundsY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_LevelBoundsY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_LevelBoundsZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemActorBounds" },
		{ "ModuleRelativePath", "Public/MapSystemActorBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_LevelBoundsZ = { "LevelBoundsZ", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemActorBounds, LevelBoundsZ), METADATA_PARAMS(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_LevelBoundsZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_LevelBoundsZ_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapSystemActorBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MapTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_BoundingBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_Collection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MapSystemManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_SceneCapComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_bCreateSnapshotOnBeginPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_SnapshotDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_SnapshotRenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_HiddenActorClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_HiddenActorClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MinimapCanvasSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MinBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MaxBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_BoundsSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_MainScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_LevelBoundsX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_LevelBoundsY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemActorBounds_Statics::NewProp_LevelBoundsZ,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMapSystemActorBounds_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapSystemActorBounds>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMapSystemActorBounds_Statics::ClassParams = {
		&AMapSystemActorBounds::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMapSystemActorBounds_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemActorBounds_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMapSystemActorBounds_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemActorBounds_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMapSystemActorBounds()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMapSystemActorBounds_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMapSystemActorBounds, 1549384501);
	template<> SOLSTICEMINIMAP_API UClass* StaticClass<AMapSystemActorBounds>()
	{
		return AMapSystemActorBounds::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMapSystemActorBounds(Z_Construct_UClass_AMapSystemActorBounds, &AMapSystemActorBounds::StaticClass, TEXT("/Script/SolsticeMinimap"), TEXT("AMapSystemActorBounds"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMapSystemActorBounds);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
