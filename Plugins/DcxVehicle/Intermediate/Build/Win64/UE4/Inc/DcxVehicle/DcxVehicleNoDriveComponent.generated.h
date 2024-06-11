// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDcxVehicleNoDriveRawInput;
#ifdef DCXVEHICLE_DcxVehicleNoDriveComponent_generated_h
#error "DcxVehicleNoDriveComponent.generated.h already included, missing '#pragma once' in DcxVehicleNoDriveComponent.h"
#endif
#define DCXVEHICLE_DcxVehicleNoDriveComponent_generated_h

#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleNoDriveComponent_h_10_SPARSE_DATA
#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleNoDriveComponent_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBrakeTorque); \
	DECLARE_FUNCTION(execGetDriveTorque); \
	DECLARE_FUNCTION(execGetRawInputND); \
	DECLARE_FUNCTION(execGetSteerAngle); \
	DECLARE_FUNCTION(execSetBrakeTorque); \
	DECLARE_FUNCTION(execSetDriveTorque); \
	DECLARE_FUNCTION(execSetSteerAngle);


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleNoDriveComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBrakeTorque); \
	DECLARE_FUNCTION(execGetDriveTorque); \
	DECLARE_FUNCTION(execGetRawInputND); \
	DECLARE_FUNCTION(execGetSteerAngle); \
	DECLARE_FUNCTION(execSetBrakeTorque); \
	DECLARE_FUNCTION(execSetDriveTorque); \
	DECLARE_FUNCTION(execSetSteerAngle);


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleNoDriveComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDcxVehicleNoDriveComponent(); \
	friend struct Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics; \
public: \
	DECLARE_CLASS(UDcxVehicleNoDriveComponent, UDcxVehicleWheelsComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DcxVehicle"), NO_API) \
	DECLARE_SERIALIZER(UDcxVehicleNoDriveComponent)


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleNoDriveComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUDcxVehicleNoDriveComponent(); \
	friend struct Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics; \
public: \
	DECLARE_CLASS(UDcxVehicleNoDriveComponent, UDcxVehicleWheelsComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DcxVehicle"), NO_API) \
	DECLARE_SERIALIZER(UDcxVehicleNoDriveComponent)


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleNoDriveComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDcxVehicleNoDriveComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDcxVehicleNoDriveComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDcxVehicleNoDriveComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDcxVehicleNoDriveComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDcxVehicleNoDriveComponent(UDcxVehicleNoDriveComponent&&); \
	NO_API UDcxVehicleNoDriveComponent(const UDcxVehicleNoDriveComponent&); \
public:


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleNoDriveComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDcxVehicleNoDriveComponent(UDcxVehicleNoDriveComponent&&); \
	NO_API UDcxVehicleNoDriveComponent(const UDcxVehicleNoDriveComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDcxVehicleNoDriveComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDcxVehicleNoDriveComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDcxVehicleNoDriveComponent)


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleNoDriveComponent_h_10_PRIVATE_PROPERTY_OFFSET
#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleNoDriveComponent_h_8_PROLOG
#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleNoDriveComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleNoDriveComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleNoDriveComponent_h_10_SPARSE_DATA \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleNoDriveComponent_h_10_RPC_WRAPPERS \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleNoDriveComponent_h_10_INCLASS \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleNoDriveComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleNoDriveComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleNoDriveComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleNoDriveComponent_h_10_SPARSE_DATA \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleNoDriveComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleNoDriveComponent_h_10_INCLASS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleNoDriveComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DCXVEHICLE_API UClass* StaticClass<class UDcxVehicleNoDriveComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleNoDriveComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
