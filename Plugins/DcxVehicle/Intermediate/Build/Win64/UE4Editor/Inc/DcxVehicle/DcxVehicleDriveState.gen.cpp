// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleDriveState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleDriveState() {}
// Cross Module References
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleDriveState();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxAnalogControlArray();
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxGear();
// End Cross Module References
class UScriptStruct* FDcxVehicleDriveState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DCXVEHICLE_API uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleDriveState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDcxVehicleDriveState, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("DcxVehicleDriveState"), sizeof(FDcxVehicleDriveState), Get_Z_Construct_UScriptStruct_FDcxVehicleDriveState_Hash());
	}
	return Singleton;
}
template<> DCXVEHICLE_API UScriptStruct* StaticStruct<FDcxVehicleDriveState>()
{
	return FDcxVehicleDriveState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDcxVehicleDriveState(FDcxVehicleDriveState::StaticStruct, TEXT("/Script/DcxVehicle"), TEXT("DcxVehicleDriveState"), false, nullptr, nullptr);
static struct FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleDriveState
{
	FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleDriveState()
	{
		UScriptStruct::DeferCppStructOps<FDcxVehicleDriveState>(FName(TEXT("DcxVehicleDriveState")));
	}
} ScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleDriveState;
	struct Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalogControls_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnalogControls;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGear_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentGear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetGear_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetGear;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDcxVehicleDriveState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::NewProp_AnalogControls_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDriveState" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::NewProp_AnalogControls = { "AnalogControls", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleDriveState, AnalogControls), Z_Construct_UScriptStruct_FDcxAnalogControlArray, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::NewProp_AnalogControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::NewProp_AnalogControls_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::NewProp_CurrentGear_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDriveState" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::NewProp_CurrentGear = { "CurrentGear", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleDriveState, CurrentGear), Z_Construct_UScriptStruct_FDcxGear, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::NewProp_CurrentGear_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::NewProp_CurrentGear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::NewProp_TargetGear_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDriveState" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::NewProp_TargetGear = { "TargetGear", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleDriveState, TargetGear), Z_Construct_UScriptStruct_FDcxGear, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::NewProp_TargetGear_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::NewProp_TargetGear_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::NewProp_AnalogControls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::NewProp_CurrentGear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::NewProp_TargetGear,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
		nullptr,
		&NewStructOps,
		"DcxVehicleDriveState",
		sizeof(FDcxVehicleDriveState),
		alignof(FDcxVehicleDriveState),
		Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleDriveState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleDriveState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DcxVehicleDriveState"), sizeof(FDcxVehicleDriveState), Get_Z_Construct_UScriptStruct_FDcxVehicleDriveState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDcxVehicleDriveState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleDriveState_Hash() { return 720750693U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
