// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrefabricatorAssetInterface;
class UPrefabricatorAssetCollection;
class UPrefabricatorAsset;
#ifdef PREFABRICATORRUNTIME_PrefabComponent_generated_h
#error "PrefabComponent.generated.h already included, missing '#pragma once' in PrefabComponent.h"
#endif
#define PREFABRICATORRUNTIME_PrefabComponent_generated_h

#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabComponent_h_12_SPARSE_DATA
#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPrefabAssetInterface); \
	DECLARE_FUNCTION(execGetPrefabCollection); \
	DECLARE_FUNCTION(execIsForcedStaticCollection); \
	DECLARE_FUNCTION(execLoadAsset);


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPrefabAssetInterface); \
	DECLARE_FUNCTION(execGetPrefabCollection); \
	DECLARE_FUNCTION(execIsForcedStaticCollection); \
	DECLARE_FUNCTION(execLoadAsset);


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPrefabComponent(); \
	friend struct Z_Construct_UClass_UPrefabComponent_Statics; \
public: \
	DECLARE_CLASS(UPrefabComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrefabricatorRuntime"), NO_API) \
	DECLARE_SERIALIZER(UPrefabComponent)


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUPrefabComponent(); \
	friend struct Z_Construct_UClass_UPrefabComponent_Statics; \
public: \
	DECLARE_CLASS(UPrefabComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrefabricatorRuntime"), NO_API) \
	DECLARE_SERIALIZER(UPrefabComponent)


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPrefabComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrefabComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPrefabComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrefabComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPrefabComponent(UPrefabComponent&&); \
	NO_API UPrefabComponent(const UPrefabComponent&); \
public:


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPrefabComponent(UPrefabComponent&&); \
	NO_API UPrefabComponent(const UPrefabComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPrefabComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrefabComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrefabComponent)


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabComponent_h_12_PRIVATE_PROPERTY_OFFSET
#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabComponent_h_10_PROLOG
#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabComponent_h_12_SPARSE_DATA \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabComponent_h_12_RPC_WRAPPERS \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabComponent_h_12_INCLASS \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabComponent_h_12_SPARSE_DATA \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabComponent_h_12_INCLASS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PREFABRICATORRUNTIME_API UClass* StaticClass<class UPrefabComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
