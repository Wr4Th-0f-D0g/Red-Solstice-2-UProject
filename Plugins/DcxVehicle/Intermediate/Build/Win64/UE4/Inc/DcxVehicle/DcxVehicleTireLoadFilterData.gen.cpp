// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleTireLoadFilterData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleTireLoadFilterData() {}
// Cross Module References
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
// End Cross Module References
class UScriptStruct* FDcxVehicleTireLoadFilterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DCXVEHICLE_API uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("DcxVehicleTireLoadFilterData"), sizeof(FDcxVehicleTireLoadFilterData), Get_Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Hash());
	}
	return Singleton;
}
template<> DCXVEHICLE_API UScriptStruct* StaticStruct<FDcxVehicleTireLoadFilterData>()
{
	return FDcxVehicleTireLoadFilterData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDcxVehicleTireLoadFilterData(FDcxVehicleTireLoadFilterData::StaticStruct, TEXT("/Script/DcxVehicle"), TEXT("DcxVehicleTireLoadFilterData"), false, nullptr, nullptr);
static struct FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleTireLoadFilterData
{
	FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleTireLoadFilterData()
	{
		UScriptStruct::DeferCppStructOps<FDcxVehicleTireLoadFilterData>(FName(TEXT("DcxVehicleTireLoadFilterData")));
	}
} ScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleTireLoadFilterData;
	struct Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinNormalizedLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinNormalizedLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFilteredNormalizedLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFilteredNormalizedLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNormalizedLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxNormalizedLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFilteredNormalizedLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFilteredNormalizedLoad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleTireLoadFilterData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDcxVehicleTireLoadFilterData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::NewProp_MinNormalizedLoad_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleTireLoadFilterData" },
		{ "ModuleRelativePath", "Public/DcxVehicleTireLoadFilterData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::NewProp_MinNormalizedLoad = { "MinNormalizedLoad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleTireLoadFilterData, MinNormalizedLoad), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::NewProp_MinNormalizedLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::NewProp_MinNormalizedLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::NewProp_MinFilteredNormalizedLoad_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleTireLoadFilterData" },
		{ "ModuleRelativePath", "Public/DcxVehicleTireLoadFilterData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::NewProp_MinFilteredNormalizedLoad = { "MinFilteredNormalizedLoad", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleTireLoadFilterData, MinFilteredNormalizedLoad), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::NewProp_MinFilteredNormalizedLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::NewProp_MinFilteredNormalizedLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::NewProp_MaxNormalizedLoad_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleTireLoadFilterData" },
		{ "ModuleRelativePath", "Public/DcxVehicleTireLoadFilterData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::NewProp_MaxNormalizedLoad = { "MaxNormalizedLoad", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleTireLoadFilterData, MaxNormalizedLoad), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::NewProp_MaxNormalizedLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::NewProp_MaxNormalizedLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::NewProp_MaxFilteredNormalizedLoad_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleTireLoadFilterData" },
		{ "ModuleRelativePath", "Public/DcxVehicleTireLoadFilterData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::NewProp_MaxFilteredNormalizedLoad = { "MaxFilteredNormalizedLoad", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleTireLoadFilterData, MaxFilteredNormalizedLoad), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::NewProp_MaxFilteredNormalizedLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::NewProp_MaxFilteredNormalizedLoad_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::NewProp_MinNormalizedLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::NewProp_MinFilteredNormalizedLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::NewProp_MaxNormalizedLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::NewProp_MaxFilteredNormalizedLoad,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
		nullptr,
		&NewStructOps,
		"DcxVehicleTireLoadFilterData",
		sizeof(FDcxVehicleTireLoadFilterData),
		alignof(FDcxVehicleTireLoadFilterData),
		Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DcxVehicleTireLoadFilterData"), sizeof(FDcxVehicleTireLoadFilterData), Get_Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleTireLoadFilterData_Hash() { return 3882290582U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
