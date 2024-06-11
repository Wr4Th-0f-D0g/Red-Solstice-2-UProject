// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleNoDriveComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleNoDriveComponent() {}
// Cross Module References
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleNoDriveComponent_NoRegister();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleNoDriveComponent();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleWheelsComponent();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleNoDriveRawInput_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDcxVehicleNoDriveComponent::execGetBrakeTorque)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBrakeTorque(Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleNoDriveComponent::execGetDriveTorque)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDriveTorque(Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleNoDriveComponent::execGetRawInputND)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDcxVehicleNoDriveRawInput**)Z_Param__Result=P_THIS->GetRawInputND();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleNoDriveComponent::execGetSteerAngle)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSteerAngle(Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleNoDriveComponent::execSetBrakeTorque)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BrakeTorque);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrakeTorque(Z_Param_WheelIndex,Z_Param_BrakeTorque);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleNoDriveComponent::execSetDriveTorque)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DriveTorque);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDriveTorque(Z_Param_WheelIndex,Z_Param_DriveTorque);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleNoDriveComponent::execSetSteerAngle)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SteerAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSteerAngle(Z_Param_WheelIndex,Z_Param_SteerAngle);
		P_NATIVE_END;
	}
	void UDcxVehicleNoDriveComponent::StaticRegisterNativesUDcxVehicleNoDriveComponent()
	{
		UClass* Class = UDcxVehicleNoDriveComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBrakeTorque", &UDcxVehicleNoDriveComponent::execGetBrakeTorque },
			{ "GetDriveTorque", &UDcxVehicleNoDriveComponent::execGetDriveTorque },
			{ "GetRawInputND", &UDcxVehicleNoDriveComponent::execGetRawInputND },
			{ "GetSteerAngle", &UDcxVehicleNoDriveComponent::execGetSteerAngle },
			{ "SetBrakeTorque", &UDcxVehicleNoDriveComponent::execSetBrakeTorque },
			{ "SetDriveTorque", &UDcxVehicleNoDriveComponent::execSetDriveTorque },
			{ "SetSteerAngle", &UDcxVehicleNoDriveComponent::execSetSteerAngle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetBrakeTorque_Statics
	{
		struct DcxVehicleNoDriveComponent_eventGetBrakeTorque_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetBrakeTorque_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleNoDriveComponent_eventGetBrakeTorque_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetBrakeTorque_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleNoDriveComponent_eventGetBrakeTorque_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetBrakeTorque_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetBrakeTorque_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetBrakeTorque_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetBrakeTorque_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleNoDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetBrakeTorque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleNoDriveComponent, nullptr, "GetBrakeTorque", nullptr, nullptr, sizeof(DcxVehicleNoDriveComponent_eventGetBrakeTorque_Parms), Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetBrakeTorque_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetBrakeTorque_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetBrakeTorque_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetBrakeTorque_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetBrakeTorque()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetBrakeTorque_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetDriveTorque_Statics
	{
		struct DcxVehicleNoDriveComponent_eventGetDriveTorque_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetDriveTorque_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleNoDriveComponent_eventGetDriveTorque_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetDriveTorque_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleNoDriveComponent_eventGetDriveTorque_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetDriveTorque_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetDriveTorque_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetDriveTorque_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetDriveTorque_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleNoDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetDriveTorque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleNoDriveComponent, nullptr, "GetDriveTorque", nullptr, nullptr, sizeof(DcxVehicleNoDriveComponent_eventGetDriveTorque_Parms), Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetDriveTorque_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetDriveTorque_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetDriveTorque_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetDriveTorque_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetDriveTorque()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetDriveTorque_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetRawInputND_Statics
	{
		struct DcxVehicleNoDriveComponent_eventGetRawInputND_Parms
		{
			UDcxVehicleNoDriveRawInput* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetRawInputND_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleNoDriveComponent_eventGetRawInputND_Parms, ReturnValue), Z_Construct_UClass_UDcxVehicleNoDriveRawInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetRawInputND_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetRawInputND_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetRawInputND_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleNoDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetRawInputND_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleNoDriveComponent, nullptr, "GetRawInputND", nullptr, nullptr, sizeof(DcxVehicleNoDriveComponent_eventGetRawInputND_Parms), Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetRawInputND_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetRawInputND_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetRawInputND_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetRawInputND_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetRawInputND()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetRawInputND_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetSteerAngle_Statics
	{
		struct DcxVehicleNoDriveComponent_eventGetSteerAngle_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetSteerAngle_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleNoDriveComponent_eventGetSteerAngle_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetSteerAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleNoDriveComponent_eventGetSteerAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetSteerAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetSteerAngle_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetSteerAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetSteerAngle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleNoDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetSteerAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleNoDriveComponent, nullptr, "GetSteerAngle", nullptr, nullptr, sizeof(DcxVehicleNoDriveComponent_eventGetSteerAngle_Parms), Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetSteerAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetSteerAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetSteerAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetSteerAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetSteerAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetSteerAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetBrakeTorque_Statics
	{
		struct DcxVehicleNoDriveComponent_eventSetBrakeTorque_Parms
		{
			int32 WheelIndex;
			float BrakeTorque;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakeTorque;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetBrakeTorque_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleNoDriveComponent_eventSetBrakeTorque_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetBrakeTorque_Statics::NewProp_BrakeTorque = { "BrakeTorque", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleNoDriveComponent_eventSetBrakeTorque_Parms, BrakeTorque), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetBrakeTorque_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetBrakeTorque_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetBrakeTorque_Statics::NewProp_BrakeTorque,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetBrakeTorque_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleNoDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetBrakeTorque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleNoDriveComponent, nullptr, "SetBrakeTorque", nullptr, nullptr, sizeof(DcxVehicleNoDriveComponent_eventSetBrakeTorque_Parms), Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetBrakeTorque_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetBrakeTorque_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetBrakeTorque_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetBrakeTorque_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetBrakeTorque()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetBrakeTorque_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetDriveTorque_Statics
	{
		struct DcxVehicleNoDriveComponent_eventSetDriveTorque_Parms
		{
			int32 WheelIndex;
			float DriveTorque;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DriveTorque;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetDriveTorque_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleNoDriveComponent_eventSetDriveTorque_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetDriveTorque_Statics::NewProp_DriveTorque = { "DriveTorque", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleNoDriveComponent_eventSetDriveTorque_Parms, DriveTorque), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetDriveTorque_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetDriveTorque_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetDriveTorque_Statics::NewProp_DriveTorque,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetDriveTorque_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleNoDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetDriveTorque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleNoDriveComponent, nullptr, "SetDriveTorque", nullptr, nullptr, sizeof(DcxVehicleNoDriveComponent_eventSetDriveTorque_Parms), Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetDriveTorque_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetDriveTorque_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetDriveTorque_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetDriveTorque_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetDriveTorque()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetDriveTorque_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetSteerAngle_Statics
	{
		struct DcxVehicleNoDriveComponent_eventSetSteerAngle_Parms
		{
			int32 WheelIndex;
			float SteerAngle;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SteerAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetSteerAngle_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleNoDriveComponent_eventSetSteerAngle_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetSteerAngle_Statics::NewProp_SteerAngle = { "SteerAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleNoDriveComponent_eventSetSteerAngle_Parms, SteerAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetSteerAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetSteerAngle_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetSteerAngle_Statics::NewProp_SteerAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetSteerAngle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleNoDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetSteerAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleNoDriveComponent, nullptr, "SetSteerAngle", nullptr, nullptr, sizeof(DcxVehicleNoDriveComponent_eventSetSteerAngle_Parms), Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetSteerAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetSteerAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetSteerAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetSteerAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetSteerAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetSteerAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDcxVehicleNoDriveComponent_NoRegister()
	{
		return UDcxVehicleNoDriveComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRawInput_MetaData[];
#endif
		static void NewProp_bUseRawInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRawInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDriveTorque_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDriveTorque;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDcxVehicleWheelsComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetBrakeTorque, "GetBrakeTorque" }, // 4074161125
		{ &Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetDriveTorque, "GetDriveTorque" }, // 720146785
		{ &Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetRawInputND, "GetRawInputND" }, // 4059414518
		{ &Z_Construct_UFunction_UDcxVehicleNoDriveComponent_GetSteerAngle, "GetSteerAngle" }, // 897298186
		{ &Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetBrakeTorque, "SetBrakeTorque" }, // 1041863133
		{ &Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetDriveTorque, "SetDriveTorque" }, // 750783764
		{ &Z_Construct_UFunction_UDcxVehicleNoDriveComponent_SetSteerAngle, "SetSteerAngle" }, // 2310920017
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DcxVehicleNoDriveComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleNoDriveComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::NewProp_bUseRawInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleNoDriveComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleNoDriveComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::NewProp_bUseRawInput_SetBit(void* Obj)
	{
		((UDcxVehicleNoDriveComponent*)Obj)->bUseRawInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::NewProp_bUseRawInput = { "bUseRawInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDcxVehicleNoDriveComponent), &Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::NewProp_bUseRawInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::NewProp_bUseRawInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::NewProp_bUseRawInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::NewProp_MaxDriveTorque_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleNoDriveComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleNoDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::NewProp_MaxDriveTorque = { "MaxDriveTorque", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleNoDriveComponent, MaxDriveTorque), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::NewProp_MaxDriveTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::NewProp_MaxDriveTorque_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::NewProp_bUseRawInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::NewProp_MaxDriveTorque,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDcxVehicleNoDriveComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::ClassParams = {
		&UDcxVehicleNoDriveComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDcxVehicleNoDriveComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDcxVehicleNoDriveComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDcxVehicleNoDriveComponent, 3533888808);
	template<> DCXVEHICLE_API UClass* StaticClass<UDcxVehicleNoDriveComponent>()
	{
		return UDcxVehicleNoDriveComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDcxVehicleNoDriveComponent(Z_Construct_UClass_UDcxVehicleNoDriveComponent, &UDcxVehicleNoDriveComponent::StaticClass, TEXT("/Script/DcxVehicle"), TEXT("UDcxVehicleNoDriveComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDcxVehicleNoDriveComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
