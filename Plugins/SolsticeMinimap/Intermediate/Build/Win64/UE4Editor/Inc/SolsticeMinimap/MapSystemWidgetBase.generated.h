// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
struct FVector2D;
class ACharacter;
class UCanvasPanel;
class UWidget;
struct FRenderTargetMinimap;
#ifdef SOLSTICEMINIMAP_MapSystemWidgetBase_generated_h
#error "MapSystemWidgetBase.generated.h already included, missing '#pragma once' in MapSystemWidgetBase.h"
#endif
#define SOLSTICEMINIMAP_MapSystemWidgetBase_generated_h

#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_SPARSE_DATA
#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeTexture); \
	DECLARE_FUNCTION(execGetCanvasAlignment); \
	DECLARE_FUNCTION(execGetCanvasSize); \
	DECLARE_FUNCTION(execGetMapBounds); \
	DECLARE_FUNCTION(execGetPlayerCharacter); \
	DECLARE_FUNCTION(execGetPlayerPositionDecentralized); \
	DECLARE_FUNCTION(execSetCanvasProperties); \
	DECLARE_FUNCTION(execSetObserverPositionInCanvas); \
	DECLARE_FUNCTION(execSetPlayerPositionInCanvas);


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeTexture); \
	DECLARE_FUNCTION(execGetCanvasAlignment); \
	DECLARE_FUNCTION(execGetCanvasSize); \
	DECLARE_FUNCTION(execGetMapBounds); \
	DECLARE_FUNCTION(execGetPlayerCharacter); \
	DECLARE_FUNCTION(execGetPlayerPositionDecentralized); \
	DECLARE_FUNCTION(execSetCanvasProperties); \
	DECLARE_FUNCTION(execSetObserverPositionInCanvas); \
	DECLARE_FUNCTION(execSetPlayerPositionInCanvas);


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_EVENT_PARMS \
	struct MapSystemWidgetBase_eventCreateRenderTarget_Parms \
	{ \
		TArray<FRenderTargetMinimap> Targets; \
	};


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_CALLBACK_WRAPPERS
#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapSystemWidgetBase(); \
	friend struct Z_Construct_UClass_UMapSystemWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UMapSystemWidgetBase, UCommonActivatableWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SolsticeMinimap"), NO_API) \
	DECLARE_SERIALIZER(UMapSystemWidgetBase)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMapSystemWidgetBase(); \
	friend struct Z_Construct_UClass_UMapSystemWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UMapSystemWidgetBase, UCommonActivatableWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SolsticeMinimap"), NO_API) \
	DECLARE_SERIALIZER(UMapSystemWidgetBase)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapSystemWidgetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapSystemWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapSystemWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapSystemWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapSystemWidgetBase(UMapSystemWidgetBase&&); \
	NO_API UMapSystemWidgetBase(const UMapSystemWidgetBase&); \
public:


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapSystemWidgetBase(UMapSystemWidgetBase&&); \
	NO_API UMapSystemWidgetBase(const UMapSystemWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapSystemWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapSystemWidgetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMapSystemWidgetBase)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_PRIVATE_PROPERTY_OFFSET
#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_15_PROLOG \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_EVENT_PARMS


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_SPARSE_DATA \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_RPC_WRAPPERS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_CALLBACK_WRAPPERS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_INCLASS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_SPARSE_DATA \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_CALLBACK_WRAPPERS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_INCLASS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOLSTICEMINIMAP_API UClass* StaticClass<class UMapSystemWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystemWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
