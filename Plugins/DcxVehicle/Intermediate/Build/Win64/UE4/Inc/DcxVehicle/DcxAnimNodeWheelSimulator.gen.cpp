// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxAnimNodeWheelSimulator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxAnimNodeWheelSimulator() {}
// Cross Module References
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxAnimNodeWheelSimulator();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
// End Cross Module References

static_assert(std::is_polymorphic<FDcxAnimNodeWheelSimulator>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FDcxAnimNodeWheelSimulator cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FDcxAnimNodeWheelSimulator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DCXVEHICLE_API uint32 Get_Z_Construct_UScriptStruct_FDcxAnimNodeWheelSimulator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDcxAnimNodeWheelSimulator, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("DcxAnimNodeWheelSimulator"), sizeof(FDcxAnimNodeWheelSimulator), Get_Z_Construct_UScriptStruct_FDcxAnimNodeWheelSimulator_Hash());
	}
	return Singleton;
}
template<> DCXVEHICLE_API UScriptStruct* StaticStruct<FDcxAnimNodeWheelSimulator>()
{
	return FDcxAnimNodeWheelSimulator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDcxAnimNodeWheelSimulator(FDcxAnimNodeWheelSimulator::StaticStruct, TEXT("/Script/DcxVehicle"), TEXT("DcxAnimNodeWheelSimulator"), false, nullptr, nullptr);
static struct FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxAnimNodeWheelSimulator
{
	FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxAnimNodeWheelSimulator()
	{
		UScriptStruct::DeferCppStructOps<FDcxAnimNodeWheelSimulator>(FName(TEXT("DcxAnimNodeWheelSimulator")));
	}
} ScriptStruct_DcxVehicle_StaticRegisterNativesFDcxAnimNodeWheelSimulator;
	struct Z_Construct_UScriptStruct_FDcxAnimNodeWheelSimulator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxAnimNodeWheelSimulator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DcxAnimNodeWheelSimulator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDcxAnimNodeWheelSimulator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDcxAnimNodeWheelSimulator>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDcxAnimNodeWheelSimulator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"DcxAnimNodeWheelSimulator",
		sizeof(FDcxAnimNodeWheelSimulator),
		alignof(FDcxAnimNodeWheelSimulator),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxAnimNodeWheelSimulator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxAnimNodeWheelSimulator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDcxAnimNodeWheelSimulator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDcxAnimNodeWheelSimulator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DcxAnimNodeWheelSimulator"), sizeof(FDcxAnimNodeWheelSimulator), Get_Z_Construct_UScriptStruct_FDcxAnimNodeWheelSimulator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDcxAnimNodeWheelSimulator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDcxAnimNodeWheelSimulator_Hash() { return 433800978U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
