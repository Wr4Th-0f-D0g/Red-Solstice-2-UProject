// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APrefabRandomizer;
class AActor;
class UPrefabricatorAsset;
struct FRandomStream;
class UPrefabricatorAssetInterface;
#ifdef PREFABRICATORRUNTIME_PrefabActor_generated_h
#error "PrefabActor.generated.h already included, missing '#pragma once' in PrefabActor.h"
#endif
#define PREFABRICATORRUNTIME_PrefabActor_generated_h

#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabActor_h_17_SPARSE_DATA
#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabActor_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPrefabAsset); \
	DECLARE_FUNCTION(execIsPrefabOutdated); \
	DECLARE_FUNCTION(execLoadPrefab); \
	DECLARE_FUNCTION(execRandomizeSeed); \
	DECLARE_FUNCTION(execSavePrefab); \
	DECLARE_FUNCTION(execSetPrefab);


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPrefabAsset); \
	DECLARE_FUNCTION(execIsPrefabOutdated); \
	DECLARE_FUNCTION(execLoadPrefab); \
	DECLARE_FUNCTION(execRandomizeSeed); \
	DECLARE_FUNCTION(execSavePrefab); \
	DECLARE_FUNCTION(execSetPrefab);


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPrefabActor(); \
	friend struct Z_Construct_UClass_APrefabActor_Statics; \
public: \
	DECLARE_CLASS(APrefabActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrefabricatorRuntime"), NO_API) \
	DECLARE_SERIALIZER(APrefabActor)


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabActor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPrefabActor(); \
	friend struct Z_Construct_UClass_APrefabActor_Statics; \
public: \
	DECLARE_CLASS(APrefabActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrefabricatorRuntime"), NO_API) \
	DECLARE_SERIALIZER(APrefabActor)


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabActor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APrefabActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APrefabActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrefabActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrefabActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrefabActor(APrefabActor&&); \
	NO_API APrefabActor(const APrefabActor&); \
public:


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrefabActor(APrefabActor&&); \
	NO_API APrefabActor(const APrefabActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrefabActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrefabActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APrefabActor)


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabActor_h_17_PRIVATE_PROPERTY_OFFSET
#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabActor_h_15_PROLOG
#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabActor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabActor_h_17_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabActor_h_17_SPARSE_DATA \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabActor_h_17_RPC_WRAPPERS \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabActor_h_17_INCLASS \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabActor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabActor_h_17_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabActor_h_17_SPARSE_DATA \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabActor_h_17_INCLASS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PREFABRICATORRUNTIME_API UClass* StaticClass<class APrefabActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_PrefabActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
