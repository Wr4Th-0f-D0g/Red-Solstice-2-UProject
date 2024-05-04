// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxDrivableSurfaceToTireFrictionPair.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxDrivableSurfaceToTireFrictionPair() {}
// Cross Module References
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
class UScriptStruct* FDcxDrivableSurfaceToTireFrictionPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DCXVEHICLE_API uint32 Get_Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("DcxDrivableSurfaceToTireFrictionPair"), sizeof(FDcxDrivableSurfaceToTireFrictionPair), Get_Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Hash());
	}
	return Singleton;
}
template<> DCXVEHICLE_API UScriptStruct* StaticStruct<FDcxDrivableSurfaceToTireFrictionPair>()
{
	return FDcxDrivableSurfaceToTireFrictionPair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair(FDcxDrivableSurfaceToTireFrictionPair::StaticStruct, TEXT("/Script/DcxVehicle"), TEXT("DcxDrivableSurfaceToTireFrictionPair"), false, nullptr, nullptr);
static struct FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxDrivableSurfaceToTireFrictionPair
{
	FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxDrivableSurfaceToTireFrictionPair()
	{
		UScriptStruct::DeferCppStructOps<FDcxDrivableSurfaceToTireFrictionPair>(FName(TEXT("DcxDrivableSurfaceToTireFrictionPair")));
	}
} ScriptStruct_DcxVehicle_StaticRegisterNativesFDcxDrivableSurfaceToTireFrictionPair;
	struct Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SurfaceMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrictionScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DcxDrivableSurfaceToTireFrictionPair.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDcxDrivableSurfaceToTireFrictionPair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Statics::NewProp_SurfaceMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxDrivableSurfaceToTireFrictionPair" },
		{ "ModuleRelativePath", "Public/DcxDrivableSurfaceToTireFrictionPair.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Statics::NewProp_SurfaceMaterial = { "SurfaceMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxDrivableSurfaceToTireFrictionPair, SurfaceMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Statics::NewProp_SurfaceMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Statics::NewProp_SurfaceMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Statics::NewProp_FrictionScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxDrivableSurfaceToTireFrictionPair" },
		{ "ModuleRelativePath", "Public/DcxDrivableSurfaceToTireFrictionPair.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Statics::NewProp_FrictionScale = { "FrictionScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxDrivableSurfaceToTireFrictionPair, FrictionScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Statics::NewProp_FrictionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Statics::NewProp_FrictionScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Statics::NewProp_SurfaceMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Statics::NewProp_FrictionScale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
		nullptr,
		&NewStructOps,
		"DcxDrivableSurfaceToTireFrictionPair",
		sizeof(FDcxDrivableSurfaceToTireFrictionPair),
		alignof(FDcxDrivableSurfaceToTireFrictionPair),
		Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DcxDrivableSurfaceToTireFrictionPair"), sizeof(FDcxDrivableSurfaceToTireFrictionPair), Get_Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair_Hash() { return 1941883607U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
