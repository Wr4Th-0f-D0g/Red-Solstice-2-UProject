// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FMapElement;
struct FGameplayTag;
class UTextureRenderTarget2D;
struct FRotator;
class UTexture;
class UMapSystem_MapElementBase;
#ifdef SOLSTICEMINIMAP_MapSystemManager_generated_h
#error "MapSystemManager.generated.h already included, missing '#pragma once' in MapSystemManager.h"
#endif
#define SOLSTICEMINIMAP_MapSystemManager_generated_h

#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemManager_h_28_SPARSE_DATA
#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemManager_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddMapActor); \
	DECLARE_FUNCTION(execAddMapElement); \
	DECLARE_FUNCTION(execClearMinimapLocationTag); \
	DECLARE_FUNCTION(execCreateSnapshotByTags); \
	DECLARE_FUNCTION(execHandleRenderSnapshotDone); \
	DECLARE_FUNCTION(execInitializeMapSystem); \
	DECLARE_FUNCTION(execIsMapOpen); \
	DECLARE_FUNCTION(execIsMinimapOpen); \
	DECLARE_FUNCTION(execMapPanForward); \
	DECLARE_FUNCTION(execMapPanRight); \
	DECLARE_FUNCTION(execMapTextureGenerated); \
	DECLARE_FUNCTION(execMapZoomInOut); \
	DECLARE_FUNCTION(execOnMapElementHovered); \
	DECLARE_FUNCTION(execOnMapElementUnHovered); \
	DECLARE_FUNCTION(execRebuildDynamicActors); \
	DECLARE_FUNCTION(execRemoveMapActor); \
	DECLARE_FUNCTION(execSetMinimapLocationTag); \
	DECLARE_FUNCTION(execSetMinimapVisibility); \
	DECLARE_FUNCTION(execShowBigMap); \
	DECLARE_FUNCTION(execShowMinimapMap); \
	DECLARE_FUNCTION(execUpdateMapTextureFromSnapshot);


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemManager_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddMapActor); \
	DECLARE_FUNCTION(execAddMapElement); \
	DECLARE_FUNCTION(execClearMinimapLocationTag); \
	DECLARE_FUNCTION(execCreateSnapshotByTags); \
	DECLARE_FUNCTION(execHandleRenderSnapshotDone); \
	DECLARE_FUNCTION(execInitializeMapSystem); \
	DECLARE_FUNCTION(execIsMapOpen); \
	DECLARE_FUNCTION(execIsMinimapOpen); \
	DECLARE_FUNCTION(execMapPanForward); \
	DECLARE_FUNCTION(execMapPanRight); \
	DECLARE_FUNCTION(execMapTextureGenerated); \
	DECLARE_FUNCTION(execMapZoomInOut); \
	DECLARE_FUNCTION(execOnMapElementHovered); \
	DECLARE_FUNCTION(execOnMapElementUnHovered); \
	DECLARE_FUNCTION(execRebuildDynamicActors); \
	DECLARE_FUNCTION(execRemoveMapActor); \
	DECLARE_FUNCTION(execSetMinimapLocationTag); \
	DECLARE_FUNCTION(execSetMinimapVisibility); \
	DECLARE_FUNCTION(execShowBigMap); \
	DECLARE_FUNCTION(execShowMinimapMap); \
	DECLARE_FUNCTION(execUpdateMapTextureFromSnapshot);


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemManager_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapSystemManager(); \
	friend struct Z_Construct_UClass_AMapSystemManager_Statics; \
public: \
	DECLARE_CLASS(AMapSystemManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SolsticeMinimap"), NO_API) \
	DECLARE_SERIALIZER(AMapSystemManager)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemManager_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAMapSystemManager(); \
	friend struct Z_Construct_UClass_AMapSystemManager_Statics; \
public: \
	DECLARE_CLASS(AMapSystemManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SolsticeMinimap"), NO_API) \
	DECLARE_SERIALIZER(AMapSystemManager)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemManager_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMapSystemManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMapSystemManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapSystemManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapSystemManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapSystemManager(AMapSystemManager&&); \
	NO_API AMapSystemManager(const AMapSystemManager&); \
public:


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemManager_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapSystemManager(AMapSystemManager&&); \
	NO_API AMapSystemManager(const AMapSystemManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapSystemManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapSystemManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMapSystemManager)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemManager_h_28_PRIVATE_PROPERTY_OFFSET
#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemManager_h_26_PROLOG
#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemManager_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemManager_h_28_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemManager_h_28_SPARSE_DATA \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemManager_h_28_RPC_WRAPPERS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemManager_h_28_INCLASS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemManager_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemManager_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemManager_h_28_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemManager_h_28_SPARSE_DATA \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemManager_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemManager_h_28_INCLASS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemManager_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOLSTICEMINIMAP_API UClass* StaticClass<class AMapSystemManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
