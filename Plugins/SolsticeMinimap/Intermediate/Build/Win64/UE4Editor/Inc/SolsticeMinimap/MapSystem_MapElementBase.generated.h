// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class UObject;
struct FLinearColor;
#ifdef SOLSTICEMINIMAP_MapSystem_MapElementBase_generated_h
#error "MapSystem_MapElementBase.generated.h already included, missing '#pragma once' in MapSystem_MapElementBase.h"
#endif
#define SOLSTICEMINIMAP_MapSystem_MapElementBase_generated_h

#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_SPARSE_DATA
#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDistanceFromPlayer); \
	DECLARE_FUNCTION(execGetPlayerCharacter); \
	DECLARE_FUNCTION(execOnHovered); \
	DECLARE_FUNCTION(execOnUnHovered);


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDistanceFromPlayer); \
	DECLARE_FUNCTION(execGetPlayerCharacter); \
	DECLARE_FUNCTION(execOnHovered); \
	DECLARE_FUNCTION(execOnUnHovered);


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_EVENT_PARMS \
	struct MapSystem_MapElementBase_eventOnElementIconChanged_Parms \
	{ \
		UObject* NewElementIcon; \
		FLinearColor Tint; \
	};


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_CALLBACK_WRAPPERS
#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapSystem_MapElementBase(); \
	friend struct Z_Construct_UClass_UMapSystem_MapElementBase_Statics; \
public: \
	DECLARE_CLASS(UMapSystem_MapElementBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SolsticeMinimap"), NO_API) \
	DECLARE_SERIALIZER(UMapSystem_MapElementBase)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMapSystem_MapElementBase(); \
	friend struct Z_Construct_UClass_UMapSystem_MapElementBase_Statics; \
public: \
	DECLARE_CLASS(UMapSystem_MapElementBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SolsticeMinimap"), NO_API) \
	DECLARE_SERIALIZER(UMapSystem_MapElementBase)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapSystem_MapElementBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapSystem_MapElementBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapSystem_MapElementBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapSystem_MapElementBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapSystem_MapElementBase(UMapSystem_MapElementBase&&); \
	NO_API UMapSystem_MapElementBase(const UMapSystem_MapElementBase&); \
public:


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapSystem_MapElementBase(UMapSystem_MapElementBase&&); \
	NO_API UMapSystem_MapElementBase(const UMapSystem_MapElementBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapSystem_MapElementBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapSystem_MapElementBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMapSystem_MapElementBase)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ParentActor() { return STRUCT_OFFSET(UMapSystem_MapElementBase, ParentActor); } \
	FORCEINLINE static uint32 __PPO__MapManager() { return STRUCT_OFFSET(UMapSystem_MapElementBase, MapManager); } \
	FORCEINLINE static uint32 __PPO__bIsElementSelected() { return STRUCT_OFFSET(UMapSystem_MapElementBase, bIsElementSelected); } \
	FORCEINLINE static uint32 __PPO__ElementHoveredIcon() { return STRUCT_OFFSET(UMapSystem_MapElementBase, ElementHoveredIcon); } \
	FORCEINLINE static uint32 __PPO__ElementSelectedIcon() { return STRUCT_OFFSET(UMapSystem_MapElementBase, ElementSelectedIcon); } \
	FORCEINLINE static uint32 __PPO__bAllowRotationChange() { return STRUCT_OFFSET(UMapSystem_MapElementBase, bAllowRotationChange); } \
	FORCEINLINE static uint32 __PPO__MapElementInfo() { return STRUCT_OFFSET(UMapSystem_MapElementBase, MapElementInfo); }


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_17_PROLOG \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_EVENT_PARMS


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_SPARSE_DATA \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_RPC_WRAPPERS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_CALLBACK_WRAPPERS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_INCLASS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_SPARSE_DATA \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_CALLBACK_WRAPPERS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_INCLASS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOLSTICEMINIMAP_API UClass* StaticClass<class UMapSystem_MapElementBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapSystem_MapElementBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
