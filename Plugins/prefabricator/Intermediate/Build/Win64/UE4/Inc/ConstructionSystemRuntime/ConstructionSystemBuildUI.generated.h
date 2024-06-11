// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UConstructionSystemComponent;
class UConstructionSystemUIAsset;
#ifdef CONSTRUCTIONSYSTEMRUNTIME_ConstructionSystemBuildUI_generated_h
#error "ConstructionSystemBuildUI.generated.h already included, missing '#pragma once' in ConstructionSystemBuildUI.h"
#endif
#define CONSTRUCTIONSYSTEMRUNTIME_ConstructionSystemBuildUI_generated_h

#define TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_SPARSE_DATA
#define TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_RPC_WRAPPERS
#define TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_EVENT_PARMS \
	struct ConstructionSystemBuildUI_eventSetConstructionSystem_Parms \
	{ \
		UConstructionSystemComponent* ConstructionSystem; \
	}; \
	struct ConstructionSystemBuildUI_eventSetUIAsset_Parms \
	{ \
		UConstructionSystemUIAsset* UIAsset; \
	};


#define TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_CALLBACK_WRAPPERS
#define TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConstructionSystemBuildUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConstructionSystemBuildUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConstructionSystemBuildUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstructionSystemBuildUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConstructionSystemBuildUI(UConstructionSystemBuildUI&&); \
	NO_API UConstructionSystemBuildUI(const UConstructionSystemBuildUI&); \
public:


#define TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConstructionSystemBuildUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConstructionSystemBuildUI(UConstructionSystemBuildUI&&); \
	NO_API UConstructionSystemBuildUI(const UConstructionSystemBuildUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConstructionSystemBuildUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstructionSystemBuildUI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConstructionSystemBuildUI)


#define TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUConstructionSystemBuildUI(); \
	friend struct Z_Construct_UClass_UConstructionSystemBuildUI_Statics; \
public: \
	DECLARE_CLASS(UConstructionSystemBuildUI, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ConstructionSystemRuntime"), NO_API) \
	DECLARE_SERIALIZER(UConstructionSystemBuildUI)


#define TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_GENERATED_UINTERFACE_BODY() \
	TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_GENERATED_UINTERFACE_BODY() \
	TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IConstructionSystemBuildUI() {} \
public: \
	typedef UConstructionSystemBuildUI UClassType; \
	typedef IConstructionSystemBuildUI ThisClass; \
	static void Execute_SetConstructionSystem(UObject* O, UConstructionSystemComponent* ConstructionSystem); \
	static void Execute_SetUIAsset(UObject* O, UConstructionSystemUIAsset* UIAsset); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IConstructionSystemBuildUI() {} \
public: \
	typedef UConstructionSystemBuildUI UClassType; \
	typedef IConstructionSystemBuildUI ThisClass; \
	static void Execute_SetConstructionSystem(UObject* O, UConstructionSystemComponent* ConstructionSystem); \
	static void Execute_SetUIAsset(UObject* O, UConstructionSystemUIAsset* UIAsset); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_9_PROLOG \
	TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_EVENT_PARMS


#define TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_SPARSE_DATA \
	TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_RPC_WRAPPERS \
	TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_CALLBACK_WRAPPERS \
	TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_SPARSE_DATA \
	TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_CALLBACK_WRAPPERS \
	TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONSTRUCTIONSYSTEMRUNTIME_API UClass* StaticClass<class UConstructionSystemBuildUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_prefabricator_Source_ConstructionSystemRuntime_Public_ConstructionSystemBuildUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
