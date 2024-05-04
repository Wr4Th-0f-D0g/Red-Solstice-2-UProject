// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
struct FLinearColor;
struct FTransform;
#ifdef SOLSTICEMINIMAP_MapSystem_MinimapElementBase_generated_h
#error "MapSystem_MinimapElementBase.generated.h already included, missing '#pragma once' in MapSystem_MinimapElementBase.h"
#endif
#define SOLSTICEMINIMAP_MapSystem_MinimapElementBase_generated_h

#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_SPARSE_DATA
#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMinimapActor);


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMinimapActor);


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_EVENT_PARMS \
	struct MapSystem_MinimapElementBase_eventOnElementIconChanged_Parms \
	{ \
		UObject* NewElementIcon; \
		FLinearColor NewTint; \
	}; \
	struct MapSystem_MinimapElementBase_eventOnReceiveCurrentTransform_Parms \
	{ \
		FTransform ActorTransform; \
	};


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_CALLBACK_WRAPPERS
#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapSystem_MinimapElementBase(); \
	friend struct Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics; \
public: \
	DECLARE_CLASS(UMapSystem_MinimapElementBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SolsticeMinimap"), NO_API) \
	DECLARE_SERIALIZER(UMapSystem_MinimapElementBase)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMapSystem_MinimapElementBase(); \
	friend struct Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics; \
public: \
	DECLARE_CLASS(UMapSystem_MinimapElementBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SolsticeMinimap"), NO_API) \
	DECLARE_SERIALIZER(UMapSystem_MinimapElementBase)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapSystem_MinimapElementBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapSystem_MinimapElementBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapSystem_MinimapElementBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapSystem_MinimapElementBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapSystem_MinimapElementBase(UMapSystem_MinimapElementBase&&); \
	NO_API UMapSystem_MinimapElementBase(const UMapSystem_MinimapElementBase&); \
public:


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapSystem_MinimapElementBase(UMapSystem_MinimapElementBase&&); \
	NO_API UMapSystem_MinimapElementBase(const UMapSystem_MinimapElementBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapSystem_MinimapElementBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapSystem_MinimapElementBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMapSystem_MinimapElementBase)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CanvasSlot() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, CanvasSlot); } \
	FORCEINLINE static uint32 __PPO__bIsSizeOffset() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, bIsSizeOffset); } \
	FORCEINLINE static uint32 __PPO__MapManager() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, MapManager); } \
	FORCEINLINE static uint32 __PPO__ObserverPawn() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, ObserverPawn); } \
	FORCEINLINE static uint32 __PPO__MinimapActor() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, MinimapActor); } \
	FORCEINLINE static uint32 __PPO__CachedLocation() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, CachedLocation); } \
	FORCEINLINE static uint32 __PPO__bIsStatic() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, bIsStatic); } \
	FORCEINLINE static uint32 __PPO__MinBound() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, MinBound); } \
	FORCEINLINE static uint32 __PPO__MaxBound() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, MaxBound); } \
	FORCEINLINE static uint32 __PPO__bCentralizedPlayer() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, bCentralizedPlayer); } \
	FORCEINLINE static uint32 __PPO__ImageSize() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, ImageSize); } \
	FORCEINLINE static uint32 __PPO__ElementIcon() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, ElementIcon); } \
	FORCEINLINE static uint32 __PPO__ElementPointerIcon() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, ElementPointerIcon); } \
	FORCEINLINE static uint32 __PPO__Tint() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, Tint); } \
	FORCEINLINE static uint32 __PPO__bShowIconOnMinimap() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, bShowIconOnMinimap); } \
	FORCEINLINE static uint32 __PPO__RangeIcon() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, RangeIcon); } \
	FORCEINLINE static uint32 __PPO__RangeTint() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, RangeTint); } \
	FORCEINLINE static uint32 __PPO__bShowRadius() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, bShowRadius); } \
	FORCEINLINE static uint32 __PPO__Radius() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, Radius); } \
	FORCEINLINE static uint32 __PPO__bHasRadiusShown() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, bHasRadiusShown); } \
	FORCEINLINE static uint32 __PPO__bIsMinimap() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, bIsMinimap); } \
	FORCEINLINE static uint32 __PPO__ElementOffset() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, ElementOffset); } \
	FORCEINLINE static uint32 __PPO__bFixedRotation() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, bFixedRotation); } \
	FORCEINLINE static uint32 __PPO__bAllowRotationChange() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, bAllowRotationChange); } \
	FORCEINLINE static uint32 __PPO__bAllowPointerRotationChange() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, bAllowPointerRotationChange); } \
	FORCEINLINE static uint32 __PPO__bAlwaysVisibleInRange() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, bAlwaysVisibleInRange); } \
	FORCEINLINE static uint32 __PPO__VisibilityRadius() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, VisibilityRadius); } \
	FORCEINLINE static uint32 __PPO__ElementImage() { return STRUCT_OFFSET(UMapSystem_MinimapElementBase, ElementImage); }


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_16_PROLOG \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_EVENT_PARMS


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_SPARSE_DATA \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_RPC_WRAPPERS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_CALLBACK_WRAPPERS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_INCLASS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_SPARSE_DATA \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_CALLBACK_WRAPPERS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_INCLASS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOLSTICEMINIMAP_API UClass* StaticClass<class UMapSystem_MinimapElementBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapElementBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
