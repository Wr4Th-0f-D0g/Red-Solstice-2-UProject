// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleDriveInputRate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleDriveInputRate() {}
// Cross Module References
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
// End Cross Module References
class UScriptStruct* FDcxVehicleDriveInputRate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DCXVEHICLE_API uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("DcxVehicleDriveInputRate"), sizeof(FDcxVehicleDriveInputRate), Get_Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Hash());
	}
	return Singleton;
}
template<> DCXVEHICLE_API UScriptStruct* StaticStruct<FDcxVehicleDriveInputRate>()
{
	return FDcxVehicleDriveInputRate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDcxVehicleDriveInputRate(FDcxVehicleDriveInputRate::StaticStruct, TEXT("/Script/DcxVehicle"), TEXT("DcxVehicleDriveInputRate"), false, nullptr, nullptr);
static struct FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleDriveInputRate
{
	FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleDriveInputRate()
	{
		UScriptStruct::DeferCppStructOps<FDcxVehicleDriveInputRate>(FName(TEXT("DcxVehicleDriveInputRate")));
	}
} ScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleDriveInputRate;
	struct Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiseRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RiseRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FallRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveInputRate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDcxVehicleDriveInputRate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Statics::NewProp_RiseRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDriveInputRate" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveInputRate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Statics::NewProp_RiseRate = { "RiseRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleDriveInputRate, RiseRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Statics::NewProp_RiseRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Statics::NewProp_RiseRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Statics::NewProp_FallRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDriveInputRate" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveInputRate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Statics::NewProp_FallRate = { "FallRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleDriveInputRate, FallRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Statics::NewProp_FallRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Statics::NewProp_FallRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Statics::NewProp_RiseRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Statics::NewProp_FallRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
		nullptr,
		&NewStructOps,
		"DcxVehicleDriveInputRate",
		sizeof(FDcxVehicleDriveInputRate),
		alignof(FDcxVehicleDriveInputRate),
		Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DcxVehicleDriveInputRate"), sizeof(FDcxVehicleDriveInputRate), Get_Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleDriveInputRate_Hash() { return 1055184115U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
