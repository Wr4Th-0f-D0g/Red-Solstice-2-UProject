// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleDriveComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleDriveComponent() {}
// Cross Module References
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveComponent_NoRegister();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveComponent();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleWheelsComponent();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleClutchData();
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleEngineData();
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleGearboxData();
	DCXVEHICLE_API UEnum* Z_Construct_UEnum_DcxVehicle_EDcxVehicleGearbox();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
	DEFINE_FUNCTION(UDcxVehicleDriveComponent::execGetClutchData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDcxVehicleClutchData*)Z_Param__Result=P_THIS->GetClutchData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveComponent::execGetCurrentGear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentGear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveComponent::execGetEngineData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDcxVehicleEngineData*)Z_Param__Result=P_THIS->GetEngineData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveComponent::execGetEngineRotationSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEngineRotationSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveComponent::execGetGearboxData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDcxVehicleGearboxData*)Z_Param__Result=P_THIS->GetGearboxData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveComponent::execGetGearboxType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EDcxVehicleGearbox::Type>*)Z_Param__Result=P_THIS->GetGearboxType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveComponent::execGetTargetGear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTargetGear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveComponent::execSetClutchData)
	{
		P_GET_STRUCT(FDcxVehicleClutchData,Z_Param_NewClutchData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClutchData(Z_Param_NewClutchData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveComponent::execSetEngineData)
	{
		P_GET_STRUCT(FDcxVehicleEngineData,Z_Param_NewEngineData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEngineData(Z_Param_NewEngineData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveComponent::execSetEngineRotationSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RPM);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEngineRotationSpeed(Z_Param_RPM);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveComponent::execSetGearboxData)
	{
		P_GET_STRUCT(FDcxVehicleGearboxData,Z_Param_NewGearboxData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGearboxData(Z_Param_NewGearboxData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveComponent::execSetGearboxType)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewGearboxType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGearboxType(EDcxVehicleGearbox::Type(Z_Param_NewGearboxType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveComponent::execSetTargetGear)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewGear);
		P_GET_UBOOL(Z_Param_bImmediate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetGear(Z_Param_NewGear,Z_Param_bImmediate);
		P_NATIVE_END;
	}
	void UDcxVehicleDriveComponent::StaticRegisterNativesUDcxVehicleDriveComponent()
	{
		UClass* Class = UDcxVehicleDriveComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetClutchData", &UDcxVehicleDriveComponent::execGetClutchData },
			{ "GetCurrentGear", &UDcxVehicleDriveComponent::execGetCurrentGear },
			{ "GetEngineData", &UDcxVehicleDriveComponent::execGetEngineData },
			{ "GetEngineRotationSpeed", &UDcxVehicleDriveComponent::execGetEngineRotationSpeed },
			{ "GetGearboxData", &UDcxVehicleDriveComponent::execGetGearboxData },
			{ "GetGearboxType", &UDcxVehicleDriveComponent::execGetGearboxType },
			{ "GetTargetGear", &UDcxVehicleDriveComponent::execGetTargetGear },
			{ "SetClutchData", &UDcxVehicleDriveComponent::execSetClutchData },
			{ "SetEngineData", &UDcxVehicleDriveComponent::execSetEngineData },
			{ "SetEngineRotationSpeed", &UDcxVehicleDriveComponent::execSetEngineRotationSpeed },
			{ "SetGearboxData", &UDcxVehicleDriveComponent::execSetGearboxData },
			{ "SetGearboxType", &UDcxVehicleDriveComponent::execSetGearboxType },
			{ "SetTargetGear", &UDcxVehicleDriveComponent::execSetTargetGear },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveComponent_GetClutchData_Statics
	{
		struct DcxVehicleDriveComponent_eventGetClutchData_Parms
		{
			FDcxVehicleClutchData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponent_GetClutchData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveComponent_eventGetClutchData_Parms, ReturnValue), Z_Construct_UScriptStruct_FDcxVehicleClutchData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveComponent_GetClutchData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponent_GetClutchData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveComponent_GetClutchData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveComponent_GetClutchData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveComponent, nullptr, "GetClutchData", nullptr, nullptr, sizeof(DcxVehicleDriveComponent_eventGetClutchData_Parms), Z_Construct_UFunction_UDcxVehicleDriveComponent_GetClutchData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_GetClutchData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveComponent_GetClutchData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_GetClutchData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveComponent_GetClutchData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveComponent_GetClutchData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveComponent_GetCurrentGear_Statics
	{
		struct DcxVehicleDriveComponent_eventGetCurrentGear_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponent_GetCurrentGear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveComponent_eventGetCurrentGear_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveComponent_GetCurrentGear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponent_GetCurrentGear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveComponent_GetCurrentGear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveComponent_GetCurrentGear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveComponent, nullptr, "GetCurrentGear", nullptr, nullptr, sizeof(DcxVehicleDriveComponent_eventGetCurrentGear_Parms), Z_Construct_UFunction_UDcxVehicleDriveComponent_GetCurrentGear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_GetCurrentGear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveComponent_GetCurrentGear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_GetCurrentGear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveComponent_GetCurrentGear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveComponent_GetCurrentGear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineData_Statics
	{
		struct DcxVehicleDriveComponent_eventGetEngineData_Parms
		{
			FDcxVehicleEngineData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveComponent_eventGetEngineData_Parms, ReturnValue), Z_Construct_UScriptStruct_FDcxVehicleEngineData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveComponent, nullptr, "GetEngineData", nullptr, nullptr, sizeof(DcxVehicleDriveComponent_eventGetEngineData_Parms), Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineRotationSpeed_Statics
	{
		struct DcxVehicleDriveComponent_eventGetEngineRotationSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineRotationSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveComponent_eventGetEngineRotationSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineRotationSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineRotationSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineRotationSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineRotationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveComponent, nullptr, "GetEngineRotationSpeed", nullptr, nullptr, sizeof(DcxVehicleDriveComponent_eventGetEngineRotationSpeed_Parms), Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineRotationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineRotationSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineRotationSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineRotationSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineRotationSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineRotationSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxData_Statics
	{
		struct DcxVehicleDriveComponent_eventGetGearboxData_Parms
		{
			FDcxVehicleGearboxData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveComponent_eventGetGearboxData_Parms, ReturnValue), Z_Construct_UScriptStruct_FDcxVehicleGearboxData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveComponent, nullptr, "GetGearboxData", nullptr, nullptr, sizeof(DcxVehicleDriveComponent_eventGetGearboxData_Parms), Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxType_Statics
	{
		struct DcxVehicleDriveComponent_eventGetGearboxType_Parms
		{
			TEnumAsByte<EDcxVehicleGearbox::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveComponent_eventGetGearboxType_Parms, ReturnValue), Z_Construct_UEnum_DcxVehicle_EDcxVehicleGearbox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveComponent, nullptr, "GetGearboxType", nullptr, nullptr, sizeof(DcxVehicleDriveComponent_eventGetGearboxType_Parms), Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveComponent_GetTargetGear_Statics
	{
		struct DcxVehicleDriveComponent_eventGetTargetGear_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponent_GetTargetGear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveComponent_eventGetTargetGear_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveComponent_GetTargetGear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponent_GetTargetGear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveComponent_GetTargetGear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveComponent_GetTargetGear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveComponent, nullptr, "GetTargetGear", nullptr, nullptr, sizeof(DcxVehicleDriveComponent_eventGetTargetGear_Parms), Z_Construct_UFunction_UDcxVehicleDriveComponent_GetTargetGear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_GetTargetGear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveComponent_GetTargetGear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_GetTargetGear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveComponent_GetTargetGear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveComponent_GetTargetGear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveComponent_SetClutchData_Statics
	{
		struct DcxVehicleDriveComponent_eventSetClutchData_Parms
		{
			FDcxVehicleClutchData NewClutchData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewClutchData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponent_SetClutchData_Statics::NewProp_NewClutchData = { "NewClutchData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveComponent_eventSetClutchData_Parms, NewClutchData), Z_Construct_UScriptStruct_FDcxVehicleClutchData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveComponent_SetClutchData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponent_SetClutchData_Statics::NewProp_NewClutchData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveComponent_SetClutchData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveComponent_SetClutchData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveComponent, nullptr, "SetClutchData", nullptr, nullptr, sizeof(DcxVehicleDriveComponent_eventSetClutchData_Parms), Z_Construct_UFunction_UDcxVehicleDriveComponent_SetClutchData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_SetClutchData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveComponent_SetClutchData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_SetClutchData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveComponent_SetClutchData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveComponent_SetClutchData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineData_Statics
	{
		struct DcxVehicleDriveComponent_eventSetEngineData_Parms
		{
			FDcxVehicleEngineData NewEngineData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewEngineData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineData_Statics::NewProp_NewEngineData = { "NewEngineData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveComponent_eventSetEngineData_Parms, NewEngineData), Z_Construct_UScriptStruct_FDcxVehicleEngineData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineData_Statics::NewProp_NewEngineData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveComponent, nullptr, "SetEngineData", nullptr, nullptr, sizeof(DcxVehicleDriveComponent_eventSetEngineData_Parms), Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineRotationSpeed_Statics
	{
		struct DcxVehicleDriveComponent_eventSetEngineRotationSpeed_Parms
		{
			float RPM;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RPM;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineRotationSpeed_Statics::NewProp_RPM = { "RPM", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveComponent_eventSetEngineRotationSpeed_Parms, RPM), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineRotationSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineRotationSpeed_Statics::NewProp_RPM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineRotationSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineRotationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveComponent, nullptr, "SetEngineRotationSpeed", nullptr, nullptr, sizeof(DcxVehicleDriveComponent_eventSetEngineRotationSpeed_Parms), Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineRotationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineRotationSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineRotationSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineRotationSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineRotationSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineRotationSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxData_Statics
	{
		struct DcxVehicleDriveComponent_eventSetGearboxData_Parms
		{
			FDcxVehicleGearboxData NewGearboxData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGearboxData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxData_Statics::NewProp_NewGearboxData = { "NewGearboxData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveComponent_eventSetGearboxData_Parms, NewGearboxData), Z_Construct_UScriptStruct_FDcxVehicleGearboxData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxData_Statics::NewProp_NewGearboxData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveComponent, nullptr, "SetGearboxData", nullptr, nullptr, sizeof(DcxVehicleDriveComponent_eventSetGearboxData_Parms), Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxType_Statics
	{
		struct DcxVehicleDriveComponent_eventSetGearboxType_Parms
		{
			TEnumAsByte<EDcxVehicleGearbox::Type> NewGearboxType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewGearboxType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxType_Statics::NewProp_NewGearboxType = { "NewGearboxType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveComponent_eventSetGearboxType_Parms, NewGearboxType), Z_Construct_UEnum_DcxVehicle_EDcxVehicleGearbox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxType_Statics::NewProp_NewGearboxType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveComponent, nullptr, "SetGearboxType", nullptr, nullptr, sizeof(DcxVehicleDriveComponent_eventSetGearboxType_Parms), Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveComponent_SetTargetGear_Statics
	{
		struct DcxVehicleDriveComponent_eventSetTargetGear_Parms
		{
			int32 NewGear;
			bool bImmediate;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewGear;
		static void NewProp_bImmediate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponent_SetTargetGear_Statics::NewProp_NewGear = { "NewGear", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveComponent_eventSetTargetGear_Parms, NewGear), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDcxVehicleDriveComponent_SetTargetGear_Statics::NewProp_bImmediate_SetBit(void* Obj)
	{
		((DcxVehicleDriveComponent_eventSetTargetGear_Parms*)Obj)->bImmediate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponent_SetTargetGear_Statics::NewProp_bImmediate = { "bImmediate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DcxVehicleDriveComponent_eventSetTargetGear_Parms), &Z_Construct_UFunction_UDcxVehicleDriveComponent_SetTargetGear_Statics::NewProp_bImmediate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveComponent_SetTargetGear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponent_SetTargetGear_Statics::NewProp_NewGear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponent_SetTargetGear_Statics::NewProp_bImmediate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveComponent_SetTargetGear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveComponent_SetTargetGear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveComponent, nullptr, "SetTargetGear", nullptr, nullptr, sizeof(DcxVehicleDriveComponent_eventSetTargetGear_Parms), Z_Construct_UFunction_UDcxVehicleDriveComponent_SetTargetGear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_SetTargetGear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveComponent_SetTargetGear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent_SetTargetGear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveComponent_SetTargetGear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveComponent_SetTargetGear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDcxVehicleDriveComponent_NoRegister()
	{
		return UDcxVehicleDriveComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDcxVehicleDriveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EngineData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearboxData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GearboxData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClutchData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClutchData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoReverse_MetaData[];
#endif
		static void NewProp_bAutoReverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoReverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrongDirectionThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WrongDirectionThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoBrake_MetaData[];
#endif
		static void NewProp_bAutoBrake_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoBrake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteerCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteerCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDcxVehicleWheelsComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDcxVehicleDriveComponent_GetClutchData, "GetClutchData" }, // 1105396904
		{ &Z_Construct_UFunction_UDcxVehicleDriveComponent_GetCurrentGear, "GetCurrentGear" }, // 557686851
		{ &Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineData, "GetEngineData" }, // 522175990
		{ &Z_Construct_UFunction_UDcxVehicleDriveComponent_GetEngineRotationSpeed, "GetEngineRotationSpeed" }, // 2163411596
		{ &Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxData, "GetGearboxData" }, // 2807722229
		{ &Z_Construct_UFunction_UDcxVehicleDriveComponent_GetGearboxType, "GetGearboxType" }, // 1296960833
		{ &Z_Construct_UFunction_UDcxVehicleDriveComponent_GetTargetGear, "GetTargetGear" }, // 2303520107
		{ &Z_Construct_UFunction_UDcxVehicleDriveComponent_SetClutchData, "SetClutchData" }, // 2732142638
		{ &Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineData, "SetEngineData" }, // 1572511961
		{ &Z_Construct_UFunction_UDcxVehicleDriveComponent_SetEngineRotationSpeed, "SetEngineRotationSpeed" }, // 3589054419
		{ &Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxData, "SetGearboxData" }, // 3983137985
		{ &Z_Construct_UFunction_UDcxVehicleDriveComponent_SetGearboxType, "SetGearboxType" }, // 4069556870
		{ &Z_Construct_UFunction_UDcxVehicleDriveComponent_SetTargetGear, "SetTargetGear" }, // 132235616
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DcxVehicleDriveComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_EngineData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDriveComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_EngineData = { "EngineData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleDriveComponent, EngineData), Z_Construct_UScriptStruct_FDcxVehicleEngineData, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_EngineData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_EngineData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_GearboxData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDriveComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_GearboxData = { "GearboxData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleDriveComponent, GearboxData), Z_Construct_UScriptStruct_FDcxVehicleGearboxData, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_GearboxData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_GearboxData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_ClutchData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDriveComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_ClutchData = { "ClutchData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleDriveComponent, ClutchData), Z_Construct_UScriptStruct_FDcxVehicleClutchData, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_ClutchData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_ClutchData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_bAutoReverse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDriveComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_bAutoReverse_SetBit(void* Obj)
	{
		((UDcxVehicleDriveComponent*)Obj)->bAutoReverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_bAutoReverse = { "bAutoReverse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDcxVehicleDriveComponent), &Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_bAutoReverse_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_bAutoReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_bAutoReverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_WrongDirectionThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDriveComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_WrongDirectionThreshold = { "WrongDirectionThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleDriveComponent, WrongDirectionThreshold), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_WrongDirectionThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_WrongDirectionThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_bAutoBrake_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDriveComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_bAutoBrake_SetBit(void* Obj)
	{
		((UDcxVehicleDriveComponent*)Obj)->bAutoBrake = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_bAutoBrake = { "bAutoBrake", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDcxVehicleDriveComponent), &Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_bAutoBrake_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_bAutoBrake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_bAutoBrake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_StopThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDriveComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_StopThreshold = { "StopThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleDriveComponent, StopThreshold), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_StopThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_StopThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_SteerCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDriveComponent" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_SteerCurve = { "SteerCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleDriveComponent, SteerCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_SteerCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_SteerCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_EngineData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_GearboxData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_ClutchData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_bAutoReverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_WrongDirectionThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_bAutoBrake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_StopThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::NewProp_SteerCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDcxVehicleDriveComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::ClassParams = {
		&UDcxVehicleDriveComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDcxVehicleDriveComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDcxVehicleDriveComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDcxVehicleDriveComponent, 4229159226);
	template<> DCXVEHICLE_API UClass* StaticClass<UDcxVehicleDriveComponent>()
	{
		return UDcxVehicleDriveComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDcxVehicleDriveComponent(Z_Construct_UClass_UDcxVehicleDriveComponent, &UDcxVehicleDriveComponent::StaticClass, TEXT("/Script/DcxVehicle"), TEXT("UDcxVehicleDriveComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDcxVehicleDriveComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
