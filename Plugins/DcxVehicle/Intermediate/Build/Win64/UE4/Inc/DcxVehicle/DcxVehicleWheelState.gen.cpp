// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleWheelState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleWheelState() {}
// Cross Module References
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleWheelState();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
class UScriptStruct* FDcxVehicleWheelState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DCXVEHICLE_API uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleWheelState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDcxVehicleWheelState, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("DcxVehicleWheelState"), sizeof(FDcxVehicleWheelState), Get_Z_Construct_UScriptStruct_FDcxVehicleWheelState_Hash());
	}
	return Singleton;
}
template<> DCXVEHICLE_API UScriptStruct* StaticStruct<FDcxVehicleWheelState>()
{
	return FDcxVehicleWheelState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDcxVehicleWheelState(FDcxVehicleWheelState::StaticStruct, TEXT("/Script/DcxVehicle"), TEXT("DcxVehicleWheelState"), false, nullptr, nullptr);
static struct FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleWheelState
{
	FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleWheelState()
	{
		UScriptStruct::DeferCppStructOps<FDcxVehicleWheelState>(FName(TEXT("DcxVehicleWheelState")));
	}
} ScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleWheelState;
	struct Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionLineStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuspensionLineStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionLineDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuspensionLineDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionLineLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuspensionLineLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[];
#endif
		static void NewProp_bIsInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TireContactActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TireContactActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TireSurfaceMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TireSurfaceMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TireContactPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TireContactPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TireContactNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TireContactNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TireFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TireFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionJounce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuspensionJounce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionSpringForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuspensionSpringForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TireLongitudinalDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TireLongitudinalDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TireLateralDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TireLateralDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LongitudinalSlip_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LongitudinalSlip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateralSlip_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LateralSlip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteerAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SteerAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDcxVehicleWheelState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionLineStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelState" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionLineStart = { "SuspensionLineStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelState, SuspensionLineStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionLineStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionLineStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionLineDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelState" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionLineDirection = { "SuspensionLineDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelState, SuspensionLineDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionLineDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionLineDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionLineLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelState" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionLineLength = { "SuspensionLineLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelState, SuspensionLineLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionLineLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionLineLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_bIsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelState" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_bIsInAir_SetBit(void* Obj)
	{
		((FDcxVehicleWheelState*)Obj)->bIsInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDcxVehicleWheelState), &Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_bIsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_bIsInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireContactActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelState" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireContactActor = { "TireContactActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelState, TireContactActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireContactActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireContactActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireSurfaceMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelState" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireSurfaceMaterial = { "TireSurfaceMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelState, TireSurfaceMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireSurfaceMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireSurfaceMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireContactPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelState" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireContactPoint = { "TireContactPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelState, TireContactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireContactPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireContactPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireContactNormal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelState" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireContactNormal = { "TireContactNormal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelState, TireContactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireContactNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireContactNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireFriction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelState" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireFriction = { "TireFriction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelState, TireFriction), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionJounce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelState" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionJounce = { "SuspensionJounce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelState, SuspensionJounce), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionJounce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionJounce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionSpringForce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelState" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionSpringForce = { "SuspensionSpringForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelState, SuspensionSpringForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionSpringForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionSpringForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireLongitudinalDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelState" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireLongitudinalDirection = { "TireLongitudinalDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelState, TireLongitudinalDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireLongitudinalDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireLongitudinalDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireLateralDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelState" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireLateralDirection = { "TireLateralDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelState, TireLateralDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireLateralDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireLateralDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_LongitudinalSlip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelState" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_LongitudinalSlip = { "LongitudinalSlip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelState, LongitudinalSlip), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_LongitudinalSlip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_LongitudinalSlip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_LateralSlip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelState" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_LateralSlip = { "LateralSlip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelState, LateralSlip), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_LateralSlip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_LateralSlip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SteerAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelState" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SteerAngle = { "SteerAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelState, SteerAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SteerAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SteerAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionLineStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionLineDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionLineLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_bIsInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireContactActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireSurfaceMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireContactPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireContactNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionJounce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SuspensionSpringForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireLongitudinalDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_TireLateralDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_LongitudinalSlip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_LateralSlip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::NewProp_SteerAngle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
		nullptr,
		&NewStructOps,
		"DcxVehicleWheelState",
		sizeof(FDcxVehicleWheelState),
		alignof(FDcxVehicleWheelState),
		Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleWheelState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleWheelState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DcxVehicleWheelState"), sizeof(FDcxVehicleWheelState), Get_Z_Construct_UScriptStruct_FDcxVehicleWheelState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDcxVehicleWheelState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleWheelState_Hash() { return 993274940U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
