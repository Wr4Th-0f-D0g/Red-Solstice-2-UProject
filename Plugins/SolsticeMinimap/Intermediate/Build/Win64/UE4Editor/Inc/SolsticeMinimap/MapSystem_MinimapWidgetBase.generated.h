// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
class UMapSystemWidget_PingElementBase;
struct FGameplayTag;
class UMaterialInstanceDynamic;
#ifdef SOLSTICEMINIMAP_MapSystem_MinimapWidgetBase_generated_h
#error "MapSystem_MinimapWidgetBase.generated.h already included, missing '#pragma once' in MapSystem_MinimapWidgetBase.h"
#endif
#define SOLSTICEMINIMAP_MapSystem_MinimapWidgetBase_generated_h

#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_SPARSE_DATA
#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddMinimapRotation); \
	DECLARE_FUNCTION(execCreatePingElement); \
	DECLARE_FUNCTION(execGetMinimapPan); \
	DECLARE_FUNCTION(execRemovePingElement); \
	DECLARE_FUNCTION(execUpdateElements);


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddMinimapRotation); \
	DECLARE_FUNCTION(execCreatePingElement); \
	DECLARE_FUNCTION(execGetMinimapPan); \
	DECLARE_FUNCTION(execRemovePingElement); \
	DECLARE_FUNCTION(execUpdateElements);


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_EVENT_PARMS \
	struct MapSystem_MinimapWidgetBase_eventClearMinimapLocationTag_Parms \
	{ \
		FGameplayTag InTag; \
	}; \
	struct MapSystem_MinimapWidgetBase_eventOnMinimapUpdated_Parms \
	{ \
		UMaterialInstanceDynamic* Material; \
	}; \
	struct MapSystem_MinimapWidgetBase_eventSetMinimapLocationTag_Parms \
	{ \
		FGameplayTag InTag; \
	};


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_CALLBACK_WRAPPERS
#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapSystem_MinimapWidgetBase(); \
	friend struct Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UMapSystem_MinimapWidgetBase, UMapSystemWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SolsticeMinimap"), NO_API) \
	DECLARE_SERIALIZER(UMapSystem_MinimapWidgetBase)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMapSystem_MinimapWidgetBase(); \
	friend struct Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UMapSystem_MinimapWidgetBase, UMapSystemWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SolsticeMinimap"), NO_API) \
	DECLARE_SERIALIZER(UMapSystem_MinimapWidgetBase)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapSystem_MinimapWidgetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapSystem_MinimapWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapSystem_MinimapWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapSystem_MinimapWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapSystem_MinimapWidgetBase(UMapSystem_MinimapWidgetBase&&); \
	NO_API UMapSystem_MinimapWidgetBase(const UMapSystem_MinimapWidgetBase&); \
public:


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapSystem_MinimapWidgetBase(UMapSystem_MinimapWidgetBase&&); \
	NO_API UMapSystem_MinimapWidgetBase(const UMapSystem_MinimapWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapSystem_MinimapWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapSystem_MinimapWidgetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMapSystem_MinimapWidgetBase)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_PRIVATE_PROPERTY_OFFSET
#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_14_PROLOG \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_EVENT_PARMS


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_SPARSE_DATA \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_RPC_WRAPPERS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_CALLBACK_WRAPPERS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_INCLASS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_SPARSE_DATA \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_CALLBACK_WRAPPERS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_INCLASS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOLSTICEMINIMAP_API UClass* StaticClass<class UMapSystem_MinimapWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MinimapWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
