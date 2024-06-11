// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDcxVehicleDifferentialData4W;
class UDcxVehicleDriveRawInput4W;
#ifdef DCXVEHICLE_DcxVehicleDriveComponent4W_generated_h
#error "DcxVehicleDriveComponent4W.generated.h already included, missing '#pragma once' in DcxVehicleDriveComponent4W.h"
#endif
#define DCXVEHICLE_DcxVehicleDriveComponent4W_generated_h

#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent4W_h_11_SPARSE_DATA
#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent4W_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDifferentialData); \
	DECLARE_FUNCTION(execGetRawInput4W); \
	DECLARE_FUNCTION(execSetDifferentialData);


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent4W_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDifferentialData); \
	DECLARE_FUNCTION(execGetRawInput4W); \
	DECLARE_FUNCTION(execSetDifferentialData);


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent4W_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDcxVehicleDriveComponent4W(); \
	friend struct Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics; \
public: \
	DECLARE_CLASS(UDcxVehicleDriveComponent4W, UDcxVehicleDriveComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DcxVehicle"), NO_API) \
	DECLARE_SERIALIZER(UDcxVehicleDriveComponent4W)


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent4W_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUDcxVehicleDriveComponent4W(); \
	friend struct Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics; \
public: \
	DECLARE_CLASS(UDcxVehicleDriveComponent4W, UDcxVehicleDriveComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DcxVehicle"), NO_API) \
	DECLARE_SERIALIZER(UDcxVehicleDriveComponent4W)


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent4W_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDcxVehicleDriveComponent4W(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDcxVehicleDriveComponent4W) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDcxVehicleDriveComponent4W); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDcxVehicleDriveComponent4W); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDcxVehicleDriveComponent4W(UDcxVehicleDriveComponent4W&&); \
	NO_API UDcxVehicleDriveComponent4W(const UDcxVehicleDriveComponent4W&); \
public:


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent4W_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDcxVehicleDriveComponent4W(UDcxVehicleDriveComponent4W&&); \
	NO_API UDcxVehicleDriveComponent4W(const UDcxVehicleDriveComponent4W&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDcxVehicleDriveComponent4W); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDcxVehicleDriveComponent4W); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDcxVehicleDriveComponent4W)


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent4W_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DifferentialData() { return STRUCT_OFFSET(UDcxVehicleDriveComponent4W, DifferentialData); } \
	FORCEINLINE static uint32 __PPO__AckermannGeometryAccuracy() { return STRUCT_OFFSET(UDcxVehicleDriveComponent4W, AckermannGeometryAccuracy); }


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent4W_h_9_PROLOG
#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent4W_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent4W_h_11_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent4W_h_11_SPARSE_DATA \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent4W_h_11_RPC_WRAPPERS \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent4W_h_11_INCLASS \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent4W_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent4W_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent4W_h_11_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent4W_h_11_SPARSE_DATA \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent4W_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent4W_h_11_INCLASS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent4W_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DCXVEHICLE_API UClass* StaticClass<class UDcxVehicleDriveComponent4W>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent4W_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
