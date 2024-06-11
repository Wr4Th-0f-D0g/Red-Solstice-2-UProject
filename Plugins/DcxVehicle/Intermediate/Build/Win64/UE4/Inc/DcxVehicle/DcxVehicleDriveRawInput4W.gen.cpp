// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleDriveRawInput4W.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleDriveRawInput4W() {}
// Cross Module References
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveRawInput4W_NoRegister();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveRawInput4W();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveRawInput();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
// End Cross Module References
	DEFINE_FUNCTION(UDcxVehicleDriveRawInput4W::execGetBrake)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBrake();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveRawInput4W::execGetHandbrake)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHandbrake();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveRawInput4W::execGetSteer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSteer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveRawInput4W::execSetBrake)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Brake);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrake(Z_Param_Brake);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveRawInput4W::execSetHandbrake)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Handbrake);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHandbrake(Z_Param_Handbrake);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveRawInput4W::execSetSteer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Steer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSteer(Z_Param_Steer);
		P_NATIVE_END;
	}
	void UDcxVehicleDriveRawInput4W::StaticRegisterNativesUDcxVehicleDriveRawInput4W()
	{
		UClass* Class = UDcxVehicleDriveRawInput4W::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBrake", &UDcxVehicleDriveRawInput4W::execGetBrake },
			{ "GetHandbrake", &UDcxVehicleDriveRawInput4W::execGetHandbrake },
			{ "GetSteer", &UDcxVehicleDriveRawInput4W::execGetSteer },
			{ "SetBrake", &UDcxVehicleDriveRawInput4W::execSetBrake },
			{ "SetHandbrake", &UDcxVehicleDriveRawInput4W::execSetHandbrake },
			{ "SetSteer", &UDcxVehicleDriveRawInput4W::execSetSteer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetBrake_Statics
	{
		struct DcxVehicleDriveRawInput4W_eventGetBrake_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetBrake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveRawInput4W_eventGetBrake_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetBrake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetBrake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetBrake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInput4W.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveRawInput4W, nullptr, "GetBrake", nullptr, nullptr, sizeof(DcxVehicleDriveRawInput4W_eventGetBrake_Parms), Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetBrake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetBrake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetBrake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetBrake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetBrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetBrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetHandbrake_Statics
	{
		struct DcxVehicleDriveRawInput4W_eventGetHandbrake_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetHandbrake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveRawInput4W_eventGetHandbrake_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetHandbrake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetHandbrake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetHandbrake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInput4W.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetHandbrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveRawInput4W, nullptr, "GetHandbrake", nullptr, nullptr, sizeof(DcxVehicleDriveRawInput4W_eventGetHandbrake_Parms), Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetHandbrake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetHandbrake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetHandbrake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetHandbrake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetHandbrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetHandbrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetSteer_Statics
	{
		struct DcxVehicleDriveRawInput4W_eventGetSteer_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetSteer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveRawInput4W_eventGetSteer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetSteer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetSteer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetSteer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInput4W.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetSteer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveRawInput4W, nullptr, "GetSteer", nullptr, nullptr, sizeof(DcxVehicleDriveRawInput4W_eventGetSteer_Parms), Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetSteer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetSteer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetSteer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetSteer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetSteer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetSteer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetBrake_Statics
	{
		struct DcxVehicleDriveRawInput4W_eventSetBrake_Parms
		{
			float Brake;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brake_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Brake;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetBrake_Statics::NewProp_Brake_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetBrake_Statics::NewProp_Brake = { "Brake", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveRawInput4W_eventSetBrake_Parms, Brake), METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetBrake_Statics::NewProp_Brake_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetBrake_Statics::NewProp_Brake_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetBrake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetBrake_Statics::NewProp_Brake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetBrake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInput4W.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveRawInput4W, nullptr, "SetBrake", nullptr, nullptr, sizeof(DcxVehicleDriveRawInput4W_eventSetBrake_Parms), Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetBrake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetBrake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetBrake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetBrake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetBrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetBrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetHandbrake_Statics
	{
		struct DcxVehicleDriveRawInput4W_eventSetHandbrake_Parms
		{
			float Handbrake;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handbrake_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Handbrake;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetHandbrake_Statics::NewProp_Handbrake_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetHandbrake_Statics::NewProp_Handbrake = { "Handbrake", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveRawInput4W_eventSetHandbrake_Parms, Handbrake), METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetHandbrake_Statics::NewProp_Handbrake_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetHandbrake_Statics::NewProp_Handbrake_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetHandbrake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetHandbrake_Statics::NewProp_Handbrake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetHandbrake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInput4W.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetHandbrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveRawInput4W, nullptr, "SetHandbrake", nullptr, nullptr, sizeof(DcxVehicleDriveRawInput4W_eventSetHandbrake_Parms), Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetHandbrake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetHandbrake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetHandbrake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetHandbrake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetHandbrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetHandbrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetSteer_Statics
	{
		struct DcxVehicleDriveRawInput4W_eventSetSteer_Parms
		{
			float Steer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Steer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Steer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetSteer_Statics::NewProp_Steer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetSteer_Statics::NewProp_Steer = { "Steer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveRawInput4W_eventSetSteer_Parms, Steer), METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetSteer_Statics::NewProp_Steer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetSteer_Statics::NewProp_Steer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetSteer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetSteer_Statics::NewProp_Steer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetSteer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInput4W.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetSteer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveRawInput4W, nullptr, "SetSteer", nullptr, nullptr, sizeof(DcxVehicleDriveRawInput4W_eventSetSteer_Parms), Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetSteer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetSteer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetSteer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetSteer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetSteer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetSteer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDcxVehicleDriveRawInput4W_NoRegister()
	{
		return UDcxVehicleDriveRawInput4W::StaticClass();
	}
	struct Z_Construct_UClass_UDcxVehicleDriveRawInput4W_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDcxVehicleDriveRawInput4W_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDcxVehicleDriveRawInput,
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDcxVehicleDriveRawInput4W_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetBrake, "GetBrake" }, // 399617564
		{ &Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetHandbrake, "GetHandbrake" }, // 2495054901
		{ &Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_GetSteer, "GetSteer" }, // 1941710325
		{ &Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetBrake, "SetBrake" }, // 3070647966
		{ &Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetHandbrake, "SetHandbrake" }, // 1677372425
		{ &Z_Construct_UFunction_UDcxVehicleDriveRawInput4W_SetSteer, "SetSteer" }, // 2335568270
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleDriveRawInput4W_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DcxVehicleDriveRawInput4W.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInput4W.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDcxVehicleDriveRawInput4W_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDcxVehicleDriveRawInput4W>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDcxVehicleDriveRawInput4W_Statics::ClassParams = {
		&UDcxVehicleDriveRawInput4W::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleDriveRawInput4W_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveRawInput4W_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDcxVehicleDriveRawInput4W()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDcxVehicleDriveRawInput4W_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDcxVehicleDriveRawInput4W, 1978719554);
	template<> DCXVEHICLE_API UClass* StaticClass<UDcxVehicleDriveRawInput4W>()
	{
		return UDcxVehicleDriveRawInput4W::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDcxVehicleDriveRawInput4W(Z_Construct_UClass_UDcxVehicleDriveRawInput4W, &UDcxVehicleDriveRawInput4W::StaticClass, TEXT("/Script/DcxVehicle"), TEXT("UDcxVehicleDriveRawInput4W"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDcxVehicleDriveRawInput4W);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
