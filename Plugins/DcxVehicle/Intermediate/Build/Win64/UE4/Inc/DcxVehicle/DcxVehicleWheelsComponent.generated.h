// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDcxVehicleWheelsRawInput;
struct FDcxVehicleSuspensionData;
class UDcxVehicleTire;
struct FDcxVehicleWheelData;
struct FVector;
struct FDcxVehicleWheelState;
struct FDcxAnalogControlArray;
struct FDcxGear;
struct FNavAvoidanceMask;
#ifdef DCXVEHICLE_DcxVehicleWheelsComponent_generated_h
#error "DcxVehicleWheelsComponent.generated.h already included, missing '#pragma once' in DcxVehicleWheelsComponent.h"
#endif
#define DCXVEHICLE_DcxVehicleWheelsComponent_generated_h

#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_SPARSE_DATA
#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_RPC_WRAPPERS \
	virtual bool ServerUpdateState_Validate(FDcxAnalogControlArray const& , FDcxGear const& , FDcxGear const& ); \
	virtual void ServerUpdateState_Implementation(FDcxAnalogControlArray const& AnalogControls, FDcxGear const& CurrentGear, FDcxGear const& TargetGear); \
 \
	DECLARE_FUNCTION(execDisableWheel); \
	DECLARE_FUNCTION(execEnableAvoidance); \
	DECLARE_FUNCTION(execEnableWheel); \
	DECLARE_FUNCTION(execGetAnalogControl); \
	DECLARE_FUNCTION(execGetBoneName); \
	DECLARE_FUNCTION(execGetChassisMass); \
	DECLARE_FUNCTION(execGetForwardSpeed); \
	DECLARE_FUNCTION(execGetNumWheels); \
	DECLARE_FUNCTION(execGetRawInput); \
	DECLARE_FUNCTION(execGetSuspensionData); \
	DECLARE_FUNCTION(execGetTire); \
	DECLARE_FUNCTION(execGetWheelData); \
	DECLARE_FUNCTION(execGetWheelOffset); \
	DECLARE_FUNCTION(execGetWheelRotationAngle); \
	DECLARE_FUNCTION(execGetWheelRotationSpeed); \
	DECLARE_FUNCTION(execGetWheelState); \
	DECLARE_FUNCTION(execIsWheelDisabled); \
	DECLARE_FUNCTION(execServerUpdateState); \
	DECLARE_FUNCTION(execSetAvoidanceGroup); \
	DECLARE_FUNCTION(execSetChassisMass); \
	DECLARE_FUNCTION(execSetGroupsToAvoid); \
	DECLARE_FUNCTION(execSetGroupsToIgnore); \
	DECLARE_FUNCTION(execSetSuspensionData); \
	DECLARE_FUNCTION(execSetTire); \
	DECLARE_FUNCTION(execSetWheelData); \
	DECLARE_FUNCTION(execSetWheelOffset);


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdateState_Validate(FDcxAnalogControlArray const& , FDcxGear const& , FDcxGear const& ); \
	virtual void ServerUpdateState_Implementation(FDcxAnalogControlArray const& AnalogControls, FDcxGear const& CurrentGear, FDcxGear const& TargetGear); \
 \
	DECLARE_FUNCTION(execDisableWheel); \
	DECLARE_FUNCTION(execEnableAvoidance); \
	DECLARE_FUNCTION(execEnableWheel); \
	DECLARE_FUNCTION(execGetAnalogControl); \
	DECLARE_FUNCTION(execGetBoneName); \
	DECLARE_FUNCTION(execGetChassisMass); \
	DECLARE_FUNCTION(execGetForwardSpeed); \
	DECLARE_FUNCTION(execGetNumWheels); \
	DECLARE_FUNCTION(execGetRawInput); \
	DECLARE_FUNCTION(execGetSuspensionData); \
	DECLARE_FUNCTION(execGetTire); \
	DECLARE_FUNCTION(execGetWheelData); \
	DECLARE_FUNCTION(execGetWheelOffset); \
	DECLARE_FUNCTION(execGetWheelRotationAngle); \
	DECLARE_FUNCTION(execGetWheelRotationSpeed); \
	DECLARE_FUNCTION(execGetWheelState); \
	DECLARE_FUNCTION(execIsWheelDisabled); \
	DECLARE_FUNCTION(execServerUpdateState); \
	DECLARE_FUNCTION(execSetAvoidanceGroup); \
	DECLARE_FUNCTION(execSetChassisMass); \
	DECLARE_FUNCTION(execSetGroupsToAvoid); \
	DECLARE_FUNCTION(execSetGroupsToIgnore); \
	DECLARE_FUNCTION(execSetSuspensionData); \
	DECLARE_FUNCTION(execSetTire); \
	DECLARE_FUNCTION(execSetWheelData); \
	DECLARE_FUNCTION(execSetWheelOffset);


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_EVENT_PARMS \
	struct DcxVehicleWheelsComponent_eventServerUpdateState_Parms \
	{ \
		FDcxAnalogControlArray AnalogControls; \
		FDcxGear CurrentGear; \
		FDcxGear TargetGear; \
	};


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_CALLBACK_WRAPPERS
#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDcxVehicleWheelsComponent(); \
	friend struct Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics; \
public: \
	DECLARE_CLASS(UDcxVehicleWheelsComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DcxVehicle"), NO_API) \
	DECLARE_SERIALIZER(UDcxVehicleWheelsComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UDcxVehicleWheelsComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedState=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUDcxVehicleWheelsComponent(); \
	friend struct Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics; \
public: \
	DECLARE_CLASS(UDcxVehicleWheelsComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DcxVehicle"), NO_API) \
	DECLARE_SERIALIZER(UDcxVehicleWheelsComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UDcxVehicleWheelsComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedState=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDcxVehicleWheelsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDcxVehicleWheelsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDcxVehicleWheelsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDcxVehicleWheelsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDcxVehicleWheelsComponent(UDcxVehicleWheelsComponent&&); \
	NO_API UDcxVehicleWheelsComponent(const UDcxVehicleWheelsComponent&); \
public:


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDcxVehicleWheelsComponent(UDcxVehicleWheelsComponent&&); \
	NO_API UDcxVehicleWheelsComponent(const UDcxVehicleWheelsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDcxVehicleWheelsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDcxVehicleWheelsComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDcxVehicleWheelsComponent)


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChassisMass() { return STRUCT_OFFSET(UDcxVehicleWheelsComponent, ChassisMass); } \
	FORCEINLINE static uint32 __PPO__InertiaTensorScale() { return STRUCT_OFFSET(UDcxVehicleWheelsComponent, InertiaTensorScale); } \
	FORCEINLINE static uint32 __PPO__WheelConfigurations() { return STRUCT_OFFSET(UDcxVehicleWheelsComponent, WheelConfigurations); } \
	FORCEINLINE static uint32 __PPO__TireLoadFilter() { return STRUCT_OFFSET(UDcxVehicleWheelsComponent, TireLoadFilter); } \
	FORCEINLINE static uint32 __PPO__bUseAvoidance() { return STRUCT_OFFSET(UDcxVehicleWheelsComponent, bUseAvoidance); } \
	FORCEINLINE static uint32 __PPO__AvoidanceWeight() { return STRUCT_OFFSET(UDcxVehicleWheelsComponent, AvoidanceWeight); } \
	FORCEINLINE static uint32 __PPO__AvoidanceUID() { return STRUCT_OFFSET(UDcxVehicleWheelsComponent, AvoidanceUID); } \
	FORCEINLINE static uint32 __PPO__AvoidanceGroup() { return STRUCT_OFFSET(UDcxVehicleWheelsComponent, AvoidanceGroup); } \
	FORCEINLINE static uint32 __PPO__GroupsToAvoid() { return STRUCT_OFFSET(UDcxVehicleWheelsComponent, GroupsToAvoid); } \
	FORCEINLINE static uint32 __PPO__GroupsToIgnore() { return STRUCT_OFFSET(UDcxVehicleWheelsComponent, GroupsToIgnore); } \
	FORCEINLINE static uint32 __PPO__bRecreateRequired() { return STRUCT_OFFSET(UDcxVehicleWheelsComponent, bRecreateRequired); } \
	FORCEINLINE static uint32 __PPO__RawInput() { return STRUCT_OFFSET(UDcxVehicleWheelsComponent, RawInput); } \
	FORCEINLINE static uint32 __PPO__SmoothAnalogControls() { return STRUCT_OFFSET(UDcxVehicleWheelsComponent, SmoothAnalogControls); } \
	FORCEINLINE static uint32 __PPO__ReplicatedState() { return STRUCT_OFFSET(UDcxVehicleWheelsComponent, ReplicatedState); } \
	FORCEINLINE static uint32 __PPO__bWasAvoidanceUpdated() { return STRUCT_OFFSET(UDcxVehicleWheelsComponent, bWasAvoidanceUpdated); } \
	FORCEINLINE static uint32 __PPO__AvoidanceVelocity() { return STRUCT_OFFSET(UDcxVehicleWheelsComponent, AvoidanceVelocity); } \
	FORCEINLINE static uint32 __PPO__AvoidanceLockVelocity() { return STRUCT_OFFSET(UDcxVehicleWheelsComponent, AvoidanceLockVelocity); } \
	FORCEINLINE static uint32 __PPO__AvoidanceLockTimer() { return STRUCT_OFFSET(UDcxVehicleWheelsComponent, AvoidanceLockTimer); }


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_21_PROLOG \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_EVENT_PARMS


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_SPARSE_DATA \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_RPC_WRAPPERS \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_CALLBACK_WRAPPERS \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_INCLASS \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_SPARSE_DATA \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_CALLBACK_WRAPPERS \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_INCLASS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DCXVEHICLE_API UClass* StaticClass<class UDcxVehicleWheelsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_DcxVehicle_Source_DcxVehicle_Public_DcxVehicleWheelsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
