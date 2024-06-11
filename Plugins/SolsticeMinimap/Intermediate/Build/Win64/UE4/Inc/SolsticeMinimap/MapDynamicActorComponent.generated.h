// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
class UTexture2D;
struct FLinearColor;
#ifdef SOLSTICEMINIMAP_MapDynamicActorComponent_generated_h
#error "MapDynamicActorComponent.generated.h already included, missing '#pragma once' in MapDynamicActorComponent.h"
#endif
#define SOLSTICEMINIMAP_MapDynamicActorComponent_generated_h

#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_SPARSE_DATA
#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_RPC_WRAPPERS \
	virtual void ServerPingLocation_Implementation(FVector2D NewPingLocation); \
	virtual void ServerRemoveMapLeaderPoint_Implementation(bool bAllPoints); \
	virtual void ServerSetMapLeaderPoint_Implementation(FVector2D MapLeaderPoint); \
 \
	DECLARE_FUNCTION(execAddToMapSystem); \
	DECLARE_FUNCTION(execPingLocation); \
	DECLARE_FUNCTION(execRemoveIcon); \
	DECLARE_FUNCTION(execRemoveMapLeaderPoint); \
	DECLARE_FUNCTION(execServerPingLocation); \
	DECLARE_FUNCTION(execServerRemoveMapLeaderPoint); \
	DECLARE_FUNCTION(execServerSetMapLeaderPoint); \
	DECLARE_FUNCTION(execSetIconRadius); \
	DECLARE_FUNCTION(execSetIconTexture); \
	DECLARE_FUNCTION(execSetIconTint); \
	DECLARE_FUNCTION(execSetMapLeaderPoint); \
	DECLARE_FUNCTION(execSetMinimapIconAlwaysVisible); \
	DECLARE_FUNCTION(execTryAddToMapSystem);


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerPingLocation_Implementation(FVector2D NewPingLocation); \
	virtual void ServerRemoveMapLeaderPoint_Implementation(bool bAllPoints); \
	virtual void ServerSetMapLeaderPoint_Implementation(FVector2D MapLeaderPoint); \
 \
	DECLARE_FUNCTION(execAddToMapSystem); \
	DECLARE_FUNCTION(execPingLocation); \
	DECLARE_FUNCTION(execRemoveIcon); \
	DECLARE_FUNCTION(execRemoveMapLeaderPoint); \
	DECLARE_FUNCTION(execServerPingLocation); \
	DECLARE_FUNCTION(execServerRemoveMapLeaderPoint); \
	DECLARE_FUNCTION(execServerSetMapLeaderPoint); \
	DECLARE_FUNCTION(execSetIconRadius); \
	DECLARE_FUNCTION(execSetIconTexture); \
	DECLARE_FUNCTION(execSetIconTint); \
	DECLARE_FUNCTION(execSetMapLeaderPoint); \
	DECLARE_FUNCTION(execSetMinimapIconAlwaysVisible); \
	DECLARE_FUNCTION(execTryAddToMapSystem);


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_EVENT_PARMS \
	struct MapDynamicActorComponent_eventServerPingLocation_Parms \
	{ \
		FVector2D NewPingLocation; \
	}; \
	struct MapDynamicActorComponent_eventServerRemoveMapLeaderPoint_Parms \
	{ \
		bool bAllPoints; \
	}; \
	struct MapDynamicActorComponent_eventServerSetMapLeaderPoint_Parms \
	{ \
		FVector2D MapLeaderPoint; \
	};


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_CALLBACK_WRAPPERS
#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapDynamicActorComponent(); \
	friend struct Z_Construct_UClass_UMapDynamicActorComponent_Statics; \
public: \
	DECLARE_CLASS(UMapDynamicActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SolsticeMinimap"), NO_API) \
	DECLARE_SERIALIZER(UMapDynamicActorComponent)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMapDynamicActorComponent(); \
	friend struct Z_Construct_UClass_UMapDynamicActorComponent_Statics; \
public: \
	DECLARE_CLASS(UMapDynamicActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SolsticeMinimap"), NO_API) \
	DECLARE_SERIALIZER(UMapDynamicActorComponent)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapDynamicActorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapDynamicActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapDynamicActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapDynamicActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapDynamicActorComponent(UMapDynamicActorComponent&&); \
	NO_API UMapDynamicActorComponent(const UMapDynamicActorComponent&); \
public:


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapDynamicActorComponent(UMapDynamicActorComponent&&); \
	NO_API UMapDynamicActorComponent(const UMapDynamicActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapDynamicActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapDynamicActorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapDynamicActorComponent)


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_12_PROLOG \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_EVENT_PARMS


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_SPARSE_DATA \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_RPC_WRAPPERS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_CALLBACK_WRAPPERS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_INCLASS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_SPARSE_DATA \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_CALLBACK_WRAPPERS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_INCLASS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOLSTICEMINIMAP_API UClass* StaticClass<class UMapDynamicActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_MapDynamicActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
