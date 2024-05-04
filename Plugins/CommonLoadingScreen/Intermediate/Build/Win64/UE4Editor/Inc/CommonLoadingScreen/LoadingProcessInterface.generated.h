// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONLOADINGSCREEN_LoadingProcessInterface_generated_h
#error "LoadingProcessInterface.generated.h already included, missing '#pragma once' in LoadingProcessInterface.h"
#endif
#define COMMONLOADINGSCREEN_LoadingProcessInterface_generated_h

#define TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_8_SPARSE_DATA
#define TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_8_RPC_WRAPPERS
#define TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadingProcessInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadingProcessInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadingProcessInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadingProcessInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadingProcessInterface(ULoadingProcessInterface&&); \
	NO_API ULoadingProcessInterface(const ULoadingProcessInterface&); \
public:


#define TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadingProcessInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadingProcessInterface(ULoadingProcessInterface&&); \
	NO_API ULoadingProcessInterface(const ULoadingProcessInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadingProcessInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadingProcessInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadingProcessInterface)


#define TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULoadingProcessInterface(); \
	friend struct Z_Construct_UClass_ULoadingProcessInterface_Statics; \
public: \
	DECLARE_CLASS(ULoadingProcessInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CommonLoadingScreen"), NO_API) \
	DECLARE_SERIALIZER(ULoadingProcessInterface)


#define TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_8_GENERATED_UINTERFACE_BODY() \
	TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_8_GENERATED_UINTERFACE_BODY() \
	TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILoadingProcessInterface() {} \
public: \
	typedef ULoadingProcessInterface UClassType; \
	typedef ILoadingProcessInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~ILoadingProcessInterface() {} \
public: \
	typedef ULoadingProcessInterface UClassType; \
	typedef ILoadingProcessInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_6_PROLOG
#define TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_8_SPARSE_DATA \
	TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_8_RPC_WRAPPERS \
	TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_8_SPARSE_DATA \
	TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONLOADINGSCREEN_API UClass* StaticClass<class ULoadingProcessInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
