// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleWheelData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleWheelData() {}
// Cross Module References
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleWheelData();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
// End Cross Module References
class UScriptStruct* FDcxVehicleWheelData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DCXVEHICLE_API uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleWheelData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDcxVehicleWheelData, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("DcxVehicleWheelData"), sizeof(FDcxVehicleWheelData), Get_Z_Construct_UScriptStruct_FDcxVehicleWheelData_Hash());
	}
	return Singleton;
}
template<> DCXVEHICLE_API UScriptStruct* StaticStruct<FDcxVehicleWheelData>()
{
	return FDcxVehicleWheelData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDcxVehicleWheelData(FDcxVehicleWheelData::StaticStruct, TEXT("/Script/DcxVehicle"), TEXT("DcxVehicleWheelData"), false, nullptr, nullptr);
static struct FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleWheelData
{
	FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleWheelData()
	{
		UScriptStruct::DeferCppStructOps<FDcxVehicleWheelData>(FName(TEXT("DcxVehicleWheelData")));
	}
} ScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleWheelData;
	struct Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampingRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DampingRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBrakeTorque_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBrakeTorque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHandBrakeTorque_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHandBrakeTorque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSteer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSteer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToeAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ToeAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDcxVehicleWheelData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelData" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelData, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_Width_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelData" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelData, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_Mass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelData" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelData, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_DampingRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelData" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_DampingRate = { "DampingRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelData, DampingRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_DampingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_DampingRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_MaxBrakeTorque_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelData" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_MaxBrakeTorque = { "MaxBrakeTorque", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelData, MaxBrakeTorque), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_MaxBrakeTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_MaxBrakeTorque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_MaxHandBrakeTorque_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelData" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_MaxHandBrakeTorque = { "MaxHandBrakeTorque", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelData, MaxHandBrakeTorque), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_MaxHandBrakeTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_MaxHandBrakeTorque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_MaxSteer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelData" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_MaxSteer = { "MaxSteer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelData, MaxSteer), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_MaxSteer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_MaxSteer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_ToeAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelData" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_ToeAngle = { "ToeAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelData, ToeAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_ToeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_ToeAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_DampingRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_MaxBrakeTorque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_MaxHandBrakeTorque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_MaxSteer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::NewProp_ToeAngle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
		nullptr,
		&NewStructOps,
		"DcxVehicleWheelData",
		sizeof(FDcxVehicleWheelData),
		alignof(FDcxVehicleWheelData),
		Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleWheelData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleWheelData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DcxVehicleWheelData"), sizeof(FDcxVehicleWheelData), Get_Z_Construct_UScriptStruct_FDcxVehicleWheelData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDcxVehicleWheelData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleWheelData_Hash() { return 3865571109U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
