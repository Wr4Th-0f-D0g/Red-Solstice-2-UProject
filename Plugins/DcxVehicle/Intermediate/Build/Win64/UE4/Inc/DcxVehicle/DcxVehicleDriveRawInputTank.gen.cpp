// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleDriveRawInputTank.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleDriveRawInputTank() {}
// Cross Module References
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveRawInputTank_NoRegister();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveRawInputTank();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveRawInput();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
// End Cross Module References
	DEFINE_FUNCTION(UDcxVehicleDriveRawInputTank::execGetLeftBrake)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLeftBrake();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveRawInputTank::execGetLeftThrust)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLeftThrust();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveRawInputTank::execGetRightBrake)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRightBrake();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveRawInputTank::execGetRightThrust)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRightThrust();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveRawInputTank::execSetLeftBrake)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Brake);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLeftBrake(Z_Param_Brake);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveRawInputTank::execSetLeftThrust)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thrust);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLeftThrust(Z_Param_Thrust);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveRawInputTank::execSetRightBrake)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Brake);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRightBrake(Z_Param_Brake);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveRawInputTank::execSetRightThrust)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thrust);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRightThrust(Z_Param_Thrust);
		P_NATIVE_END;
	}
	void UDcxVehicleDriveRawInputTank::StaticRegisterNativesUDcxVehicleDriveRawInputTank()
	{
		UClass* Class = UDcxVehicleDriveRawInputTank::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLeftBrake", &UDcxVehicleDriveRawInputTank::execGetLeftBrake },
			{ "GetLeftThrust", &UDcxVehicleDriveRawInputTank::execGetLeftThrust },
			{ "GetRightBrake", &UDcxVehicleDriveRawInputTank::execGetRightBrake },
			{ "GetRightThrust", &UDcxVehicleDriveRawInputTank::execGetRightThrust },
			{ "SetLeftBrake", &UDcxVehicleDriveRawInputTank::execSetLeftBrake },
			{ "SetLeftThrust", &UDcxVehicleDriveRawInputTank::execSetLeftThrust },
			{ "SetRightBrake", &UDcxVehicleDriveRawInputTank::execSetRightBrake },
			{ "SetRightThrust", &UDcxVehicleDriveRawInputTank::execSetRightThrust },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftBrake_Statics
	{
		struct DcxVehicleDriveRawInputTank_eventGetLeftBrake_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftBrake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveRawInputTank_eventGetLeftBrake_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftBrake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftBrake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftBrake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInputTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveRawInputTank, nullptr, "GetLeftBrake", nullptr, nullptr, sizeof(DcxVehicleDriveRawInputTank_eventGetLeftBrake_Parms), Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftBrake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftBrake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftBrake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftBrake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftBrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftBrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftThrust_Statics
	{
		struct DcxVehicleDriveRawInputTank_eventGetLeftThrust_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftThrust_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveRawInputTank_eventGetLeftThrust_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftThrust_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftThrust_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftThrust_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInputTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftThrust_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveRawInputTank, nullptr, "GetLeftThrust", nullptr, nullptr, sizeof(DcxVehicleDriveRawInputTank_eventGetLeftThrust_Parms), Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftThrust_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftThrust_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftThrust_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftThrust_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftThrust()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftThrust_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightBrake_Statics
	{
		struct DcxVehicleDriveRawInputTank_eventGetRightBrake_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightBrake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveRawInputTank_eventGetRightBrake_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightBrake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightBrake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightBrake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInputTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveRawInputTank, nullptr, "GetRightBrake", nullptr, nullptr, sizeof(DcxVehicleDriveRawInputTank_eventGetRightBrake_Parms), Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightBrake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightBrake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightBrake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightBrake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightBrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightBrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightThrust_Statics
	{
		struct DcxVehicleDriveRawInputTank_eventGetRightThrust_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightThrust_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveRawInputTank_eventGetRightThrust_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightThrust_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightThrust_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightThrust_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInputTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightThrust_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveRawInputTank, nullptr, "GetRightThrust", nullptr, nullptr, sizeof(DcxVehicleDriveRawInputTank_eventGetRightThrust_Parms), Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightThrust_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightThrust_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightThrust_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightThrust_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightThrust()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightThrust_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftBrake_Statics
	{
		struct DcxVehicleDriveRawInputTank_eventSetLeftBrake_Parms
		{
			float Brake;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Brake;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftBrake_Statics::NewProp_Brake = { "Brake", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveRawInputTank_eventSetLeftBrake_Parms, Brake), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftBrake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftBrake_Statics::NewProp_Brake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftBrake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInputTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveRawInputTank, nullptr, "SetLeftBrake", nullptr, nullptr, sizeof(DcxVehicleDriveRawInputTank_eventSetLeftBrake_Parms), Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftBrake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftBrake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftBrake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftBrake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftBrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftBrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftThrust_Statics
	{
		struct DcxVehicleDriveRawInputTank_eventSetLeftThrust_Parms
		{
			float Thrust;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thrust;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftThrust_Statics::NewProp_Thrust = { "Thrust", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveRawInputTank_eventSetLeftThrust_Parms, Thrust), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftThrust_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftThrust_Statics::NewProp_Thrust,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftThrust_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInputTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftThrust_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveRawInputTank, nullptr, "SetLeftThrust", nullptr, nullptr, sizeof(DcxVehicleDriveRawInputTank_eventSetLeftThrust_Parms), Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftThrust_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftThrust_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftThrust_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftThrust_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftThrust()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftThrust_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightBrake_Statics
	{
		struct DcxVehicleDriveRawInputTank_eventSetRightBrake_Parms
		{
			float Brake;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Brake;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightBrake_Statics::NewProp_Brake = { "Brake", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveRawInputTank_eventSetRightBrake_Parms, Brake), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightBrake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightBrake_Statics::NewProp_Brake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightBrake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInputTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveRawInputTank, nullptr, "SetRightBrake", nullptr, nullptr, sizeof(DcxVehicleDriveRawInputTank_eventSetRightBrake_Parms), Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightBrake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightBrake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightBrake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightBrake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightBrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightBrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightThrust_Statics
	{
		struct DcxVehicleDriveRawInputTank_eventSetRightThrust_Parms
		{
			float Thrust;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thrust;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightThrust_Statics::NewProp_Thrust = { "Thrust", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveRawInputTank_eventSetRightThrust_Parms, Thrust), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightThrust_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightThrust_Statics::NewProp_Thrust,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightThrust_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInputTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightThrust_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveRawInputTank, nullptr, "SetRightThrust", nullptr, nullptr, sizeof(DcxVehicleDriveRawInputTank_eventSetRightThrust_Parms), Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightThrust_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightThrust_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightThrust_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightThrust_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightThrust()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightThrust_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDcxVehicleDriveRawInputTank_NoRegister()
	{
		return UDcxVehicleDriveRawInputTank::StaticClass();
	}
	struct Z_Construct_UClass_UDcxVehicleDriveRawInputTank_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDcxVehicleDriveRawInputTank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDcxVehicleDriveRawInput,
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDcxVehicleDriveRawInputTank_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftBrake, "GetLeftBrake" }, // 2683538841
		{ &Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetLeftThrust, "GetLeftThrust" }, // 53427012
		{ &Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightBrake, "GetRightBrake" }, // 2054808911
		{ &Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_GetRightThrust, "GetRightThrust" }, // 3971249002
		{ &Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftBrake, "SetLeftBrake" }, // 440570389
		{ &Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetLeftThrust, "SetLeftThrust" }, // 934807730
		{ &Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightBrake, "SetRightBrake" }, // 4167407597
		{ &Z_Construct_UFunction_UDcxVehicleDriveRawInputTank_SetRightThrust, "SetRightThrust" }, // 3651066238
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleDriveRawInputTank_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DcxVehicleDriveRawInputTank.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInputTank.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDcxVehicleDriveRawInputTank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDcxVehicleDriveRawInputTank>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDcxVehicleDriveRawInputTank_Statics::ClassParams = {
		&UDcxVehicleDriveRawInputTank::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleDriveRawInputTank_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveRawInputTank_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDcxVehicleDriveRawInputTank()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDcxVehicleDriveRawInputTank_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDcxVehicleDriveRawInputTank, 1862152932);
	template<> DCXVEHICLE_API UClass* StaticClass<UDcxVehicleDriveRawInputTank>()
	{
		return UDcxVehicleDriveRawInputTank::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDcxVehicleDriveRawInputTank(Z_Construct_UClass_UDcxVehicleDriveRawInputTank, &UDcxVehicleDriveRawInputTank::StaticClass, TEXT("/Script/DcxVehicle"), TEXT("UDcxVehicleDriveRawInputTank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDcxVehicleDriveRawInputTank);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
