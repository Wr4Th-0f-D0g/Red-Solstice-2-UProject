// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleDriveRawInput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleDriveRawInput() {}
// Cross Module References
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveRawInput_NoRegister();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveRawInput();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleWheelsRawInput();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
// End Cross Module References
	DEFINE_FUNCTION(UDcxVehicleDriveRawInput::execGetClutch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetClutch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveRawInput::execGetGearDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGearDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveRawInput::execGetGearUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGearUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveRawInput::execSetClutch)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Clutch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClutch(Z_Param_Clutch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveRawInput::execSetGearDown)
	{
		P_GET_UBOOL(Z_Param_bGearDownPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGearDown(Z_Param_bGearDownPressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveRawInput::execSetGearUp)
	{
		P_GET_UBOOL(Z_Param_bGearUpPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGearUp(Z_Param_bGearUpPressed);
		P_NATIVE_END;
	}
	void UDcxVehicleDriveRawInput::StaticRegisterNativesUDcxVehicleDriveRawInput()
	{
		UClass* Class = UDcxVehicleDriveRawInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetClutch", &UDcxVehicleDriveRawInput::execGetClutch },
			{ "GetGearDown", &UDcxVehicleDriveRawInput::execGetGearDown },
			{ "GetGearUp", &UDcxVehicleDriveRawInput::execGetGearUp },
			{ "SetClutch", &UDcxVehicleDriveRawInput::execSetClutch },
			{ "SetGearDown", &UDcxVehicleDriveRawInput::execSetGearDown },
			{ "SetGearUp", &UDcxVehicleDriveRawInput::execSetGearUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetClutch_Statics
	{
		struct DcxVehicleDriveRawInput_eventGetClutch_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetClutch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveRawInput_eventGetClutch_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetClutch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetClutch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetClutch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetClutch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveRawInput, nullptr, "GetClutch", nullptr, nullptr, sizeof(DcxVehicleDriveRawInput_eventGetClutch_Parms), Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetClutch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetClutch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetClutch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetClutch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetClutch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetClutch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearDown_Statics
	{
		struct DcxVehicleDriveRawInput_eventGetGearDown_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DcxVehicleDriveRawInput_eventGetGearDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DcxVehicleDriveRawInput_eventGetGearDown_Parms), &Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveRawInput, nullptr, "GetGearDown", nullptr, nullptr, sizeof(DcxVehicleDriveRawInput_eventGetGearDown_Parms), Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearUp_Statics
	{
		struct DcxVehicleDriveRawInput_eventGetGearUp_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DcxVehicleDriveRawInput_eventGetGearUp_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DcxVehicleDriveRawInput_eventGetGearUp_Parms), &Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearUp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveRawInput, nullptr, "GetGearUp", nullptr, nullptr, sizeof(DcxVehicleDriveRawInput_eventGetGearUp_Parms), Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetClutch_Statics
	{
		struct DcxVehicleDriveRawInput_eventSetClutch_Parms
		{
			float Clutch;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Clutch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Clutch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetClutch_Statics::NewProp_Clutch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetClutch_Statics::NewProp_Clutch = { "Clutch", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveRawInput_eventSetClutch_Parms, Clutch), METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetClutch_Statics::NewProp_Clutch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetClutch_Statics::NewProp_Clutch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetClutch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetClutch_Statics::NewProp_Clutch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetClutch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetClutch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveRawInput, nullptr, "SetClutch", nullptr, nullptr, sizeof(DcxVehicleDriveRawInput_eventSetClutch_Parms), Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetClutch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetClutch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetClutch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetClutch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetClutch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetClutch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearDown_Statics
	{
		struct DcxVehicleDriveRawInput_eventSetGearDown_Parms
		{
			bool bGearDownPressed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGearDownPressed_MetaData[];
#endif
		static void NewProp_bGearDownPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGearDownPressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearDown_Statics::NewProp_bGearDownPressed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearDown_Statics::NewProp_bGearDownPressed_SetBit(void* Obj)
	{
		((DcxVehicleDriveRawInput_eventSetGearDown_Parms*)Obj)->bGearDownPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearDown_Statics::NewProp_bGearDownPressed = { "bGearDownPressed", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DcxVehicleDriveRawInput_eventSetGearDown_Parms), &Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearDown_Statics::NewProp_bGearDownPressed_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearDown_Statics::NewProp_bGearDownPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearDown_Statics::NewProp_bGearDownPressed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearDown_Statics::NewProp_bGearDownPressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveRawInput, nullptr, "SetGearDown", nullptr, nullptr, sizeof(DcxVehicleDriveRawInput_eventSetGearDown_Parms), Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearUp_Statics
	{
		struct DcxVehicleDriveRawInput_eventSetGearUp_Parms
		{
			bool bGearUpPressed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGearUpPressed_MetaData[];
#endif
		static void NewProp_bGearUpPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGearUpPressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearUp_Statics::NewProp_bGearUpPressed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearUp_Statics::NewProp_bGearUpPressed_SetBit(void* Obj)
	{
		((DcxVehicleDriveRawInput_eventSetGearUp_Parms*)Obj)->bGearUpPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearUp_Statics::NewProp_bGearUpPressed = { "bGearUpPressed", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DcxVehicleDriveRawInput_eventSetGearUp_Parms), &Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearUp_Statics::NewProp_bGearUpPressed_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearUp_Statics::NewProp_bGearUpPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearUp_Statics::NewProp_bGearUpPressed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearUp_Statics::NewProp_bGearUpPressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveRawInput, nullptr, "SetGearUp", nullptr, nullptr, sizeof(DcxVehicleDriveRawInput_eventSetGearUp_Parms), Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDcxVehicleDriveRawInput_NoRegister()
	{
		return UDcxVehicleDriveRawInput::StaticClass();
	}
	struct Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClutchIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClutchIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGearUp_MetaData[];
#endif
		static void NewProp_bGearUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGearUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGearDown_MetaData[];
#endif
		static void NewProp_bGearDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGearDown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDcxVehicleWheelsRawInput,
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetClutch, "GetClutch" }, // 826755280
		{ &Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearDown, "GetGearDown" }, // 3849619223
		{ &Z_Construct_UFunction_UDcxVehicleDriveRawInput_GetGearUp, "GetGearUp" }, // 1684628517
		{ &Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetClutch, "SetClutch" }, // 3883267783
		{ &Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearDown, "SetGearDown" }, // 2034861930
		{ &Z_Construct_UFunction_UDcxVehicleDriveRawInput_SetGearUp, "SetGearUp" }, // 240450538
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DcxVehicleDriveRawInput.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInput.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::NewProp_ClutchIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDriveRawInput" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInput.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::NewProp_ClutchIndex = { "ClutchIndex", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleDriveRawInput, ClutchIndex), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::NewProp_ClutchIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::NewProp_ClutchIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::NewProp_bGearUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDriveRawInput" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInput.h" },
	};
#endif
	void Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::NewProp_bGearUp_SetBit(void* Obj)
	{
		((UDcxVehicleDriveRawInput*)Obj)->bGearUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::NewProp_bGearUp = { "bGearUp", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDcxVehicleDriveRawInput), &Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::NewProp_bGearUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::NewProp_bGearUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::NewProp_bGearUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::NewProp_bGearDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDriveRawInput" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveRawInput.h" },
	};
#endif
	void Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::NewProp_bGearDown_SetBit(void* Obj)
	{
		((UDcxVehicleDriveRawInput*)Obj)->bGearDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::NewProp_bGearDown = { "bGearDown", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDcxVehicleDriveRawInput), &Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::NewProp_bGearDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::NewProp_bGearDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::NewProp_bGearDown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::NewProp_ClutchIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::NewProp_bGearUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::NewProp_bGearDown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDcxVehicleDriveRawInput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::ClassParams = {
		&UDcxVehicleDriveRawInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDcxVehicleDriveRawInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDcxVehicleDriveRawInput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDcxVehicleDriveRawInput, 847056294);
	template<> DCXVEHICLE_API UClass* StaticClass<UDcxVehicleDriveRawInput>()
	{
		return UDcxVehicleDriveRawInput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDcxVehicleDriveRawInput(Z_Construct_UClass_UDcxVehicleDriveRawInput, &UDcxVehicleDriveRawInput::StaticClass, TEXT("/Script/DcxVehicle"), TEXT("UDcxVehicleDriveRawInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDcxVehicleDriveRawInput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
