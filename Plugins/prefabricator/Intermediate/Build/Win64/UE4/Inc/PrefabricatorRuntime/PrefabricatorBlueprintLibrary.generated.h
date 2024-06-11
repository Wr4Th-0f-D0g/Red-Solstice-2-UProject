// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APrefabActor;
struct FRandomStream;
class UObject;
class UPrefabricatorAssetInterface;
struct FTransform;
#ifdef PREFABRICATORRUNTIME_PrefabricatorBlueprintLibrary_generated_h
#error "PrefabricatorBlueprintLibrary.generated.h already included, missing '#pragma once' in PrefabricatorBlueprintLibrary.h"
#endif
#define PREFABRICATORRUNTIME_PrefabricatorBlueprintLibrary_generated_h

#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabricatorBlueprintLibrary_h_15_SPARSE_DATA
#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabricatorBlueprintLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllAttachedActors); \
	DECLARE_FUNCTION(execRandomizePrefab); \
	DECLARE_FUNCTION(execSpawnPrefab);


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabricatorBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllAttachedActors); \
	DECLARE_FUNCTION(execRandomizePrefab); \
	DECLARE_FUNCTION(execSpawnPrefab);


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabricatorBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPrefabricatorBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UPrefabricatorBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UPrefabricatorBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PrefabricatorRuntime"), NO_API) \
	DECLARE_SERIALIZER(UPrefabricatorBlueprintLibrary)


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabricatorBlueprintLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPrefabricatorBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UPrefabricatorBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UPrefabricatorBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PrefabricatorRuntime"), NO_API) \
	DECLARE_SERIALIZER(UPrefabricatorBlueprintLibrary)


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabricatorBlueprintLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPrefabricatorBlueprintLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrefabricatorBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPrefabricatorBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrefabricatorBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPrefabricatorBlueprintLibrary(UPrefabricatorBlueprintLibrary&&); \
	NO_API UPrefabricatorBlueprintLibrary(const UPrefabricatorBlueprintLibrary&); \
public:


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabricatorBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPrefabricatorBlueprintLibrary(UPrefabricatorBlueprintLibrary&&); \
	NO_API UPrefabricatorBlueprintLibrary(const UPrefabricatorBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPrefabricatorBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrefabricatorBlueprintLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPrefabricatorBlueprintLibrary)


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabricatorBlueprintLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabricatorBlueprintLibrary_h_13_PROLOG
#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabricatorBlueprintLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabricatorBlueprintLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabricatorBlueprintLibrary_h_15_SPARSE_DATA \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabricatorBlueprintLibrary_h_15_RPC_WRAPPERS \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabricatorBlueprintLibrary_h_15_INCLASS \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabricatorBlueprintLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabricatorBlueprintLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabricatorBlueprintLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabricatorBlueprintLibrary_h_15_SPARSE_DATA \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabricatorBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabricatorBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabricatorBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PREFABRICATORRUNTIME_API UClass* StaticClass<class UPrefabricatorBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabricatorBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
