// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleWheelConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleWheelConfiguration() {}
// Cross Module References
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleWheelData();
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleSuspensionData();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleTire_NoRegister();
	DCXVEHICLE_API UEnum* Z_Construct_UEnum_DcxVehicle_EDcxVehicleWheelSweep();
// End Cross Module References
class UScriptStruct* FDcxVehicleWheelConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DCXVEHICLE_API uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("DcxVehicleWheelConfiguration"), sizeof(FDcxVehicleWheelConfiguration), Get_Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Hash());
	}
	return Singleton;
}
template<> DCXVEHICLE_API UScriptStruct* StaticStruct<FDcxVehicleWheelConfiguration>()
{
	return FDcxVehicleWheelConfiguration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDcxVehicleWheelConfiguration(FDcxVehicleWheelConfiguration::StaticStruct, TEXT("/Script/DcxVehicle"), TEXT("DcxVehicleWheelConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleWheelConfiguration
{
	FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleWheelConfiguration()
	{
		UScriptStruct::DeferCppStructOps<FDcxVehicleWheelConfiguration>(FName(TEXT("DcxVehicleWheelConfiguration")));
	}
} ScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleWheelConfiguration;
	struct Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePresetShape_MetaData[];
#endif
		static void NewProp_bUsePresetShape_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePresetShape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WheelData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuspensionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tire_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDriven_MetaData[];
#endif
		static void NewProp_bIsDriven_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDriven;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SweepType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelConfiguration.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDcxVehicleWheelConfiguration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_BoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelConfiguration" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelConfiguration, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelConfiguration" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelConfiguration, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_CollisionMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelConfiguration" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_CollisionMesh = { "CollisionMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelConfiguration, CollisionMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_CollisionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_CollisionMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_bUsePresetShape_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelConfiguration" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelConfiguration.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_bUsePresetShape_SetBit(void* Obj)
	{
		((FDcxVehicleWheelConfiguration*)Obj)->bUsePresetShape = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_bUsePresetShape = { "bUsePresetShape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDcxVehicleWheelConfiguration), &Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_bUsePresetShape_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_bUsePresetShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_bUsePresetShape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_WheelData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelConfiguration" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_WheelData = { "WheelData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelConfiguration, WheelData), Z_Construct_UScriptStruct_FDcxVehicleWheelData, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_WheelData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_WheelData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_SuspensionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelConfiguration" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_SuspensionData = { "SuspensionData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelConfiguration, SuspensionData), Z_Construct_UScriptStruct_FDcxVehicleSuspensionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_SuspensionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_SuspensionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_Tire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelConfiguration" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_Tire = { "Tire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelConfiguration, Tire), Z_Construct_UClass_UDcxVehicleTire_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_Tire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_Tire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_bIsDriven_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelConfiguration" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelConfiguration.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_bIsDriven_SetBit(void* Obj)
	{
		((FDcxVehicleWheelConfiguration*)Obj)->bIsDriven = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_bIsDriven = { "bIsDriven", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDcxVehicleWheelConfiguration), &Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_bIsDriven_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_bIsDriven_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_bIsDriven_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_SweepType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelConfiguration" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_SweepType = { "SweepType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxVehicleWheelConfiguration, SweepType), Z_Construct_UEnum_DcxVehicle_EDcxVehicleWheelSweep, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_SweepType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_SweepType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_CollisionMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_bUsePresetShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_WheelData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_SuspensionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_Tire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_bIsDriven,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::NewProp_SweepType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
		nullptr,
		&NewStructOps,
		"DcxVehicleWheelConfiguration",
		sizeof(FDcxVehicleWheelConfiguration),
		alignof(FDcxVehicleWheelConfiguration),
		Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DcxVehicleWheelConfiguration"), sizeof(FDcxVehicleWheelConfiguration), Get_Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleWheelConfiguration_Hash() { return 4038353227U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
