// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleGearboxData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleGearboxData() {}
// Cross Module References
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleGearboxData();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
	DCXVEHICLE_API UEnum* Z_Construct_UEnum_DcxVehicle_EDcxVehicleGearbox();
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleGearData();
// End Cross Module References
class UScriptStruct* FDcxVehicleGearboxData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DCXVEHICLE_API uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDcxVehicleGearboxData, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("DcxVehicleGearboxData"), sizeof(FDcxVehicleGearboxData), Get_Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Hash());
	}
	return Singleton;
}
template<> DCXVEHICLE_API UScriptStruct* StaticStruct<FDcxVehicleGearboxData>()
{
	return FDcxVehicleGearboxData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDcxVehicleGearboxData(FDcxVehicleGearboxData::StaticStruct, TEXT("/Script/DcxVehicle"), TEXT("DcxVehicleGearboxData"), false, nullptr, nullptr);
static struct FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleGearboxData
{
	FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleGearboxData()
	{
		UScriptStruct::DeferCppStructOps<FDcxVehicleGearboxData>(FName(TEXT("DcxVehicleGearboxData")));
	}
} ScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleGearboxData;
	struct Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinalRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FinalRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwitchTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardGears_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardGears_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ForwardGears;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverseGearRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReverseGearRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Latency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Latency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeutralGearUpRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NeutralGearUpRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleGearboxData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDcxVehicleGearboxData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleGearboxData" },
		{ "ModuleRelativePath", "Public/DcxVehicleGearboxData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleGearboxData, Type), Z_Construct_UEnum_DcxVehicle_EDcxVehicleGearbox, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_FinalRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleGearboxData" },
		{ "ModuleRelativePath", "Public/DcxVehicleGearboxData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_FinalRatio = { "FinalRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleGearboxData, FinalRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_FinalRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_FinalRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_SwitchTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleGearboxData" },
		{ "ModuleRelativePath", "Public/DcxVehicleGearboxData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_SwitchTime = { "SwitchTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleGearboxData, SwitchTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_SwitchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_SwitchTime_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_ForwardGears_Inner = { "ForwardGears", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDcxVehicleGearData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_ForwardGears_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleGearboxData" },
		{ "ModuleRelativePath", "Public/DcxVehicleGearboxData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_ForwardGears = { "ForwardGears", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleGearboxData, ForwardGears), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_ForwardGears_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_ForwardGears_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_ReverseGearRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleGearboxData" },
		{ "ModuleRelativePath", "Public/DcxVehicleGearboxData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_ReverseGearRatio = { "ReverseGearRatio", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleGearboxData, ReverseGearRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_ReverseGearRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_ReverseGearRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_Latency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleGearboxData" },
		{ "ModuleRelativePath", "Public/DcxVehicleGearboxData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_Latency = { "Latency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleGearboxData, Latency), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_Latency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_Latency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_NeutralGearUpRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleGearboxData" },
		{ "ModuleRelativePath", "Public/DcxVehicleGearboxData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_NeutralGearUpRatio = { "NeutralGearUpRatio", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleGearboxData, NeutralGearUpRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_NeutralGearUpRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_NeutralGearUpRatio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_FinalRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_SwitchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_ForwardGears_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_ForwardGears,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_ReverseGearRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_Latency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::NewProp_NeutralGearUpRatio,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
		nullptr,
		&NewStructOps,
		"DcxVehicleGearboxData",
		sizeof(FDcxVehicleGearboxData),
		alignof(FDcxVehicleGearboxData),
		Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleGearboxData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DcxVehicleGearboxData"), sizeof(FDcxVehicleGearboxData), Get_Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleGearboxData_Hash() { return 3042252468U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
