// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleSuspensionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleSuspensionData() {}
// Cross Module References
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleSuspensionData();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
// End Cross Module References
class UScriptStruct* FDcxVehicleSuspensionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DCXVEHICLE_API uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDcxVehicleSuspensionData, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("DcxVehicleSuspensionData"), sizeof(FDcxVehicleSuspensionData), Get_Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Hash());
	}
	return Singleton;
}
template<> DCXVEHICLE_API UScriptStruct* StaticStruct<FDcxVehicleSuspensionData>()
{
	return FDcxVehicleSuspensionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDcxVehicleSuspensionData(FDcxVehicleSuspensionData::StaticStruct, TEXT("/Script/DcxVehicle"), TEXT("DcxVehicleSuspensionData"), false, nullptr, nullptr);
static struct FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleSuspensionData
{
	FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleSuspensionData()
	{
		UScriptStruct::DeferCppStructOps<FDcxVehicleSuspensionData>(FName(TEXT("DcxVehicleSuspensionData")));
	}
} ScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleSuspensionData;
	struct Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NaturalFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NaturalFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringDamperRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringDamperRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCompression_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCompression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDroop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDroop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamberAtRest_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CamberAtRest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamberAtMaxCompression_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CamberAtMaxCompression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamberAtMaxDroop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CamberAtMaxDroop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleSuspensionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDcxVehicleSuspensionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_NaturalFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleSuspensionData" },
		{ "ModuleRelativePath", "Public/DcxVehicleSuspensionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_NaturalFrequency = { "NaturalFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleSuspensionData, NaturalFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_NaturalFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_NaturalFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_SpringDamperRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleSuspensionData" },
		{ "ModuleRelativePath", "Public/DcxVehicleSuspensionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_SpringDamperRatio = { "SpringDamperRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleSuspensionData, SpringDamperRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_SpringDamperRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_SpringDamperRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_MaxCompression_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleSuspensionData" },
		{ "ModuleRelativePath", "Public/DcxVehicleSuspensionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_MaxCompression = { "MaxCompression", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleSuspensionData, MaxCompression), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_MaxCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_MaxCompression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_MaxDroop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleSuspensionData" },
		{ "ModuleRelativePath", "Public/DcxVehicleSuspensionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_MaxDroop = { "MaxDroop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleSuspensionData, MaxDroop), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_MaxDroop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_MaxDroop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_ForceOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleSuspensionData" },
		{ "ModuleRelativePath", "Public/DcxVehicleSuspensionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_ForceOffset = { "ForceOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleSuspensionData, ForceOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_ForceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_ForceOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_CamberAtRest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleSuspensionData" },
		{ "ModuleRelativePath", "Public/DcxVehicleSuspensionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_CamberAtRest = { "CamberAtRest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleSuspensionData, CamberAtRest), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_CamberAtRest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_CamberAtRest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_CamberAtMaxCompression_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleSuspensionData" },
		{ "ModuleRelativePath", "Public/DcxVehicleSuspensionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_CamberAtMaxCompression = { "CamberAtMaxCompression", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleSuspensionData, CamberAtMaxCompression), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_CamberAtMaxCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_CamberAtMaxCompression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_CamberAtMaxDroop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleSuspensionData" },
		{ "ModuleRelativePath", "Public/DcxVehicleSuspensionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_CamberAtMaxDroop = { "CamberAtMaxDroop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleSuspensionData, CamberAtMaxDroop), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_CamberAtMaxDroop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_CamberAtMaxDroop_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_NaturalFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_SpringDamperRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_MaxCompression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_MaxDroop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_ForceOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_CamberAtRest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_CamberAtMaxCompression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::NewProp_CamberAtMaxDroop,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
		nullptr,
		&NewStructOps,
		"DcxVehicleSuspensionData",
		sizeof(FDcxVehicleSuspensionData),
		alignof(FDcxVehicleSuspensionData),
		Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleSuspensionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DcxVehicleSuspensionData"), sizeof(FDcxVehicleSuspensionData), Get_Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleSuspensionData_Hash() { return 862538868U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
