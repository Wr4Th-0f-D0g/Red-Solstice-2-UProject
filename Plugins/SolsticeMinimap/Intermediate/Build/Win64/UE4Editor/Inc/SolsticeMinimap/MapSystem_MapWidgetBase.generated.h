// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FVector2D;
class ACharacter;
class UMapSystem_MapElementBase;
class UMaterialInterface;
#ifdef SOLSTICEMINIMAP_MapSystem_MapWidgetBase_generated_h
#error "MapSystem_MapWidgetBase.generated.h already included, missing '#pragma once' in MapSystem_MapWidgetBase.h"
#endif
#define SOLSTICEMINIMAP_MapSystem_MapWidgetBase_generated_h

#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_SPARSE_DATA
#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetScreenLocationFromWorld); \
	DECLARE_FUNCTION(execGetWorldLocationFromMousePosition); \
	DECLARE_FUNCTION(execPanForward); \
	DECLARE_FUNCTION(execPanRight); \
	DECLARE_FUNCTION(execResetDefaultZoom); \
	DECLARE_FUNCTION(execSetElementPosition); \
	DECLARE_FUNCTION(execUpdateElements); \
	DECLARE_FUNCTION(execZoomAtCanvasPosition); \
	DECLARE_FUNCTION(execZoomInOut);


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetScreenLocationFromWorld); \
	DECLARE_FUNCTION(execGetWorldLocationFromMousePosition); \
	DECLARE_FUNCTION(execPanForward); \
	DECLARE_FUNCTION(execPanRight); \
	DECLARE_FUNCTION(execResetDefaultZoom); \
	DECLARE_FUNCTION(execSetElementPosition); \
	DECLARE_FUNCTION(execUpdateElements); \
	DECLARE_FUNCTION(execZoomAtCanvasPosition); \
	DECLARE_FUNCTION(execZoomInOut);


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_EVENT_PARMS \
	struct MapSystem_MapWidgetBase_eventOnMapInitialized_Parms \
	{ \
		UMaterialInterface* Material; \
	};


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_CALLBACK_WRAPPERS
#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapSystem_MapWidgetBase(); \
	friend struct Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UMapSystem_MapWidgetBase, UMapSystemWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SolsticeMinimap"), NO_API) \
	DECLARE_SERIALIZER(UMapSystem_MapWidgetBase)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMapSystem_MapWidgetBase(); \
	friend struct Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UMapSystem_MapWidgetBase, UMapSystemWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SolsticeMinimap"), NO_API) \
	DECLARE_SERIALIZER(UMapSystem_MapWidgetBase)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapSystem_MapWidgetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapSystem_MapWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapSystem_MapWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapSystem_MapWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapSystem_MapWidgetBase(UMapSystem_MapWidgetBase&&); \
	NO_API UMapSystem_MapWidgetBase(const UMapSystem_MapWidgetBase&); \
public:


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapSystem_MapWidgetBase(UMapSystem_MapWidgetBase&&); \
	NO_API UMapSystem_MapWidgetBase(const UMapSystem_MapWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapSystem_MapWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapSystem_MapWidgetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMapSystem_MapWidgetBase)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_PRIVATE_PROPERTY_OFFSET
#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_12_PROLOG \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_EVENT_PARMS


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_SPARSE_DATA \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_RPC_WRAPPERS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_CALLBACK_WRAPPERS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_INCLASS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_SPARSE_DATA \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_CALLBACK_WRAPPERS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_INCLASS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOLSTICEMINIMAP_API UClass* StaticClass<class UMapSystem_MapWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
