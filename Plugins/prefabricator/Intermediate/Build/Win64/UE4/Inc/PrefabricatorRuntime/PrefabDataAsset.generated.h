// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrefabricatorAsset;
struct FGameplayTag;
struct FPrefabInfo;
#ifdef PREFABRICATORRUNTIME_PrefabDataAsset_generated_h
#error "PrefabDataAsset.generated.h already included, missing '#pragma once' in PrefabDataAsset.h"
#endif
#define PREFABRICATORRUNTIME_PrefabDataAsset_generated_h

#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabDataAsset_h_12_SPARSE_DATA
#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabDataAsset_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddPrefabAsset); \
	DECLARE_FUNCTION(execClearAll); \
	DECLARE_FUNCTION(execGetValidPrefabs);


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabDataAsset_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddPrefabAsset); \
	DECLARE_FUNCTION(execClearAll); \
	DECLARE_FUNCTION(execGetValidPrefabs);


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabDataAsset_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPrefabDataAsset(); \
	friend struct Z_Construct_UClass_UPrefabDataAsset_Statics; \
public: \
	DECLARE_CLASS(UPrefabDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PrefabricatorRuntime"), NO_API) \
	DECLARE_SERIALIZER(UPrefabDataAsset)


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabDataAsset_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUPrefabDataAsset(); \
	friend struct Z_Construct_UClass_UPrefabDataAsset_Statics; \
public: \
	DECLARE_CLASS(UPrefabDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PrefabricatorRuntime"), NO_API) \
	DECLARE_SERIALIZER(UPrefabDataAsset)


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabDataAsset_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPrefabDataAsset(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrefabDataAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPrefabDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrefabDataAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPrefabDataAsset(UPrefabDataAsset&&); \
	NO_API UPrefabDataAsset(const UPrefabDataAsset&); \
public:


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabDataAsset_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPrefabDataAsset(UPrefabDataAsset&&); \
	NO_API UPrefabDataAsset(const UPrefabDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPrefabDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrefabDataAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPrefabDataAsset)


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabDataAsset_h_12_PRIVATE_PROPERTY_OFFSET
#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabDataAsset_h_10_PROLOG
#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabDataAsset_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabDataAsset_h_12_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabDataAsset_h_12_SPARSE_DATA \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabDataAsset_h_12_RPC_WRAPPERS \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabDataAsset_h_12_INCLASS \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabDataAsset_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabDataAsset_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabDataAsset_h_12_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabDataAsset_h_12_SPARSE_DATA \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabDataAsset_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabDataAsset_h_12_INCLASS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabDataAsset_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PREFABRICATORRUNTIME_API UClass* StaticClass<class UPrefabDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabDataAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
