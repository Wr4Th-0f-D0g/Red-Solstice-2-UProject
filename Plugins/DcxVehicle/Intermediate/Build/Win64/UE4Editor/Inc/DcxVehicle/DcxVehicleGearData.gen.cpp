// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleGearData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleGearData() {}
// Cross Module References
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleGearData();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
// End Cross Module References
class UScriptStruct* FDcxVehicleGearData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DCXVEHICLE_API uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleGearData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDcxVehicleGearData, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("DcxVehicleGearData"), sizeof(FDcxVehicleGearData), Get_Z_Construct_UScriptStruct_FDcxVehicleGearData_Hash());
	}
	return Singleton;
}
template<> DCXVEHICLE_API UScriptStruct* StaticStruct<FDcxVehicleGearData>()
{
	return FDcxVehicleGearData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDcxVehicleGearData(FDcxVehicleGearData::StaticStruct, TEXT("/Script/DcxVehicle"), TEXT("DcxVehicleGearData"), false, nullptr, nullptr);
static struct FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleGearData
{
	FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleGearData()
	{
		UScriptStruct::DeferCppStructOps<FDcxVehicleGearData>(FName(TEXT("DcxVehicleGearData")));
	}
} ScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleGearData;
	struct Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ratio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleGearData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDcxVehicleGearData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::NewProp_Ratio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleGearData" },
		{ "ModuleRelativePath", "Public/DcxVehicleGearData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleGearData, Ratio), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::NewProp_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::NewProp_Ratio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::NewProp_DownRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleGearData" },
		{ "ModuleRelativePath", "Public/DcxVehicleGearData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::NewProp_DownRatio = { "DownRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleGearData, DownRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::NewProp_DownRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::NewProp_DownRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::NewProp_UpRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleGearData" },
		{ "ModuleRelativePath", "Public/DcxVehicleGearData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::NewProp_UpRatio = { "UpRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleGearData, UpRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::NewProp_UpRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::NewProp_UpRatio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::NewProp_Ratio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::NewProp_DownRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::NewProp_UpRatio,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
		nullptr,
		&NewStructOps,
		"DcxVehicleGearData",
		sizeof(FDcxVehicleGearData),
		alignof(FDcxVehicleGearData),
		Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleGearData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleGearData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DcxVehicleGearData"), sizeof(FDcxVehicleGearData), Get_Z_Construct_UScriptStruct_FDcxVehicleGearData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDcxVehicleGearData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleGearData_Hash() { return 1760462963U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
