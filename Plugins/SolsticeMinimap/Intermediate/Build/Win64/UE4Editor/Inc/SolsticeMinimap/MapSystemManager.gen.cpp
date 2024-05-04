// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolsticeMinimap/Public/MapSystemManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapSystemManager() {}
// Cross Module References
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_AMapSystemManager_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_AMapSystemManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SolsticeMinimap();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SOLSTICEMINIMAP_API UScriptStruct* Z_Construct_UScriptStruct_FMapElement();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneCaptureSource();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_MapElementBase_NoRegister();
	SOLSTICEMINIMAP_API UFunction* Z_Construct_UDelegateFunction_SolsticeMinimap_MapGenerationComplete__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	SOLSTICEMINIMAP_API UScriptStruct* Z_Construct_UScriptStruct_FMinimapElementInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_MinimapWidgetBase_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_MinimapElementBase_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_MapWidgetBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_AMapSystemActorBounds_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_AObserverPawnBlockingVolume_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMapSystemManager::execAddMapActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FMapElement,Z_Param_Out_MapElement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMapActor(Z_Param_Actor,Z_Param_Out_MapElement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapSystemManager::execAddMapElement)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FMapElement,Z_Param_Out_MapElement);
		P_GET_UBOOL(Z_Param_bDynamic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMapElement(Z_Param_Actor,Z_Param_Out_MapElement,Z_Param_bDynamic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapSystemManager::execClearMinimapLocationTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMinimapLocationTag(Z_Param_Out_InTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapSystemManager::execCreateSnapshotByTags)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_SourceRT);
		P_GET_TARRAY(FName,Z_Param_ActorTags);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_CustomRotation);
		P_GET_PROPERTY(FByteProperty,Z_Param_CaptureSource);
		P_GET_UBOOL(Z_Param_bSetRenderDepth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateSnapshotByTags(Z_Param_SourceRT,Z_Param_ActorTags,Z_Param_Out_CustomRotation,ESceneCaptureSource(Z_Param_CaptureSource),Z_Param_bSetRenderDepth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapSystemManager::execHandleRenderSnapshotDone)
	{
		P_GET_OBJECT(UTexture,Z_Param_NewTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleRenderSnapshotDone(Z_Param_NewTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapSystemManager::execInitializeMapSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeMapSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapSystemManager::execIsMapOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMapOpen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapSystemManager::execIsMinimapOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMinimapOpen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapSystemManager::execMapPanForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ForwardPanAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MapPanForward(Z_Param_ForwardPanAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapSystemManager::execMapPanRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RightPanAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MapPanRight(Z_Param_RightPanAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapSystemManager::execMapTextureGenerated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MapTextureGenerated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapSystemManager::execMapZoomInOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ZoomValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MapZoomInOut(Z_Param_ZoomValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapSystemManager::execOnMapElementHovered)
	{
		P_GET_OBJECT(UMapSystem_MapElementBase,Z_Param_HoveredElement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMapElementHovered(Z_Param_HoveredElement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapSystemManager::execOnMapElementUnHovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMapElementUnHovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapSystemManager::execRebuildDynamicActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RebuildDynamicActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapSystemManager::execRemoveMapActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMapActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapSystemManager::execSetMinimapLocationTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinimapLocationTag(Z_Param_Out_InTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapSystemManager::execSetMinimapVisibility)
	{
		P_GET_UBOOL(Z_Param_bNewVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinimapVisibility(Z_Param_bNewVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapSystemManager::execShowBigMap)
	{
		P_GET_UBOOL(Z_Param_bShow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowBigMap(Z_Param_bShow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapSystemManager::execShowMinimapMap)
	{
		P_GET_UBOOL(Z_Param_bShow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowMinimapMap(Z_Param_bShow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapSystemManager::execUpdateMapTextureFromSnapshot)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_GET_PROPERTY(FByteProperty,Z_Param_CaptureSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMapTextureFromSnapshot(Z_Param_Delay,ESceneCaptureSource(Z_Param_CaptureSource));
		P_NATIVE_END;
	}
	void AMapSystemManager::StaticRegisterNativesAMapSystemManager()
	{
		UClass* Class = AMapSystemManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMapActor", &AMapSystemManager::execAddMapActor },
			{ "AddMapElement", &AMapSystemManager::execAddMapElement },
			{ "ClearMinimapLocationTag", &AMapSystemManager::execClearMinimapLocationTag },
			{ "CreateSnapshotByTags", &AMapSystemManager::execCreateSnapshotByTags },
			{ "HandleRenderSnapshotDone", &AMapSystemManager::execHandleRenderSnapshotDone },
			{ "InitializeMapSystem", &AMapSystemManager::execInitializeMapSystem },
			{ "IsMapOpen", &AMapSystemManager::execIsMapOpen },
			{ "IsMinimapOpen", &AMapSystemManager::execIsMinimapOpen },
			{ "MapPanForward", &AMapSystemManager::execMapPanForward },
			{ "MapPanRight", &AMapSystemManager::execMapPanRight },
			{ "MapTextureGenerated", &AMapSystemManager::execMapTextureGenerated },
			{ "MapZoomInOut", &AMapSystemManager::execMapZoomInOut },
			{ "OnMapElementHovered", &AMapSystemManager::execOnMapElementHovered },
			{ "OnMapElementUnHovered", &AMapSystemManager::execOnMapElementUnHovered },
			{ "RebuildDynamicActors", &AMapSystemManager::execRebuildDynamicActors },
			{ "RemoveMapActor", &AMapSystemManager::execRemoveMapActor },
			{ "SetMinimapLocationTag", &AMapSystemManager::execSetMinimapLocationTag },
			{ "SetMinimapVisibility", &AMapSystemManager::execSetMinimapVisibility },
			{ "ShowBigMap", &AMapSystemManager::execShowBigMap },
			{ "ShowMinimapMap", &AMapSystemManager::execShowMinimapMap },
			{ "UpdateMapTextureFromSnapshot", &AMapSystemManager::execUpdateMapTextureFromSnapshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMapSystemManager_AddMapActor_Statics
	{
		struct MapSystemManager_eventAddMapActor_Parms
		{
			AActor* Actor;
			FMapElement MapElement;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapElement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapElement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapSystemManager_AddMapActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemManager_eventAddMapActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_AddMapActor_Statics::NewProp_MapElement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapSystemManager_AddMapActor_Statics::NewProp_MapElement = { "MapElement", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemManager_eventAddMapActor_Parms, MapElement), Z_Construct_UScriptStruct_FMapElement, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_AddMapActor_Statics::NewProp_MapElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_AddMapActor_Statics::NewProp_MapElement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapSystemManager_AddMapActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_AddMapActor_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_AddMapActor_Statics::NewProp_MapElement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_AddMapActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapSystemManager_AddMapActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapSystemManager, nullptr, "AddMapActor", nullptr, nullptr, sizeof(MapSystemManager_eventAddMapActor_Parms), Z_Construct_UFunction_AMapSystemManager_AddMapActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_AddMapActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_AddMapActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_AddMapActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapSystemManager_AddMapActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapSystemManager_AddMapActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapSystemManager_AddMapElement_Statics
	{
		struct MapSystemManager_eventAddMapElement_Parms
		{
			AActor* Actor;
			FMapElement MapElement;
			bool bDynamic;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapElement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapElement;
		static void NewProp_bDynamic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDynamic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapSystemManager_AddMapElement_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemManager_eventAddMapElement_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_AddMapElement_Statics::NewProp_MapElement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapSystemManager_AddMapElement_Statics::NewProp_MapElement = { "MapElement", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemManager_eventAddMapElement_Parms, MapElement), Z_Construct_UScriptStruct_FMapElement, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_AddMapElement_Statics::NewProp_MapElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_AddMapElement_Statics::NewProp_MapElement_MetaData)) };
	void Z_Construct_UFunction_AMapSystemManager_AddMapElement_Statics::NewProp_bDynamic_SetBit(void* Obj)
	{
		((MapSystemManager_eventAddMapElement_Parms*)Obj)->bDynamic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapSystemManager_AddMapElement_Statics::NewProp_bDynamic = { "bDynamic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemManager_eventAddMapElement_Parms), &Z_Construct_UFunction_AMapSystemManager_AddMapElement_Statics::NewProp_bDynamic_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapSystemManager_AddMapElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_AddMapElement_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_AddMapElement_Statics::NewProp_MapElement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_AddMapElement_Statics::NewProp_bDynamic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_AddMapElement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapSystemManager_AddMapElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapSystemManager, nullptr, "AddMapElement", nullptr, nullptr, sizeof(MapSystemManager_eventAddMapElement_Parms), Z_Construct_UFunction_AMapSystemManager_AddMapElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_AddMapElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_AddMapElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_AddMapElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapSystemManager_AddMapElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapSystemManager_AddMapElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapSystemManager_ClearMinimapLocationTag_Statics
	{
		struct MapSystemManager_eventClearMinimapLocationTag_Parms
		{
			FGameplayTag InTag;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_ClearMinimapLocationTag_Statics::NewProp_InTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapSystemManager_ClearMinimapLocationTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemManager_eventClearMinimapLocationTag_Parms, InTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_ClearMinimapLocationTag_Statics::NewProp_InTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_ClearMinimapLocationTag_Statics::NewProp_InTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapSystemManager_ClearMinimapLocationTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_ClearMinimapLocationTag_Statics::NewProp_InTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_ClearMinimapLocationTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapSystemManager_ClearMinimapLocationTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapSystemManager, nullptr, "ClearMinimapLocationTag", nullptr, nullptr, sizeof(MapSystemManager_eventClearMinimapLocationTag_Parms), Z_Construct_UFunction_AMapSystemManager_ClearMinimapLocationTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_ClearMinimapLocationTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_ClearMinimapLocationTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_ClearMinimapLocationTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapSystemManager_ClearMinimapLocationTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapSystemManager_ClearMinimapLocationTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics
	{
		struct MapSystemManager_eventCreateSnapshotByTags_Parms
		{
			UTextureRenderTarget2D* SourceRT;
			TArray<FName> ActorTags;
			FRotator CustomRotation;
			TEnumAsByte<ESceneCaptureSource> CaptureSource;
			bool bSetRenderDepth;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceRT;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActorTags_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomRotation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CaptureSource;
		static void NewProp_bSetRenderDepth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetRenderDepth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::NewProp_SourceRT = { "SourceRT", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemManager_eventCreateSnapshotByTags_Parms, SourceRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::NewProp_ActorTags_Inner = { "ActorTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::NewProp_ActorTags = { "ActorTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemManager_eventCreateSnapshotByTags_Parms, ActorTags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::NewProp_CustomRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::NewProp_CustomRotation = { "CustomRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemManager_eventCreateSnapshotByTags_Parms, CustomRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::NewProp_CustomRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::NewProp_CustomRotation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::NewProp_CaptureSource = { "CaptureSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemManager_eventCreateSnapshotByTags_Parms, CaptureSource), Z_Construct_UEnum_Engine_ESceneCaptureSource, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::NewProp_bSetRenderDepth_SetBit(void* Obj)
	{
		((MapSystemManager_eventCreateSnapshotByTags_Parms*)Obj)->bSetRenderDepth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::NewProp_bSetRenderDepth = { "bSetRenderDepth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemManager_eventCreateSnapshotByTags_Parms), &Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::NewProp_bSetRenderDepth_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::NewProp_SourceRT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::NewProp_ActorTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::NewProp_ActorTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::NewProp_CustomRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::NewProp_CaptureSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::NewProp_bSetRenderDepth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapSystemManager, nullptr, "CreateSnapshotByTags", nullptr, nullptr, sizeof(MapSystemManager_eventCreateSnapshotByTags_Parms), Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapSystemManager_HandleRenderSnapshotDone_Statics
	{
		struct MapSystemManager_eventHandleRenderSnapshotDone_Parms
		{
			UTexture* NewTexture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapSystemManager_HandleRenderSnapshotDone_Statics::NewProp_NewTexture = { "NewTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemManager_eventHandleRenderSnapshotDone_Parms, NewTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapSystemManager_HandleRenderSnapshotDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_HandleRenderSnapshotDone_Statics::NewProp_NewTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_HandleRenderSnapshotDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapSystemManager_HandleRenderSnapshotDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapSystemManager, nullptr, "HandleRenderSnapshotDone", nullptr, nullptr, sizeof(MapSystemManager_eventHandleRenderSnapshotDone_Parms), Z_Construct_UFunction_AMapSystemManager_HandleRenderSnapshotDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_HandleRenderSnapshotDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_HandleRenderSnapshotDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_HandleRenderSnapshotDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapSystemManager_HandleRenderSnapshotDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapSystemManager_HandleRenderSnapshotDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapSystemManager_InitializeMapSystem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_InitializeMapSystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapSystemManager_InitializeMapSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapSystemManager, nullptr, "InitializeMapSystem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_InitializeMapSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_InitializeMapSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapSystemManager_InitializeMapSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapSystemManager_InitializeMapSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapSystemManager_IsMapOpen_Statics
	{
		struct MapSystemManager_eventIsMapOpen_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMapSystemManager_IsMapOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapSystemManager_eventIsMapOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapSystemManager_IsMapOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemManager_eventIsMapOpen_Parms), &Z_Construct_UFunction_AMapSystemManager_IsMapOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapSystemManager_IsMapOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_IsMapOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_IsMapOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapSystemManager_IsMapOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapSystemManager, nullptr, "IsMapOpen", nullptr, nullptr, sizeof(MapSystemManager_eventIsMapOpen_Parms), Z_Construct_UFunction_AMapSystemManager_IsMapOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_IsMapOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_IsMapOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_IsMapOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapSystemManager_IsMapOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapSystemManager_IsMapOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapSystemManager_IsMinimapOpen_Statics
	{
		struct MapSystemManager_eventIsMinimapOpen_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMapSystemManager_IsMinimapOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapSystemManager_eventIsMinimapOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapSystemManager_IsMinimapOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemManager_eventIsMinimapOpen_Parms), &Z_Construct_UFunction_AMapSystemManager_IsMinimapOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapSystemManager_IsMinimapOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_IsMinimapOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_IsMinimapOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapSystemManager_IsMinimapOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapSystemManager, nullptr, "IsMinimapOpen", nullptr, nullptr, sizeof(MapSystemManager_eventIsMinimapOpen_Parms), Z_Construct_UFunction_AMapSystemManager_IsMinimapOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_IsMinimapOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_IsMinimapOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_IsMinimapOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapSystemManager_IsMinimapOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapSystemManager_IsMinimapOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapSystemManager_MapPanForward_Statics
	{
		struct MapSystemManager_eventMapPanForward_Parms
		{
			float ForwardPanAxis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardPanAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMapSystemManager_MapPanForward_Statics::NewProp_ForwardPanAxis = { "ForwardPanAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemManager_eventMapPanForward_Parms, ForwardPanAxis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapSystemManager_MapPanForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_MapPanForward_Statics::NewProp_ForwardPanAxis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_MapPanForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapSystemManager_MapPanForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapSystemManager, nullptr, "MapPanForward", nullptr, nullptr, sizeof(MapSystemManager_eventMapPanForward_Parms), Z_Construct_UFunction_AMapSystemManager_MapPanForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_MapPanForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_MapPanForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_MapPanForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapSystemManager_MapPanForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapSystemManager_MapPanForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapSystemManager_MapPanRight_Statics
	{
		struct MapSystemManager_eventMapPanRight_Parms
		{
			float RightPanAxis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightPanAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMapSystemManager_MapPanRight_Statics::NewProp_RightPanAxis = { "RightPanAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemManager_eventMapPanRight_Parms, RightPanAxis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapSystemManager_MapPanRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_MapPanRight_Statics::NewProp_RightPanAxis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_MapPanRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapSystemManager_MapPanRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapSystemManager, nullptr, "MapPanRight", nullptr, nullptr, sizeof(MapSystemManager_eventMapPanRight_Parms), Z_Construct_UFunction_AMapSystemManager_MapPanRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_MapPanRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_MapPanRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_MapPanRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapSystemManager_MapPanRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapSystemManager_MapPanRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapSystemManager_MapTextureGenerated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_MapTextureGenerated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapSystemManager_MapTextureGenerated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapSystemManager, nullptr, "MapTextureGenerated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_MapTextureGenerated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_MapTextureGenerated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapSystemManager_MapTextureGenerated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapSystemManager_MapTextureGenerated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapSystemManager_MapZoomInOut_Statics
	{
		struct MapSystemManager_eventMapZoomInOut_Parms
		{
			float ZoomValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMapSystemManager_MapZoomInOut_Statics::NewProp_ZoomValue = { "ZoomValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemManager_eventMapZoomInOut_Parms, ZoomValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapSystemManager_MapZoomInOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_MapZoomInOut_Statics::NewProp_ZoomValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_MapZoomInOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapSystemManager_MapZoomInOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapSystemManager, nullptr, "MapZoomInOut", nullptr, nullptr, sizeof(MapSystemManager_eventMapZoomInOut_Parms), Z_Construct_UFunction_AMapSystemManager_MapZoomInOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_MapZoomInOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_MapZoomInOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_MapZoomInOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapSystemManager_MapZoomInOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapSystemManager_MapZoomInOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapSystemManager_OnMapElementHovered_Statics
	{
		struct MapSystemManager_eventOnMapElementHovered_Parms
		{
			UMapSystem_MapElementBase* HoveredElement;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoveredElement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoveredElement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_OnMapElementHovered_Statics::NewProp_HoveredElement_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapSystemManager_OnMapElementHovered_Statics::NewProp_HoveredElement = { "HoveredElement", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemManager_eventOnMapElementHovered_Parms, HoveredElement), Z_Construct_UClass_UMapSystem_MapElementBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_OnMapElementHovered_Statics::NewProp_HoveredElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_OnMapElementHovered_Statics::NewProp_HoveredElement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapSystemManager_OnMapElementHovered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_OnMapElementHovered_Statics::NewProp_HoveredElement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_OnMapElementHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapSystemManager_OnMapElementHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapSystemManager, nullptr, "OnMapElementHovered", nullptr, nullptr, sizeof(MapSystemManager_eventOnMapElementHovered_Parms), Z_Construct_UFunction_AMapSystemManager_OnMapElementHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_OnMapElementHovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_OnMapElementHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_OnMapElementHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapSystemManager_OnMapElementHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapSystemManager_OnMapElementHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapSystemManager_OnMapElementUnHovered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_OnMapElementUnHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapSystemManager_OnMapElementUnHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapSystemManager, nullptr, "OnMapElementUnHovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_OnMapElementUnHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_OnMapElementUnHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapSystemManager_OnMapElementUnHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapSystemManager_OnMapElementUnHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapSystemManager_RebuildDynamicActors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_RebuildDynamicActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapSystemManager_RebuildDynamicActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapSystemManager, nullptr, "RebuildDynamicActors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_RebuildDynamicActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_RebuildDynamicActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapSystemManager_RebuildDynamicActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapSystemManager_RebuildDynamicActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapSystemManager_RemoveMapActor_Statics
	{
		struct MapSystemManager_eventRemoveMapActor_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapSystemManager_RemoveMapActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemManager_eventRemoveMapActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapSystemManager_RemoveMapActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_RemoveMapActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_RemoveMapActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapSystemManager_RemoveMapActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapSystemManager, nullptr, "RemoveMapActor", nullptr, nullptr, sizeof(MapSystemManager_eventRemoveMapActor_Parms), Z_Construct_UFunction_AMapSystemManager_RemoveMapActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_RemoveMapActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_RemoveMapActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_RemoveMapActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapSystemManager_RemoveMapActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapSystemManager_RemoveMapActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapSystemManager_SetMinimapLocationTag_Statics
	{
		struct MapSystemManager_eventSetMinimapLocationTag_Parms
		{
			FGameplayTag InTag;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_SetMinimapLocationTag_Statics::NewProp_InTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapSystemManager_SetMinimapLocationTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemManager_eventSetMinimapLocationTag_Parms, InTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_SetMinimapLocationTag_Statics::NewProp_InTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_SetMinimapLocationTag_Statics::NewProp_InTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapSystemManager_SetMinimapLocationTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_SetMinimapLocationTag_Statics::NewProp_InTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_SetMinimapLocationTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapSystemManager_SetMinimapLocationTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapSystemManager, nullptr, "SetMinimapLocationTag", nullptr, nullptr, sizeof(MapSystemManager_eventSetMinimapLocationTag_Parms), Z_Construct_UFunction_AMapSystemManager_SetMinimapLocationTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_SetMinimapLocationTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_SetMinimapLocationTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_SetMinimapLocationTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapSystemManager_SetMinimapLocationTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapSystemManager_SetMinimapLocationTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapSystemManager_SetMinimapVisibility_Statics
	{
		struct MapSystemManager_eventSetMinimapVisibility_Parms
		{
			bool bNewVisible;
		};
		static void NewProp_bNewVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMapSystemManager_SetMinimapVisibility_Statics::NewProp_bNewVisible_SetBit(void* Obj)
	{
		((MapSystemManager_eventSetMinimapVisibility_Parms*)Obj)->bNewVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapSystemManager_SetMinimapVisibility_Statics::NewProp_bNewVisible = { "bNewVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemManager_eventSetMinimapVisibility_Parms), &Z_Construct_UFunction_AMapSystemManager_SetMinimapVisibility_Statics::NewProp_bNewVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapSystemManager_SetMinimapVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_SetMinimapVisibility_Statics::NewProp_bNewVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_SetMinimapVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapSystemManager_SetMinimapVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapSystemManager, nullptr, "SetMinimapVisibility", nullptr, nullptr, sizeof(MapSystemManager_eventSetMinimapVisibility_Parms), Z_Construct_UFunction_AMapSystemManager_SetMinimapVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_SetMinimapVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_SetMinimapVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_SetMinimapVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapSystemManager_SetMinimapVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapSystemManager_SetMinimapVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapSystemManager_ShowBigMap_Statics
	{
		struct MapSystemManager_eventShowBigMap_Parms
		{
			bool bShow;
		};
		static void NewProp_bShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMapSystemManager_ShowBigMap_Statics::NewProp_bShow_SetBit(void* Obj)
	{
		((MapSystemManager_eventShowBigMap_Parms*)Obj)->bShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapSystemManager_ShowBigMap_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemManager_eventShowBigMap_Parms), &Z_Construct_UFunction_AMapSystemManager_ShowBigMap_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapSystemManager_ShowBigMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_ShowBigMap_Statics::NewProp_bShow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_ShowBigMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapSystemManager_ShowBigMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapSystemManager, nullptr, "ShowBigMap", nullptr, nullptr, sizeof(MapSystemManager_eventShowBigMap_Parms), Z_Construct_UFunction_AMapSystemManager_ShowBigMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_ShowBigMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_ShowBigMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_ShowBigMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapSystemManager_ShowBigMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapSystemManager_ShowBigMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapSystemManager_ShowMinimapMap_Statics
	{
		struct MapSystemManager_eventShowMinimapMap_Parms
		{
			bool bShow;
		};
		static void NewProp_bShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMapSystemManager_ShowMinimapMap_Statics::NewProp_bShow_SetBit(void* Obj)
	{
		((MapSystemManager_eventShowMinimapMap_Parms*)Obj)->bShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapSystemManager_ShowMinimapMap_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemManager_eventShowMinimapMap_Parms), &Z_Construct_UFunction_AMapSystemManager_ShowMinimapMap_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapSystemManager_ShowMinimapMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_ShowMinimapMap_Statics::NewProp_bShow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_ShowMinimapMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapSystemManager_ShowMinimapMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapSystemManager, nullptr, "ShowMinimapMap", nullptr, nullptr, sizeof(MapSystemManager_eventShowMinimapMap_Parms), Z_Construct_UFunction_AMapSystemManager_ShowMinimapMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_ShowMinimapMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_ShowMinimapMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_ShowMinimapMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapSystemManager_ShowMinimapMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapSystemManager_ShowMinimapMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapSystemManager_UpdateMapTextureFromSnapshot_Statics
	{
		struct MapSystemManager_eventUpdateMapTextureFromSnapshot_Parms
		{
			float Delay;
			TEnumAsByte<ESceneCaptureSource> CaptureSource;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CaptureSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMapSystemManager_UpdateMapTextureFromSnapshot_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemManager_eventUpdateMapTextureFromSnapshot_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMapSystemManager_UpdateMapTextureFromSnapshot_Statics::NewProp_CaptureSource = { "CaptureSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemManager_eventUpdateMapTextureFromSnapshot_Parms, CaptureSource), Z_Construct_UEnum_Engine_ESceneCaptureSource, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapSystemManager_UpdateMapTextureFromSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_UpdateMapTextureFromSnapshot_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapSystemManager_UpdateMapTextureFromSnapshot_Statics::NewProp_CaptureSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapSystemManager_UpdateMapTextureFromSnapshot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapSystemManager_UpdateMapTextureFromSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapSystemManager, nullptr, "UpdateMapTextureFromSnapshot", nullptr, nullptr, sizeof(MapSystemManager_eventUpdateMapTextureFromSnapshot_Parms), Z_Construct_UFunction_AMapSystemManager_UpdateMapTextureFromSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_UpdateMapTextureFromSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapSystemManager_UpdateMapTextureFromSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapSystemManager_UpdateMapTextureFromSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapSystemManager_UpdateMapTextureFromSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapSystemManager_UpdateMapTextureFromSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMapSystemManager_NoRegister()
	{
		return AMapSystemManager::StaticClass();
	}
	struct Z_Construct_UClass_AMapSystemManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableAutoInitialize_MetaData[];
#endif
		static void NewProp_bDisableAutoInitialize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableAutoInitialize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMapGenerationComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapGenerationComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapTextureNew_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapTextureNew;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMapInitialized_MetaData[];
#endif
		static void NewProp_bMapInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMapInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapLocationTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinimapLocationTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticElements;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticElementsMap_ValueProp;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_StaticElementsMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticElementsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StaticElementsMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinimapStaticElements_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MinimapStaticElements_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapStaticElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MinimapStaticElements;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinimapDynamicElements_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MinimapDynamicElements_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapDynamicElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MinimapDynamicElements;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniMapMaskTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MiniMapMaskTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MinimapWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapElementWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MinimapElementWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MapWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapElementWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MapElementWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxUnusedWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxUnusedWidgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PingIconTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PingIconTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFixedZoom_MetaData[];
#endif
		static void NewProp_bUseFixedZoom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFixedZoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedZoomArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FixedZoomArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapSystemInitializationDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MapSystemInitializationDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FustrumHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FustrumHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BiomassRadiusTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BiomassRadiusTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustrumRenderingTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrustrumRenderingTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BiomassRadiusTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BiomassRadiusTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapPathingLineTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapPathingLineTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMapPathingLines_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxMapPathingLines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderRT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderRT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapPathingRT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapPathingRT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BiomassRT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BiomassRT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapBoundsActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapBoundsActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObserverBlockingVolumes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObserverBlockingVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObserverBlockingVolumes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MinimapWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnusedMinimapElements_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnusedMinimapElements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnusedMinimapElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnusedMinimapElements;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnusedMapElements_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnusedMapElements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnusedMapElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnusedMapElements;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHoveredElement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentHoveredElement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMapOpened_MetaData[];
#endif
		static void NewProp_bIsMapOpened_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMapOpened;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMinimapVisible_MetaData[];
#endif
		static void NewProp_bIsMinimapVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMinimapVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMapSystemManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SolsticeMinimap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMapSystemManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMapSystemManager_AddMapActor, "AddMapActor" }, // 4062935894
		{ &Z_Construct_UFunction_AMapSystemManager_AddMapElement, "AddMapElement" }, // 405792449
		{ &Z_Construct_UFunction_AMapSystemManager_ClearMinimapLocationTag, "ClearMinimapLocationTag" }, // 864480367
		{ &Z_Construct_UFunction_AMapSystemManager_CreateSnapshotByTags, "CreateSnapshotByTags" }, // 1554172271
		{ &Z_Construct_UFunction_AMapSystemManager_HandleRenderSnapshotDone, "HandleRenderSnapshotDone" }, // 1796263666
		{ &Z_Construct_UFunction_AMapSystemManager_InitializeMapSystem, "InitializeMapSystem" }, // 343668935
		{ &Z_Construct_UFunction_AMapSystemManager_IsMapOpen, "IsMapOpen" }, // 4017443306
		{ &Z_Construct_UFunction_AMapSystemManager_IsMinimapOpen, "IsMinimapOpen" }, // 2830569354
		{ &Z_Construct_UFunction_AMapSystemManager_MapPanForward, "MapPanForward" }, // 2976291109
		{ &Z_Construct_UFunction_AMapSystemManager_MapPanRight, "MapPanRight" }, // 1573717150
		{ &Z_Construct_UFunction_AMapSystemManager_MapTextureGenerated, "MapTextureGenerated" }, // 146053173
		{ &Z_Construct_UFunction_AMapSystemManager_MapZoomInOut, "MapZoomInOut" }, // 3334443036
		{ &Z_Construct_UFunction_AMapSystemManager_OnMapElementHovered, "OnMapElementHovered" }, // 3989839416
		{ &Z_Construct_UFunction_AMapSystemManager_OnMapElementUnHovered, "OnMapElementUnHovered" }, // 3876653008
		{ &Z_Construct_UFunction_AMapSystemManager_RebuildDynamicActors, "RebuildDynamicActors" }, // 584579644
		{ &Z_Construct_UFunction_AMapSystemManager_RemoveMapActor, "RemoveMapActor" }, // 1937753028
		{ &Z_Construct_UFunction_AMapSystemManager_SetMinimapLocationTag, "SetMinimapLocationTag" }, // 2273127129
		{ &Z_Construct_UFunction_AMapSystemManager_SetMinimapVisibility, "SetMinimapVisibility" }, // 3258885414
		{ &Z_Construct_UFunction_AMapSystemManager_ShowBigMap, "ShowBigMap" }, // 1388988285
		{ &Z_Construct_UFunction_AMapSystemManager_ShowMinimapMap, "ShowMinimapMap" }, // 2961758811
		{ &Z_Construct_UFunction_AMapSystemManager_UpdateMapTextureFromSnapshot, "UpdateMapTextureFromSnapshot" }, // 1374033290
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MapSystemManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bDisableAutoInitialize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	void Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bDisableAutoInitialize_SetBit(void* Obj)
	{
		((AMapSystemManager*)Obj)->bDisableAutoInitialize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bDisableAutoInitialize = { "bDisableAutoInitialize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMapSystemManager), &Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bDisableAutoInitialize_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bDisableAutoInitialize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bDisableAutoInitialize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_OnMapGenerationComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_OnMapGenerationComplete = { "OnMapGenerationComplete", nullptr, (EPropertyFlags)0x0010100010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, OnMapGenerationComplete), Z_Construct_UDelegateFunction_SolsticeMinimap_MapGenerationComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_OnMapGenerationComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_OnMapGenerationComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapTextureNew_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapTextureNew = { "MapTextureNew", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, MapTextureNew), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapTextureNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapTextureNew_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bMapInitialized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	void Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bMapInitialized_SetBit(void* Obj)
	{
		((AMapSystemManager*)Obj)->bMapInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bMapInitialized = { "bMapInitialized", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMapSystemManager), &Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bMapInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bMapInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bMapInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapLocationTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapLocationTag = { "MinimapLocationTag", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, MinimapLocationTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapLocationTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapLocationTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_StaticElements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_StaticElements = { "StaticElements", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, StaticElements), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_StaticElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_StaticElements_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_StaticElementsMap_ValueProp = { "StaticElementsMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMapElement, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_StaticElementsMap_Key_KeyProp = { "StaticElementsMap_Key", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_StaticElementsMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_StaticElementsMap = { "StaticElementsMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, StaticElementsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_StaticElementsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_StaticElementsMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapStaticElements_ValueProp = { "MinimapStaticElements", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMinimapElementInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapStaticElements_Key_KeyProp = { "MinimapStaticElements_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapStaticElements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapStaticElements = { "MinimapStaticElements", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, MinimapStaticElements), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapStaticElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapStaticElements_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapDynamicElements_ValueProp = { "MinimapDynamicElements", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMinimapElementInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapDynamicElements_Key_KeyProp = { "MinimapDynamicElements_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapDynamicElements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapDynamicElements = { "MinimapDynamicElements", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, MinimapDynamicElements), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapDynamicElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapDynamicElements_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapTexture = { "MapTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, MapTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MiniMapMaskTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MiniMapMaskTexture = { "MiniMapMaskTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, MiniMapMaskTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MiniMapMaskTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MiniMapMaskTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapWidgetClass = { "MinimapWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, MinimapWidgetClass), Z_Construct_UClass_UMapSystem_MinimapWidgetBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapElementWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapElementWidgetClass = { "MinimapElementWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, MinimapElementWidgetClass), Z_Construct_UClass_UMapSystem_MinimapElementBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapElementWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapElementWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapWidgetClass = { "MapWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, MapWidgetClass), Z_Construct_UClass_UMapSystem_MapWidgetBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapElementWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapElementWidgetClass = { "MapElementWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, MapElementWidgetClass), Z_Construct_UClass_UMapSystem_MapElementBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapElementWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapElementWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MaxUnusedWidgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MaxUnusedWidgets = { "MaxUnusedWidgets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, MaxUnusedWidgets), METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MaxUnusedWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MaxUnusedWidgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_PingIconTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_PingIconTimeout = { "PingIconTimeout", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, PingIconTimeout), METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_PingIconTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_PingIconTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bUseFixedZoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	void Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bUseFixedZoom_SetBit(void* Obj)
	{
		((AMapSystemManager*)Obj)->bUseFixedZoom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bUseFixedZoom = { "bUseFixedZoom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMapSystemManager), &Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bUseFixedZoom_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bUseFixedZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bUseFixedZoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_FixedZoomArea_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_FixedZoomArea = { "FixedZoomArea", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, FixedZoomArea), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_FixedZoomArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_FixedZoomArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapSystemInitializationDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapSystemInitializationDelay = { "MapSystemInitializationDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, MapSystemInitializationDelay), METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapSystemInitializationDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapSystemInitializationDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_FustrumHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_FustrumHeight = { "FustrumHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, FustrumHeight), METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_FustrumHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_FustrumHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_BiomassRadiusTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_BiomassRadiusTexture = { "BiomassRadiusTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, BiomassRadiusTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_BiomassRadiusTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_BiomassRadiusTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_FrustrumRenderingTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_FrustrumRenderingTexture = { "FrustrumRenderingTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, FrustrumRenderingTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_FrustrumRenderingTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_FrustrumRenderingTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_BiomassRadiusTint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_BiomassRadiusTint = { "BiomassRadiusTint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, BiomassRadiusTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_BiomassRadiusTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_BiomassRadiusTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapPathingLineTint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapPathingLineTint = { "MapPathingLineTint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, MapPathingLineTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapPathingLineTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapPathingLineTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MaxMapPathingLines_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MaxMapPathingLines = { "MaxMapPathingLines", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, MaxMapPathingLines), METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MaxMapPathingLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MaxMapPathingLines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_RenderRT_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_RenderRT = { "RenderRT", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, RenderRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_RenderRT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_RenderRT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapPathingRT_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapPathingRT = { "MapPathingRT", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, MapPathingRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapPathingRT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapPathingRT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_BiomassRT_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_BiomassRT = { "BiomassRT", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, BiomassRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_BiomassRT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_BiomassRT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapBoundsActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapBoundsActor = { "MapBoundsActor", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, MapBoundsActor), Z_Construct_UClass_AMapSystemActorBounds_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapBoundsActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapBoundsActor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_ObserverBlockingVolumes_Inner = { "ObserverBlockingVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AObserverPawnBlockingVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_ObserverBlockingVolumes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_ObserverBlockingVolumes = { "ObserverBlockingVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, ObserverBlockingVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_ObserverBlockingVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_ObserverBlockingVolumes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapWidget = { "MinimapWidget", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, MinimapWidget), Z_Construct_UClass_UMapSystem_MinimapWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapWidget = { "MapWidget", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, MapWidget), Z_Construct_UClass_UMapSystem_MapWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_UnusedMinimapElements_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_UnusedMinimapElements_Inner = { "UnusedMinimapElements", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMapSystem_MinimapElementBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_UnusedMinimapElements_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_UnusedMinimapElements_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_UnusedMinimapElements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_UnusedMinimapElements = { "UnusedMinimapElements", nullptr, (EPropertyFlags)0x001000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, UnusedMinimapElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_UnusedMinimapElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_UnusedMinimapElements_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_UnusedMapElements_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_UnusedMapElements_Inner = { "UnusedMapElements", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMapSystem_MapElementBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_UnusedMapElements_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_UnusedMapElements_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_UnusedMapElements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_UnusedMapElements = { "UnusedMapElements", nullptr, (EPropertyFlags)0x001000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, UnusedMapElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_UnusedMapElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_UnusedMapElements_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_CurrentHoveredElement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_CurrentHoveredElement = { "CurrentHoveredElement", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapSystemManager, CurrentHoveredElement), Z_Construct_UClass_UMapSystem_MapElementBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_CurrentHoveredElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_CurrentHoveredElement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bIsMapOpened_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	void Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bIsMapOpened_SetBit(void* Obj)
	{
		((AMapSystemManager*)Obj)->bIsMapOpened = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bIsMapOpened = { "bIsMapOpened", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMapSystemManager), &Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bIsMapOpened_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bIsMapOpened_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bIsMapOpened_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bIsMinimapVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	void Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bIsMinimapVisible_SetBit(void* Obj)
	{
		((AMapSystemManager*)Obj)->bIsMinimapVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bIsMinimapVisible = { "bIsMinimapVisible", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMapSystemManager), &Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bIsMinimapVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bIsMinimapVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bIsMinimapVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemManager" },
		{ "ModuleRelativePath", "Public/MapSystemManager.h" },
	};
#endif
	void Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((AMapSystemManager*)Obj)->bIsInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMapSystemManager), &Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bIsInitialized_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapSystemManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bDisableAutoInitialize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_OnMapGenerationComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapTextureNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bMapInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapLocationTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_StaticElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_StaticElementsMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_StaticElementsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_StaticElementsMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapStaticElements_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapStaticElements_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapStaticElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapDynamicElements_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapDynamicElements_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapDynamicElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MiniMapMaskTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapElementWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapElementWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MaxUnusedWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_PingIconTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bUseFixedZoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_FixedZoomArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapSystemInitializationDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_FustrumHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_BiomassRadiusTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_FrustrumRenderingTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_BiomassRadiusTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapPathingLineTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MaxMapPathingLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_RenderRT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapPathingRT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_BiomassRT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapBoundsActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_ObserverBlockingVolumes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_ObserverBlockingVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MinimapWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_MapWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_UnusedMinimapElements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_UnusedMinimapElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_UnusedMapElements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_UnusedMapElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_CurrentHoveredElement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bIsMapOpened,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bIsMinimapVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapSystemManager_Statics::NewProp_bIsInitialized,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMapSystemManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapSystemManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMapSystemManager_Statics::ClassParams = {
		&AMapSystemManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMapSystemManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMapSystemManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMapSystemManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMapSystemManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMapSystemManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMapSystemManager, 2671676922);
	template<> SOLSTICEMINIMAP_API UClass* StaticClass<AMapSystemManager>()
	{
		return AMapSystemManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMapSystemManager(Z_Construct_UClass_AMapSystemManager, &AMapSystemManager::StaticClass, TEXT("/Script/SolsticeMinimap"), TEXT("AMapSystemManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMapSystemManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
