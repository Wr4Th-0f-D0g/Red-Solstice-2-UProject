// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleDifferentialData4W.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleDifferentialData4W() {}
// Cross Module References
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
	DCXVEHICLE_API UEnum* Z_Construct_UEnum_DcxVehicle_EDcxVehicleDifferential4W();
// End Cross Module References
class UScriptStruct* FDcxVehicleDifferentialData4W::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DCXVEHICLE_API uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("DcxVehicleDifferentialData4W"), sizeof(FDcxVehicleDifferentialData4W), Get_Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Hash());
	}
	return Singleton;
}
template<> DCXVEHICLE_API UScriptStruct* StaticStruct<FDcxVehicleDifferentialData4W>()
{
	return FDcxVehicleDifferentialData4W::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDcxVehicleDifferentialData4W(FDcxVehicleDifferentialData4W::StaticStruct, TEXT("/Script/DcxVehicle"), TEXT("DcxVehicleDifferentialData4W"), false, nullptr, nullptr);
static struct FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleDifferentialData4W
{
	FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleDifferentialData4W()
	{
		UScriptStruct::DeferCppStructOps<FDcxVehicleDifferentialData4W>(FName(TEXT("DcxVehicleDifferentialData4W")));
	}
} ScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleDifferentialData4W;
	struct Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifferentialType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DifferentialType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontRearSplit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrontRearSplit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontLeftRightSplit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrontLeftRightSplit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RearLeftRightSplit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RearLeftRightSplit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CenterBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrontBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RearBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RearBias;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleDifferentialData4W.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDcxVehicleDifferentialData4W>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_DifferentialType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDifferentialData4W" },
		{ "ModuleRelativePath", "Public/DcxVehicleDifferentialData4W.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_DifferentialType = { "DifferentialType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleDifferentialData4W, DifferentialType), Z_Construct_UEnum_DcxVehicle_EDcxVehicleDifferential4W, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_DifferentialType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_DifferentialType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_FrontRearSplit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDifferentialData4W" },
		{ "ModuleRelativePath", "Public/DcxVehicleDifferentialData4W.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_FrontRearSplit = { "FrontRearSplit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleDifferentialData4W, FrontRearSplit), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_FrontRearSplit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_FrontRearSplit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_FrontLeftRightSplit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDifferentialData4W" },
		{ "ModuleRelativePath", "Public/DcxVehicleDifferentialData4W.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_FrontLeftRightSplit = { "FrontLeftRightSplit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleDifferentialData4W, FrontLeftRightSplit), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_FrontLeftRightSplit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_FrontLeftRightSplit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_RearLeftRightSplit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDifferentialData4W" },
		{ "ModuleRelativePath", "Public/DcxVehicleDifferentialData4W.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_RearLeftRightSplit = { "RearLeftRightSplit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleDifferentialData4W, RearLeftRightSplit), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_RearLeftRightSplit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_RearLeftRightSplit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_CenterBias_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDifferentialData4W" },
		{ "ModuleRelativePath", "Public/DcxVehicleDifferentialData4W.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_CenterBias = { "CenterBias", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleDifferentialData4W, CenterBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_CenterBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_CenterBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_FrontBias_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDifferentialData4W" },
		{ "ModuleRelativePath", "Public/DcxVehicleDifferentialData4W.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_FrontBias = { "FrontBias", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleDifferentialData4W, FrontBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_FrontBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_FrontBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_RearBias_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDifferentialData4W" },
		{ "ModuleRelativePath", "Public/DcxVehicleDifferentialData4W.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_RearBias = { "RearBias", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleDifferentialData4W, RearBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_RearBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_RearBias_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_DifferentialType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_FrontRearSplit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_FrontLeftRightSplit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_RearLeftRightSplit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_CenterBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_FrontBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::NewProp_RearBias,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
		nullptr,
		&NewStructOps,
		"DcxVehicleDifferentialData4W",
		sizeof(FDcxVehicleDifferentialData4W),
		alignof(FDcxVehicleDifferentialData4W),
		Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DcxVehicleDifferentialData4W"), sizeof(FDcxVehicleDifferentialData4W), Get_Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W_Hash() { return 4160333074U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
