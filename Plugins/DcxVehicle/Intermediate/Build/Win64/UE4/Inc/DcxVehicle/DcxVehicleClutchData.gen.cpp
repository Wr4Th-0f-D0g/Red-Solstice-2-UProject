// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleClutchData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleClutchData() {}
// Cross Module References
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleClutchData();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
	DCXVEHICLE_API UEnum* Z_Construct_UEnum_DcxVehicle_EDcxVehicleClutchAccuracyMode();
// End Cross Module References
class UScriptStruct* FDcxVehicleClutchData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DCXVEHICLE_API uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleClutchData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDcxVehicleClutchData, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("DcxVehicleClutchData"), sizeof(FDcxVehicleClutchData), Get_Z_Construct_UScriptStruct_FDcxVehicleClutchData_Hash());
	}
	return Singleton;
}
template<> DCXVEHICLE_API UScriptStruct* StaticStruct<FDcxVehicleClutchData>()
{
	return FDcxVehicleClutchData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDcxVehicleClutchData(FDcxVehicleClutchData::StaticStruct, TEXT("/Script/DcxVehicle"), TEXT("DcxVehicleClutchData"), false, nullptr, nullptr);
static struct FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleClutchData
{
	FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleClutchData()
	{
		UScriptStruct::DeferCppStructOps<FDcxVehicleClutchData>(FName(TEXT("DcxVehicleClutchData")));
	}
} ScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleClutchData;
	struct Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BitePoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccuracyMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AccuracyMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EstimateIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EstimateIterations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleClutchData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDcxVehicleClutchData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::NewProp_BitePoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleClutchData" },
		{ "ModuleRelativePath", "Public/DcxVehicleClutchData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::NewProp_BitePoint = { "BitePoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleClutchData, BitePoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::NewProp_BitePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::NewProp_BitePoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::NewProp_Strength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleClutchData" },
		{ "ModuleRelativePath", "Public/DcxVehicleClutchData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleClutchData, Strength), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::NewProp_AccuracyMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleClutchData" },
		{ "ModuleRelativePath", "Public/DcxVehicleClutchData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::NewProp_AccuracyMode = { "AccuracyMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleClutchData, AccuracyMode), Z_Construct_UEnum_DcxVehicle_EDcxVehicleClutchAccuracyMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::NewProp_AccuracyMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::NewProp_AccuracyMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::NewProp_EstimateIterations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleClutchData" },
		{ "ModuleRelativePath", "Public/DcxVehicleClutchData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::NewProp_EstimateIterations = { "EstimateIterations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleClutchData, EstimateIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::NewProp_EstimateIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::NewProp_EstimateIterations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::NewProp_BitePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::NewProp_AccuracyMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::NewProp_EstimateIterations,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
		nullptr,
		&NewStructOps,
		"DcxVehicleClutchData",
		sizeof(FDcxVehicleClutchData),
		alignof(FDcxVehicleClutchData),
		Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleClutchData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleClutchData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DcxVehicleClutchData"), sizeof(FDcxVehicleClutchData), Get_Z_Construct_UScriptStruct_FDcxVehicleClutchData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDcxVehicleClutchData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleClutchData_Hash() { return 4162672621U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
