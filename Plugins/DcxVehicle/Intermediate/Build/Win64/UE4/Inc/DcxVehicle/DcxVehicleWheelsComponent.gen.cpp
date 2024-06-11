// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleWheelsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleWheelsComponent() {}
// Cross Module References
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleWheelsComponent_NoRegister();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleWheelsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleWheelsRawInput_NoRegister();
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleSuspensionData();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleTire_NoRegister();
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleWheelData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleWheelState();
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxAnalogControlArray();
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxGear();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAvoidanceMask();
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration();
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData();
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate();
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleDriveState();
	ENGINE_API UClass* Z_Construct_UClass_URVOAvoidanceInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execDisableWheel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableWheel(Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execEnableAvoidance)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableAvoidance(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execEnableWheel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableWheel(Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execGetAnalogControl)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Control);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAnalogControl(Z_Param_Control);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execGetBoneName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetBoneName(Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execGetChassisMass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetChassisMass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execGetForwardSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetForwardSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execGetNumWheels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumWheels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execGetRawInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDcxVehicleWheelsRawInput**)Z_Param__Result=P_THIS->GetRawInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execGetSuspensionData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDcxVehicleSuspensionData*)Z_Param__Result=P_THIS->GetSuspensionData(Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execGetTire)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDcxVehicleTire**)Z_Param__Result=P_THIS->GetTire(Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execGetWheelData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDcxVehicleWheelData*)Z_Param__Result=P_THIS->GetWheelData(Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execGetWheelOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWheelOffset(Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execGetWheelRotationAngle)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWheelRotationAngle(Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execGetWheelRotationSpeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWheelRotationSpeed(Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execGetWheelState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_GET_STRUCT_REF(FDcxVehicleWheelState,Z_Param_Out_WheelState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWheelState(Z_Param_WheelIndex,Z_Param_Out_WheelState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execIsWheelDisabled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWheelDisabled(Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execServerUpdateState)
	{
		P_GET_STRUCT(FDcxAnalogControlArray,Z_Param_AnalogControls);
		P_GET_STRUCT(FDcxGear,Z_Param_CurrentGear);
		P_GET_STRUCT(FDcxGear,Z_Param_TargetGear);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdateState_Validate(Z_Param_AnalogControls,Z_Param_CurrentGear,Z_Param_TargetGear))
		{
			RPC_ValidateFailed(TEXT("ServerUpdateState_Validate"));
			return;
		}
		P_THIS->ServerUpdateState_Implementation(Z_Param_AnalogControls,Z_Param_CurrentGear,Z_Param_TargetGear);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execSetAvoidanceGroup)
	{
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_Mask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAvoidanceGroup(Z_Param_Out_Mask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execSetChassisMass)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Mass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChassisMass(Z_Param_Mass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execSetGroupsToAvoid)
	{
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_Mask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGroupsToAvoid(Z_Param_Out_Mask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execSetGroupsToIgnore)
	{
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_Mask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGroupsToIgnore(Z_Param_Out_Mask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execSetSuspensionData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_GET_STRUCT(FDcxVehicleSuspensionData,Z_Param_NewSuspensionData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSuspensionData(Z_Param_WheelIndex,Z_Param_NewSuspensionData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execSetTire)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelId);
		P_GET_OBJECT(UDcxVehicleTire,Z_Param_NewTire);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTire(Z_Param_WheelId,Z_Param_NewTire);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execSetWheelData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_GET_STRUCT(FDcxVehicleWheelData,Z_Param_NewWheelData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWheelData(Z_Param_WheelIndex,Z_Param_NewWheelData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsComponent::execSetWheelOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_GET_STRUCT(FVector,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWheelOffset(Z_Param_WheelIndex,Z_Param_Offset);
		P_NATIVE_END;
	}
	static FName NAME_UDcxVehicleWheelsComponent_ServerUpdateState = FName(TEXT("ServerUpdateState"));
	void UDcxVehicleWheelsComponent::ServerUpdateState(FDcxAnalogControlArray const& AnalogControls, FDcxGear const& CurrentGear, FDcxGear const& TargetGear)
	{
		DcxVehicleWheelsComponent_eventServerUpdateState_Parms Parms;
		Parms.AnalogControls=AnalogControls;
		Parms.CurrentGear=CurrentGear;
		Parms.TargetGear=TargetGear;
		ProcessEvent(FindFunctionChecked(NAME_UDcxVehicleWheelsComponent_ServerUpdateState),&Parms);
	}
	void UDcxVehicleWheelsComponent::StaticRegisterNativesUDcxVehicleWheelsComponent()
	{
		UClass* Class = UDcxVehicleWheelsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableWheel", &UDcxVehicleWheelsComponent::execDisableWheel },
			{ "EnableAvoidance", &UDcxVehicleWheelsComponent::execEnableAvoidance },
			{ "EnableWheel", &UDcxVehicleWheelsComponent::execEnableWheel },
			{ "GetAnalogControl", &UDcxVehicleWheelsComponent::execGetAnalogControl },
			{ "GetBoneName", &UDcxVehicleWheelsComponent::execGetBoneName },
			{ "GetChassisMass", &UDcxVehicleWheelsComponent::execGetChassisMass },
			{ "GetForwardSpeed", &UDcxVehicleWheelsComponent::execGetForwardSpeed },
			{ "GetNumWheels", &UDcxVehicleWheelsComponent::execGetNumWheels },
			{ "GetRawInput", &UDcxVehicleWheelsComponent::execGetRawInput },
			{ "GetSuspensionData", &UDcxVehicleWheelsComponent::execGetSuspensionData },
			{ "GetTire", &UDcxVehicleWheelsComponent::execGetTire },
			{ "GetWheelData", &UDcxVehicleWheelsComponent::execGetWheelData },
			{ "GetWheelOffset", &UDcxVehicleWheelsComponent::execGetWheelOffset },
			{ "GetWheelRotationAngle", &UDcxVehicleWheelsComponent::execGetWheelRotationAngle },
			{ "GetWheelRotationSpeed", &UDcxVehicleWheelsComponent::execGetWheelRotationSpeed },
			{ "GetWheelState", &UDcxVehicleWheelsComponent::execGetWheelState },
			{ "IsWheelDisabled", &UDcxVehicleWheelsComponent::execIsWheelDisabled },
			{ "ServerUpdateState", &UDcxVehicleWheelsComponent::execServerUpdateState },
			{ "SetAvoidanceGroup", &UDcxVehicleWheelsComponent::execSetAvoidanceGroup },
			{ "SetChassisMass", &UDcxVehicleWheelsComponent::execSetChassisMass },
			{ "SetGroupsToAvoid", &UDcxVehicleWheelsComponent::execSetGroupsToAvoid },
			{ "SetGroupsToIgnore", &UDcxVehicleWheelsComponent::execSetGroupsToIgnore },
			{ "SetSuspensionData", &UDcxVehicleWheelsComponent::execSetSuspensionData },
			{ "SetTire", &UDcxVehicleWheelsComponent::execSetTire },
			{ "SetWheelData", &UDcxVehicleWheelsComponent::execSetWheelData },
			{ "SetWheelOffset", &UDcxVehicleWheelsComponent::execSetWheelOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_DisableWheel_Statics
	{
		struct DcxVehicleWheelsComponent_eventDisableWheel_Parms
		{
			int32 WheelIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_DisableWheel_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventDisableWheel_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_DisableWheel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_DisableWheel_Statics::NewProp_WheelIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_DisableWheel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_DisableWheel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "DisableWheel", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventDisableWheel_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_DisableWheel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_DisableWheel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_DisableWheel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_DisableWheel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_DisableWheel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_DisableWheel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableAvoidance_Statics
	{
		struct DcxVehicleWheelsComponent_eventEnableAvoidance_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableAvoidance_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((DcxVehicleWheelsComponent_eventEnableAvoidance_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableAvoidance_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DcxVehicleWheelsComponent_eventEnableAvoidance_Parms), &Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableAvoidance_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableAvoidance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableAvoidance_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableAvoidance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableAvoidance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "EnableAvoidance", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventEnableAvoidance_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableAvoidance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableAvoidance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableAvoidance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableAvoidance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableAvoidance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableAvoidance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableWheel_Statics
	{
		struct DcxVehicleWheelsComponent_eventEnableWheel_Parms
		{
			int32 WheelIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableWheel_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventEnableWheel_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableWheel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableWheel_Statics::NewProp_WheelIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableWheel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableWheel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "EnableWheel", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventEnableWheel_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableWheel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableWheel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableWheel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableWheel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableWheel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableWheel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetAnalogControl_Statics
	{
		struct DcxVehicleWheelsComponent_eventGetAnalogControl_Parms
		{
			uint8 Control;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Control;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetAnalogControl_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventGetAnalogControl_Parms, Control), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetAnalogControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventGetAnalogControl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetAnalogControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetAnalogControl_Statics::NewProp_Control,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetAnalogControl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetAnalogControl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetAnalogControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "GetAnalogControl", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventGetAnalogControl_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetAnalogControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetAnalogControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetAnalogControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetAnalogControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetAnalogControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetAnalogControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetBoneName_Statics
	{
		struct DcxVehicleWheelsComponent_eventGetBoneName_Parms
		{
			int32 WheelIndex;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetBoneName_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventGetBoneName_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventGetBoneName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetBoneName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetBoneName_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetBoneName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetBoneName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "GetBoneName", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventGetBoneName_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetBoneName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetBoneName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetBoneName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetChassisMass_Statics
	{
		struct DcxVehicleWheelsComponent_eventGetChassisMass_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetChassisMass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventGetChassisMass_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetChassisMass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetChassisMass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetChassisMass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetChassisMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "GetChassisMass", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventGetChassisMass_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetChassisMass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetChassisMass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetChassisMass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetChassisMass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetChassisMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetChassisMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetForwardSpeed_Statics
	{
		struct DcxVehicleWheelsComponent_eventGetForwardSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetForwardSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventGetForwardSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetForwardSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetForwardSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetForwardSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetForwardSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "GetForwardSpeed", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventGetForwardSpeed_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetForwardSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetForwardSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetForwardSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetForwardSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetForwardSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetForwardSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetNumWheels_Statics
	{
		struct DcxVehicleWheelsComponent_eventGetNumWheels_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetNumWheels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventGetNumWheels_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetNumWheels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetNumWheels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetNumWheels_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetNumWheels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "GetNumWheels", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventGetNumWheels_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetNumWheels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetNumWheels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetNumWheels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetNumWheels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetNumWheels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetNumWheels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetRawInput_Statics
	{
		struct DcxVehicleWheelsComponent_eventGetRawInput_Parms
		{
			UDcxVehicleWheelsRawInput* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetRawInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventGetRawInput_Parms, ReturnValue), Z_Construct_UClass_UDcxVehicleWheelsRawInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetRawInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetRawInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetRawInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetRawInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "GetRawInput", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventGetRawInput_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetRawInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetRawInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetRawInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetRawInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetRawInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetRawInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetSuspensionData_Statics
	{
		struct DcxVehicleWheelsComponent_eventGetSuspensionData_Parms
		{
			int32 WheelIndex;
			FDcxVehicleSuspensionData ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetSuspensionData_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventGetSuspensionData_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetSuspensionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventGetSuspensionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FDcxVehicleSuspensionData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetSuspensionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetSuspensionData_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetSuspensionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetSuspensionData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetSuspensionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "GetSuspensionData", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventGetSuspensionData_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetSuspensionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetSuspensionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetSuspensionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetSuspensionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetSuspensionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetSuspensionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetTire_Statics
	{
		struct DcxVehicleWheelsComponent_eventGetTire_Parms
		{
			int32 WheelIndex;
			UDcxVehicleTire* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetTire_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventGetTire_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetTire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventGetTire_Parms, ReturnValue), Z_Construct_UClass_UDcxVehicleTire_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetTire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetTire_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetTire_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetTire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetTire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "GetTire", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventGetTire_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetTire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetTire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetTire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetTire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetTire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetTire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelData_Statics
	{
		struct DcxVehicleWheelsComponent_eventGetWheelData_Parms
		{
			int32 WheelIndex;
			FDcxVehicleWheelData ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelData_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventGetWheelData_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventGetWheelData_Parms, ReturnValue), Z_Construct_UScriptStruct_FDcxVehicleWheelData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelData_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "GetWheelData", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventGetWheelData_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelOffset_Statics
	{
		struct DcxVehicleWheelsComponent_eventGetWheelOffset_Parms
		{
			int32 WheelIndex;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelOffset_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventGetWheelOffset_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventGetWheelOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelOffset_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "GetWheelOffset", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventGetWheelOffset_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationAngle_Statics
	{
		struct DcxVehicleWheelsComponent_eventGetWheelRotationAngle_Parms
		{
			int32 WheelIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationAngle_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventGetWheelRotationAngle_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventGetWheelRotationAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationAngle_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationAngle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "GetWheelRotationAngle", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventGetWheelRotationAngle_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationSpeed_Statics
	{
		struct DcxVehicleWheelsComponent_eventGetWheelRotationSpeed_Parms
		{
			int32 WheelIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationSpeed_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventGetWheelRotationSpeed_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventGetWheelRotationSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationSpeed_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "GetWheelRotationSpeed", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventGetWheelRotationSpeed_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelState_Statics
	{
		struct DcxVehicleWheelsComponent_eventGetWheelState_Parms
		{
			int32 WheelIndex;
			FDcxVehicleWheelState WheelState;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WheelState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelState_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventGetWheelState_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelState_Statics::NewProp_WheelState = { "WheelState", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventGetWheelState_Parms, WheelState), Z_Construct_UScriptStruct_FDcxVehicleWheelState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DcxVehicleWheelsComponent_eventGetWheelState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DcxVehicleWheelsComponent_eventGetWheelState_Parms), &Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelState_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelState_Statics::NewProp_WheelState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "GetWheelState", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventGetWheelState_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_IsWheelDisabled_Statics
	{
		struct DcxVehicleWheelsComponent_eventIsWheelDisabled_Parms
		{
			int32 WheelIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_IsWheelDisabled_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventIsWheelDisabled_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDcxVehicleWheelsComponent_IsWheelDisabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DcxVehicleWheelsComponent_eventIsWheelDisabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_IsWheelDisabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DcxVehicleWheelsComponent_eventIsWheelDisabled_Parms), &Z_Construct_UFunction_UDcxVehicleWheelsComponent_IsWheelDisabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_IsWheelDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_IsWheelDisabled_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_IsWheelDisabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_IsWheelDisabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_IsWheelDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "IsWheelDisabled", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventIsWheelDisabled_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_IsWheelDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_IsWheelDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_IsWheelDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_IsWheelDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_IsWheelDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_IsWheelDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalogControls_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnalogControls;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGear_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentGear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetGear_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetGear;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::NewProp_AnalogControls_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::NewProp_AnalogControls = { "AnalogControls", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventServerUpdateState_Parms, AnalogControls), Z_Construct_UScriptStruct_FDcxAnalogControlArray, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::NewProp_AnalogControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::NewProp_AnalogControls_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::NewProp_CurrentGear_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::NewProp_CurrentGear = { "CurrentGear", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventServerUpdateState_Parms, CurrentGear), Z_Construct_UScriptStruct_FDcxGear, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::NewProp_CurrentGear_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::NewProp_CurrentGear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::NewProp_TargetGear_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::NewProp_TargetGear = { "TargetGear", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventServerUpdateState_Parms, TargetGear), Z_Construct_UScriptStruct_FDcxGear, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::NewProp_TargetGear_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::NewProp_TargetGear_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::NewProp_AnalogControls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::NewProp_CurrentGear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::NewProp_TargetGear,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "ServerUpdateState", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventServerUpdateState_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetAvoidanceGroup_Statics
	{
		struct DcxVehicleWheelsComponent_eventSetAvoidanceGroup_Parms
		{
			FNavAvoidanceMask Mask;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetAvoidanceGroup_Statics::NewProp_Mask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetAvoidanceGroup_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventSetAvoidanceGroup_Parms, Mask), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetAvoidanceGroup_Statics::NewProp_Mask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetAvoidanceGroup_Statics::NewProp_Mask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetAvoidanceGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetAvoidanceGroup_Statics::NewProp_Mask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetAvoidanceGroup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetAvoidanceGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "SetAvoidanceGroup", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventSetAvoidanceGroup_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetAvoidanceGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetAvoidanceGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetAvoidanceGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetAvoidanceGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetAvoidanceGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetAvoidanceGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetChassisMass_Statics
	{
		struct DcxVehicleWheelsComponent_eventSetChassisMass_Parms
		{
			float Mass;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetChassisMass_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventSetChassisMass_Parms, Mass), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetChassisMass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetChassisMass_Statics::NewProp_Mass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetChassisMass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetChassisMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "SetChassisMass", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventSetChassisMass_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetChassisMass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetChassisMass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetChassisMass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetChassisMass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetChassisMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetChassisMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToAvoid_Statics
	{
		struct DcxVehicleWheelsComponent_eventSetGroupsToAvoid_Parms
		{
			FNavAvoidanceMask Mask;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToAvoid_Statics::NewProp_Mask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToAvoid_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventSetGroupsToAvoid_Parms, Mask), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToAvoid_Statics::NewProp_Mask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToAvoid_Statics::NewProp_Mask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToAvoid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToAvoid_Statics::NewProp_Mask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToAvoid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToAvoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "SetGroupsToAvoid", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventSetGroupsToAvoid_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToAvoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToAvoid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToAvoid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToAvoid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToAvoid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToAvoid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToIgnore_Statics
	{
		struct DcxVehicleWheelsComponent_eventSetGroupsToIgnore_Parms
		{
			FNavAvoidanceMask Mask;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToIgnore_Statics::NewProp_Mask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToIgnore_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventSetGroupsToIgnore_Parms, Mask), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToIgnore_Statics::NewProp_Mask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToIgnore_Statics::NewProp_Mask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToIgnore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToIgnore_Statics::NewProp_Mask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToIgnore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToIgnore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "SetGroupsToIgnore", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventSetGroupsToIgnore_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToIgnore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToIgnore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToIgnore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToIgnore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToIgnore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToIgnore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetSuspensionData_Statics
	{
		struct DcxVehicleWheelsComponent_eventSetSuspensionData_Parms
		{
			int32 WheelIndex;
			FDcxVehicleSuspensionData NewSuspensionData;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewSuspensionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetSuspensionData_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventSetSuspensionData_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetSuspensionData_Statics::NewProp_NewSuspensionData = { "NewSuspensionData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventSetSuspensionData_Parms, NewSuspensionData), Z_Construct_UScriptStruct_FDcxVehicleSuspensionData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetSuspensionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetSuspensionData_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetSuspensionData_Statics::NewProp_NewSuspensionData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetSuspensionData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetSuspensionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "SetSuspensionData", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventSetSuspensionData_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetSuspensionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetSuspensionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetSuspensionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetSuspensionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetSuspensionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetSuspensionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetTire_Statics
	{
		struct DcxVehicleWheelsComponent_eventSetTire_Parms
		{
			int32 WheelId;
			UDcxVehicleTire* NewTire;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTire;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetTire_Statics::NewProp_WheelId = { "WheelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventSetTire_Parms, WheelId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetTire_Statics::NewProp_NewTire = { "NewTire", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventSetTire_Parms, NewTire), Z_Construct_UClass_UDcxVehicleTire_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetTire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetTire_Statics::NewProp_WheelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetTire_Statics::NewProp_NewTire,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetTire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetTire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "SetTire", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventSetTire_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetTire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetTire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetTire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetTire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetTire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetTire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelData_Statics
	{
		struct DcxVehicleWheelsComponent_eventSetWheelData_Parms
		{
			int32 WheelIndex;
			FDcxVehicleWheelData NewWheelData;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewWheelData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelData_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventSetWheelData_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelData_Statics::NewProp_NewWheelData = { "NewWheelData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventSetWheelData_Parms, NewWheelData), Z_Construct_UScriptStruct_FDcxVehicleWheelData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelData_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelData_Statics::NewProp_NewWheelData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "SetWheelData", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventSetWheelData_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelOffset_Statics
	{
		struct DcxVehicleWheelsComponent_eventSetWheelOffset_Parms
		{
			int32 WheelIndex;
			FVector Offset;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelOffset_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventSetWheelOffset_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsComponent_eventSetWheelOffset_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelOffset_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsComponent, nullptr, "SetWheelOffset", nullptr, nullptr, sizeof(DcxVehicleWheelsComponent_eventSetWheelOffset_Parms), Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDcxVehicleWheelsComponent_NoRegister()
	{
		return UDcxVehicleWheelsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChassisMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChassisMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InertiaTensorScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InertiaTensorScale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WheelConfigurations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelConfigurations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WheelConfigurations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TireLoadFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TireLoadFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAvoidance_MetaData[];
#endif
		static void NewProp_bUseAvoidance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAvoidance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AvoidanceUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AvoidanceGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupsToAvoid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupsToAvoid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupsToIgnore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThresholdLongitudinalSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThresholdLongitudinalSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowForwardSpeedSubStepCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LowForwardSpeedSubStepCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighForwardSpeedSubStepCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HighForwardSpeedSubStepCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DragCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DragArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrottleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThrottleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakeRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BrakeRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandbrakeRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandbrakeRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteerRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteerRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceConsiderationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceConsiderationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceThrottleStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceThrottleStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceBrakeStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceBrakeStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceSteerStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceSteerStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecreateRequired_MetaData[];
#endif
		static void NewProp_bRecreateRequired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecreateRequired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RawInput;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothAnalogControls_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothAnalogControls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SmoothAnalogControls;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasAvoidanceUpdated_MetaData[];
#endif
		static void NewProp_bWasAvoidanceUpdated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasAvoidanceUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AvoidanceVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceLockVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AvoidanceLockVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceLockTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceLockTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_DisableWheel, "DisableWheel" }, // 2029084084
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableAvoidance, "EnableAvoidance" }, // 2158132507
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_EnableWheel, "EnableWheel" }, // 1136962689
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetAnalogControl, "GetAnalogControl" }, // 2643634386
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetBoneName, "GetBoneName" }, // 1555891942
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetChassisMass, "GetChassisMass" }, // 1653293403
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetForwardSpeed, "GetForwardSpeed" }, // 1709728474
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetNumWheels, "GetNumWheels" }, // 3185588655
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetRawInput, "GetRawInput" }, // 1805261788
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetSuspensionData, "GetSuspensionData" }, // 1100018111
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetTire, "GetTire" }, // 2744038850
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelData, "GetWheelData" }, // 3023090012
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelOffset, "GetWheelOffset" }, // 1907721543
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationAngle, "GetWheelRotationAngle" }, // 2835519067
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelRotationSpeed, "GetWheelRotationSpeed" }, // 3182786386
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_GetWheelState, "GetWheelState" }, // 1682224426
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_IsWheelDisabled, "IsWheelDisabled" }, // 829571148
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_ServerUpdateState, "ServerUpdateState" }, // 372058561
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetAvoidanceGroup, "SetAvoidanceGroup" }, // 2180059540
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetChassisMass, "SetChassisMass" }, // 1452697090
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToAvoid, "SetGroupsToAvoid" }, // 3231281774
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetGroupsToIgnore, "SetGroupsToIgnore" }, // 1299400591
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetSuspensionData, "SetSuspensionData" }, // 3312859813
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetTire, "SetTire" }, // 4242926188
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelData, "SetWheelData" }, // 1707350064
		{ &Z_Construct_UFunction_UDcxVehicleWheelsComponent_SetWheelOffset, "SetWheelOffset" }, // 1577222322
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DcxVehicleWheelsComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_ChassisMass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_ChassisMass = { "ChassisMass", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, ChassisMass), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_ChassisMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_ChassisMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_InertiaTensorScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_InertiaTensorScale = { "InertiaTensorScale", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, InertiaTensorScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_InertiaTensorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_InertiaTensorScale_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_WheelConfigurations_Inner = { "WheelConfigurations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_WheelConfigurations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_WheelConfigurations = { "WheelConfigurations", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, WheelConfigurations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_WheelConfigurations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_WheelConfigurations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_TireLoadFilter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_TireLoadFilter = { "TireLoadFilter", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, TireLoadFilter), Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_TireLoadFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_TireLoadFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_bUseAvoidance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_bUseAvoidance_SetBit(void* Obj)
	{
		((UDcxVehicleWheelsComponent*)Obj)->bUseAvoidance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_bUseAvoidance = { "bUseAvoidance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDcxVehicleWheelsComponent), &Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_bUseAvoidance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_bUseAvoidance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_bUseAvoidance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceWeight = { "AvoidanceWeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, AvoidanceWeight), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceUID = { "AvoidanceUID", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, AvoidanceUID), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceGroup = { "AvoidanceGroup", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, AvoidanceGroup), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_GroupsToAvoid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_GroupsToAvoid = { "GroupsToAvoid", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, GroupsToAvoid), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_GroupsToAvoid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_GroupsToAvoid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_GroupsToIgnore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_GroupsToIgnore = { "GroupsToIgnore", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, GroupsToIgnore), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_GroupsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_GroupsToIgnore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_ThresholdLongitudinalSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_ThresholdLongitudinalSpeed = { "ThresholdLongitudinalSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, ThresholdLongitudinalSpeed), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_ThresholdLongitudinalSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_ThresholdLongitudinalSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_LowForwardSpeedSubStepCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_LowForwardSpeedSubStepCount = { "LowForwardSpeedSubStepCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, LowForwardSpeedSubStepCount), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_LowForwardSpeedSubStepCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_LowForwardSpeedSubStepCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_HighForwardSpeedSubStepCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_HighForwardSpeedSubStepCount = { "HighForwardSpeedSubStepCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, HighForwardSpeedSubStepCount), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_HighForwardSpeedSubStepCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_HighForwardSpeedSubStepCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_DragCoefficient_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_DragCoefficient = { "DragCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, DragCoefficient), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_DragCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_DragCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_DragArea_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_DragArea = { "DragArea", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, DragArea), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_DragArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_DragArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_ThrottleRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_ThrottleRate = { "ThrottleRate", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, ThrottleRate), Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_ThrottleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_ThrottleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_BrakeRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_BrakeRate = { "BrakeRate", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, BrakeRate), Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_BrakeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_BrakeRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_HandbrakeRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_HandbrakeRate = { "HandbrakeRate", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, HandbrakeRate), Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_HandbrakeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_HandbrakeRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_SteerRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_SteerRate = { "SteerRate", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, SteerRate), Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_SteerRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_SteerRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceRadius = { "AvoidanceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, AvoidanceRadius), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceHeight = { "AvoidanceHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, AvoidanceHeight), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceConsiderationRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceConsiderationRadius = { "AvoidanceConsiderationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, AvoidanceConsiderationRadius), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceConsiderationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceConsiderationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceThrottleStep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceThrottleStep = { "AvoidanceThrottleStep", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, AvoidanceThrottleStep), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceThrottleStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceThrottleStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceBrakeStep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceBrakeStep = { "AvoidanceBrakeStep", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, AvoidanceBrakeStep), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceBrakeStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceBrakeStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceSteerStep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceSteerStep = { "AvoidanceSteerStep", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, AvoidanceSteerStep), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceSteerStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceSteerStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_bRecreateRequired_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_bRecreateRequired_SetBit(void* Obj)
	{
		((UDcxVehicleWheelsComponent*)Obj)->bRecreateRequired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_bRecreateRequired = { "bRecreateRequired", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDcxVehicleWheelsComponent), &Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_bRecreateRequired_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_bRecreateRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_bRecreateRequired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_RawInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_RawInput = { "RawInput", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, RawInput), Z_Construct_UClass_UDcxVehicleWheelsRawInput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_RawInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_RawInput_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_SmoothAnalogControls_Inner = { "SmoothAnalogControls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_SmoothAnalogControls_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_SmoothAnalogControls = { "SmoothAnalogControls", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, SmoothAnalogControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_SmoothAnalogControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_SmoothAnalogControls_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_ReplicatedState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_ReplicatedState = { "ReplicatedState", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, ReplicatedState), Z_Construct_UScriptStruct_FDcxVehicleDriveState, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_ReplicatedState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_ReplicatedState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_bWasAvoidanceUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_bWasAvoidanceUpdated_SetBit(void* Obj)
	{
		((UDcxVehicleWheelsComponent*)Obj)->bWasAvoidanceUpdated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_bWasAvoidanceUpdated = { "bWasAvoidanceUpdated", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDcxVehicleWheelsComponent), &Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_bWasAvoidanceUpdated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_bWasAvoidanceUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_bWasAvoidanceUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceVelocity = { "AvoidanceVelocity", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, AvoidanceVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceLockVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceLockVelocity = { "AvoidanceLockVelocity", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, AvoidanceLockVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceLockVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceLockVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceLockTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceLockTimer = { "AvoidanceLockTimer", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsComponent, AvoidanceLockTimer), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceLockTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceLockTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_ChassisMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_InertiaTensorScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_WheelConfigurations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_WheelConfigurations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_TireLoadFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_bUseAvoidance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_GroupsToAvoid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_GroupsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_ThresholdLongitudinalSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_LowForwardSpeedSubStepCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_HighForwardSpeedSubStepCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_DragCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_DragArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_ThrottleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_BrakeRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_HandbrakeRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_SteerRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceConsiderationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceThrottleStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceBrakeStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceSteerStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_bRecreateRequired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_RawInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_SmoothAnalogControls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_SmoothAnalogControls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_ReplicatedState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_bWasAvoidanceUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceLockVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::NewProp_AvoidanceLockTimer,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_URVOAvoidanceInterface_NoRegister, (int32)VTABLE_OFFSET(UDcxVehicleWheelsComponent, IRVOAvoidanceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDcxVehicleWheelsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::ClassParams = {
		&UDcxVehicleWheelsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDcxVehicleWheelsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDcxVehicleWheelsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDcxVehicleWheelsComponent, 1592638542);
	template<> DCXVEHICLE_API UClass* StaticClass<UDcxVehicleWheelsComponent>()
	{
		return UDcxVehicleWheelsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDcxVehicleWheelsComponent(Z_Construct_UClass_UDcxVehicleWheelsComponent, &UDcxVehicleWheelsComponent::StaticClass, TEXT("/Script/DcxVehicle"), TEXT("UDcxVehicleWheelsComponent"), false, nullptr, nullptr, nullptr);

	void UDcxVehicleWheelsComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedState(TEXT("ReplicatedState"));

		const bool bIsValid = true
			&& Name_ReplicatedState == ClassReps[(int32)ENetFields_Private::ReplicatedState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDcxVehicleWheelsComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDcxVehicleWheelsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
