// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class USkeletalMeshComponent;
class UDcxVehicleWheelsComponent;
#ifdef DCXVEHICLE_DcxVehicle_generated_h
#error "DcxVehicle.generated.h already included, missing '#pragma once' in DcxVehicle.h"
#endif
#define DCXVEHICLE_DcxVehicle_generated_h

#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicle_h_12_SPARSE_DATA
#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicle_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDcxVehicleSetBasisVectors); \
	DECLARE_FUNCTION(execGetMesh); \
	DECLARE_FUNCTION(execGetVehicleWheels);


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDcxVehicleSetBasisVectors); \
	DECLARE_FUNCTION(execGetMesh); \
	DECLARE_FUNCTION(execGetVehicleWheels);


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicle_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADcxVehicle(); \
	friend struct Z_Construct_UClass_ADcxVehicle_Statics; \
public: \
	DECLARE_CLASS(ADcxVehicle, APawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DcxVehicle"), NO_API) \
	DECLARE_SERIALIZER(ADcxVehicle)


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicle_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADcxVehicle(); \
	friend struct Z_Construct_UClass_ADcxVehicle_Statics; \
public: \
	DECLARE_CLASS(ADcxVehicle, APawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DcxVehicle"), NO_API) \
	DECLARE_SERIALIZER(ADcxVehicle)


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicle_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADcxVehicle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADcxVehicle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADcxVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADcxVehicle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADcxVehicle(ADcxVehicle&&); \
	NO_API ADcxVehicle(const ADcxVehicle&); \
public:


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicle_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADcxVehicle(ADcxVehicle&&); \
	NO_API ADcxVehicle(const ADcxVehicle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADcxVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADcxVehicle); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADcxVehicle)


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicle_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ADcxVehicle, Mesh); } \
	FORCEINLINE static uint32 __PPO__VehicleWheels() { return STRUCT_OFFSET(ADcxVehicle, VehicleWheels); }


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicle_h_10_PROLOG
#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicle_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicle_h_12_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicle_h_12_SPARSE_DATA \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicle_h_12_RPC_WRAPPERS \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicle_h_12_INCLASS \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicle_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicle_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicle_h_12_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicle_h_12_SPARSE_DATA \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicle_h_12_INCLASS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicle_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DCXVEHICLE_API UClass* StaticClass<class ADcxVehicle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
