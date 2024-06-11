// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleEngineData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleEngineData() {}
// Cross Module References
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleEngineData();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
class UScriptStruct* FDcxVehicleEngineData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DCXVEHICLE_API uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleEngineData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDcxVehicleEngineData, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("DcxVehicleEngineData"), sizeof(FDcxVehicleEngineData), Get_Z_Construct_UScriptStruct_FDcxVehicleEngineData_Hash());
	}
	return Singleton;
}
template<> DCXVEHICLE_API UScriptStruct* StaticStruct<FDcxVehicleEngineData>()
{
	return FDcxVehicleEngineData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDcxVehicleEngineData(FDcxVehicleEngineData::StaticStruct, TEXT("/Script/DcxVehicle"), TEXT("DcxVehicleEngineData"), false, nullptr, nullptr);
static struct FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleEngineData
{
	FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleEngineData()
	{
		UScriptStruct::DeferCppStructOps<FDcxVehicleEngineData>(FName(TEXT("DcxVehicleEngineData")));
	}
} ScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleEngineData;
	struct Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TorqueCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TorqueCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MOI_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MOI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleRPM_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IdleRPM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRPM_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRPM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampingRateFullThrottle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DampingRateFullThrottle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampingRateZeroThrottleClutchEngaged_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DampingRateZeroThrottleClutchEngaged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampingRateZeroThrottleClutchDisengaged_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DampingRateZeroThrottleClutchDisengaged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleEngineData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDcxVehicleEngineData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_TorqueCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleEngineData" },
		{ "ModuleRelativePath", "Public/DcxVehicleEngineData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_TorqueCurve = { "TorqueCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleEngineData, TorqueCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_TorqueCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_TorqueCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_MOI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleEngineData" },
		{ "ModuleRelativePath", "Public/DcxVehicleEngineData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_MOI = { "MOI", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleEngineData, MOI), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_MOI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_MOI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_IdleRPM_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleEngineData" },
		{ "ModuleRelativePath", "Public/DcxVehicleEngineData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_IdleRPM = { "IdleRPM", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleEngineData, IdleRPM), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_IdleRPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_IdleRPM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_MaxRPM_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleEngineData" },
		{ "ModuleRelativePath", "Public/DcxVehicleEngineData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_MaxRPM = { "MaxRPM", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleEngineData, MaxRPM), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_MaxRPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_MaxRPM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_DampingRateFullThrottle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleEngineData" },
		{ "ModuleRelativePath", "Public/DcxVehicleEngineData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_DampingRateFullThrottle = { "DampingRateFullThrottle", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleEngineData, DampingRateFullThrottle), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_DampingRateFullThrottle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_DampingRateFullThrottle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_DampingRateZeroThrottleClutchEngaged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleEngineData" },
		{ "ModuleRelativePath", "Public/DcxVehicleEngineData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_DampingRateZeroThrottleClutchEngaged = { "DampingRateZeroThrottleClutchEngaged", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleEngineData, DampingRateZeroThrottleClutchEngaged), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_DampingRateZeroThrottleClutchEngaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_DampingRateZeroThrottleClutchEngaged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_DampingRateZeroThrottleClutchDisengaged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleEngineData" },
		{ "ModuleRelativePath", "Public/DcxVehicleEngineData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_DampingRateZeroThrottleClutchDisengaged = { "DampingRateZeroThrottleClutchDisengaged", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleEngineData, DampingRateZeroThrottleClutchDisengaged), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_DampingRateZeroThrottleClutchDisengaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_DampingRateZeroThrottleClutchDisengaged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_TorqueCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_MOI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_IdleRPM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_MaxRPM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_DampingRateFullThrottle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_DampingRateZeroThrottleClutchEngaged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::NewProp_DampingRateZeroThrottleClutchDisengaged,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
		nullptr,
		&NewStructOps,
		"DcxVehicleEngineData",
		sizeof(FDcxVehicleEngineData),
		alignof(FDcxVehicleEngineData),
		Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleEngineData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleEngineData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DcxVehicleEngineData"), sizeof(FDcxVehicleEngineData), Get_Z_Construct_UScriptStruct_FDcxVehicleEngineData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDcxVehicleEngineData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleEngineData_Hash() { return 3532363746U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
