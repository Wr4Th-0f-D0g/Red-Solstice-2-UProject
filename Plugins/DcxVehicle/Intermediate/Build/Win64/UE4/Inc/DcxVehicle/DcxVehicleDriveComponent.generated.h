// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDcxVehicleClutchData;
struct FDcxVehicleEngineData;
struct FDcxVehicleGearboxData;
#ifdef DCXVEHICLE_DcxVehicleDriveComponent_generated_h
#error "DcxVehicleDriveComponent.generated.h already included, missing '#pragma once' in DcxVehicleDriveComponent.h"
#endif
#define DCXVEHICLE_DcxVehicleDriveComponent_generated_h

#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent_h_13_SPARSE_DATA
#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetClutchData); \
	DECLARE_FUNCTION(execGetCurrentGear); \
	DECLARE_FUNCTION(execGetEngineData); \
	DECLARE_FUNCTION(execGetEngineRotationSpeed); \
	DECLARE_FUNCTION(execGetGearboxData); \
	DECLARE_FUNCTION(execGetGearboxType); \
	DECLARE_FUNCTION(execGetTargetGear); \
	DECLARE_FUNCTION(execSetClutchData); \
	DECLARE_FUNCTION(execSetEngineData); \
	DECLARE_FUNCTION(execSetEngineRotationSpeed); \
	DECLARE_FUNCTION(execSetGearboxData); \
	DECLARE_FUNCTION(execSetGearboxType); \
	DECLARE_FUNCTION(execSetTargetGear);


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetClutchData); \
	DECLARE_FUNCTION(execGetCurrentGear); \
	DECLARE_FUNCTION(execGetEngineData); \
	DECLARE_FUNCTION(execGetEngineRotationSpeed); \
	DECLARE_FUNCTION(execGetGearboxData); \
	DECLARE_FUNCTION(execGetGearboxType); \
	DECLARE_FUNCTION(execGetTargetGear); \
	DECLARE_FUNCTION(execSetClutchData); \
	DECLARE_FUNCTION(execSetEngineData); \
	DECLARE_FUNCTION(execSetEngineRotationSpeed); \
	DECLARE_FUNCTION(execSetGearboxData); \
	DECLARE_FUNCTION(execSetGearboxType); \
	DECLARE_FUNCTION(execSetTargetGear);


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDcxVehicleDriveComponent(); \
	friend struct Z_Construct_UClass_UDcxVehicleDriveComponent_Statics; \
public: \
	DECLARE_CLASS(UDcxVehicleDriveComponent, UDcxVehicleWheelsComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DcxVehicle"), NO_API) \
	DECLARE_SERIALIZER(UDcxVehicleDriveComponent)


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDcxVehicleDriveComponent(); \
	friend struct Z_Construct_UClass_UDcxVehicleDriveComponent_Statics; \
public: \
	DECLARE_CLASS(UDcxVehicleDriveComponent, UDcxVehicleWheelsComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DcxVehicle"), NO_API) \
	DECLARE_SERIALIZER(UDcxVehicleDriveComponent)


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDcxVehicleDriveComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDcxVehicleDriveComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDcxVehicleDriveComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDcxVehicleDriveComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDcxVehicleDriveComponent(UDcxVehicleDriveComponent&&); \
	NO_API UDcxVehicleDriveComponent(const UDcxVehicleDriveComponent&); \
public:


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDcxVehicleDriveComponent(UDcxVehicleDriveComponent&&); \
	NO_API UDcxVehicleDriveComponent(const UDcxVehicleDriveComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDcxVehicleDriveComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDcxVehicleDriveComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDcxVehicleDriveComponent)


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EngineData() { return STRUCT_OFFSET(UDcxVehicleDriveComponent, EngineData); } \
	FORCEINLINE static uint32 __PPO__GearboxData() { return STRUCT_OFFSET(UDcxVehicleDriveComponent, GearboxData); } \
	FORCEINLINE static uint32 __PPO__ClutchData() { return STRUCT_OFFSET(UDcxVehicleDriveComponent, ClutchData); }


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent_h_11_PROLOG
#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent_h_13_SPARSE_DATA \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent_h_13_RPC_WRAPPERS \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent_h_13_INCLASS \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent_h_13_SPARSE_DATA \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent_h_13_INCLASS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DCXVEHICLE_API UClass* StaticClass<class UDcxVehicleDriveComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleDriveComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
