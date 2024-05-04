// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOLSTICEMINIMAP_MapSystemActorBounds_generated_h
#error "MapSystemActorBounds.generated.h already included, missing '#pragma once' in MapSystemActorBounds.h"
#endif
#define SOLSTICEMINIMAP_MapSystemActorBounds_generated_h

#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemActorBounds_h_20_SPARSE_DATA
#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemActorBounds_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateMapSnapshot);


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemActorBounds_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateMapSnapshot);


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemActorBounds_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapSystemActorBounds(); \
	friend struct Z_Construct_UClass_AMapSystemActorBounds_Statics; \
public: \
	DECLARE_CLASS(AMapSystemActorBounds, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SolsticeMinimap"), NO_API) \
	DECLARE_SERIALIZER(AMapSystemActorBounds)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemActorBounds_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAMapSystemActorBounds(); \
	friend struct Z_Construct_UClass_AMapSystemActorBounds_Statics; \
public: \
	DECLARE_CLASS(AMapSystemActorBounds, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SolsticeMinimap"), NO_API) \
	DECLARE_SERIALIZER(AMapSystemActorBounds)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemActorBounds_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMapSystemActorBounds(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMapSystemActorBounds) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapSystemActorBounds); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapSystemActorBounds); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapSystemActorBounds(AMapSystemActorBounds&&); \
	NO_API AMapSystemActorBounds(const AMapSystemActorBounds&); \
public:


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemActorBounds_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapSystemActorBounds(AMapSystemActorBounds&&); \
	NO_API AMapSystemActorBounds(const AMapSystemActorBounds&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapSystemActorBounds); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapSystemActorBounds); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMapSystemActorBounds)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemActorBounds_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Collection() { return STRUCT_OFFSET(AMapSystemActorBounds, Collection); } \
	FORCEINLINE static uint32 __PPO__MapSystemManager() { return STRUCT_OFFSET(AMapSystemActorBounds, MapSystemManager); } \
	FORCEINLINE static uint32 __PPO__SceneCapComponent() { return STRUCT_OFFSET(AMapSystemActorBounds, SceneCapComponent); } \
	FORCEINLINE static uint32 __PPO__bCreateSnapshotOnBeginPlay() { return STRUCT_OFFSET(AMapSystemActorBounds, bCreateSnapshotOnBeginPlay); } \
	FORCEINLINE static uint32 __PPO__SnapshotDelay() { return STRUCT_OFFSET(AMapSystemActorBounds, SnapshotDelay); } \
	FORCEINLINE static uint32 __PPO__SnapshotRenderTarget() { return STRUCT_OFFSET(AMapSystemActorBounds, SnapshotRenderTarget); } \
	FORCEINLINE static uint32 __PPO__HiddenActorClasses() { return STRUCT_OFFSET(AMapSystemActorBounds, HiddenActorClasses); } \
	FORCEINLINE static uint32 __PPO__MinimapCanvasSize() { return STRUCT_OFFSET(AMapSystemActorBounds, MinimapCanvasSize); } \
	FORCEINLINE static uint32 __PPO__Origin() { return STRUCT_OFFSET(AMapSystemActorBounds, Origin); } \
	FORCEINLINE static uint32 __PPO__MinBounds() { return STRUCT_OFFSET(AMapSystemActorBounds, MinBounds); } \
	FORCEINLINE static uint32 __PPO__MaxBounds() { return STRUCT_OFFSET(AMapSystemActorBounds, MaxBounds); } \
	FORCEINLINE static uint32 __PPO__BoundsSize() { return STRUCT_OFFSET(AMapSystemActorBounds, BoundsSize); } \
	FORCEINLINE static uint32 __PPO__MainScene() { return STRUCT_OFFSET(AMapSystemActorBounds, MainScene); } \
	FORCEINLINE static uint32 __PPO__LevelBoundsX() { return STRUCT_OFFSET(AMapSystemActorBounds, LevelBoundsX); } \
	FORCEINLINE static uint32 __PPO__LevelBoundsY() { return STRUCT_OFFSET(AMapSystemActorBounds, LevelBoundsY); } \
	FORCEINLINE static uint32 __PPO__LevelBoundsZ() { return STRUCT_OFFSET(AMapSystemActorBounds, LevelBoundsZ); }


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemActorBounds_h_18_PROLOG
#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemActorBounds_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemActorBounds_h_20_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemActorBounds_h_20_SPARSE_DATA \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemActorBounds_h_20_RPC_WRAPPERS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemActorBounds_h_20_INCLASS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemActorBounds_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemActorBounds_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemActorBounds_h_20_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemActorBounds_h_20_SPARSE_DATA \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemActorBounds_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemActorBounds_h_20_INCLASS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemActorBounds_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOLSTICEMINIMAP_API UClass* StaticClass<class AMapSystemActorBounds>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemActorBounds_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
