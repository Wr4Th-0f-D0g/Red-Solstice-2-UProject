// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleTire.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleTire() {}
// Cross Module References
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleTire_NoRegister();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleTire();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair();
// End Cross Module References
	void UDcxVehicleTire::StaticRegisterNativesUDcxVehicleTire()
	{
	}
	UClass* Z_Construct_UClass_UDcxVehicleTire_NoRegister()
	{
		return UDcxVehicleTire::StaticClass();
	}
	struct Z_Construct_UClass_UDcxVehicleTire_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateralStiffnessX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LateralStiffnessX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateralStiffnessY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LateralStiffnessY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LongitudinalStiffnessPerUnitGravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LongitudinalStiffnessPerUnitGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamberStiffnessPerUnitGravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CamberStiffnessPerUnitGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionVsSlipGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrictionVsSlipGraph;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrivableSurfaceToTireFrictionPairs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrivableSurfaceToTireFrictionPairs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DrivableSurfaceToTireFrictionPairs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDcxVehicleTire_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleTire_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DcxVehicleTire.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleTire.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_LateralStiffnessX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleTire" },
		{ "ModuleRelativePath", "Public/DcxVehicleTire.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_LateralStiffnessX = { "LateralStiffnessX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleTire, LateralStiffnessX), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_LateralStiffnessX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_LateralStiffnessX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_LateralStiffnessY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleTire" },
		{ "ModuleRelativePath", "Public/DcxVehicleTire.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_LateralStiffnessY = { "LateralStiffnessY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleTire, LateralStiffnessY), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_LateralStiffnessY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_LateralStiffnessY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_LongitudinalStiffnessPerUnitGravity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleTire" },
		{ "ModuleRelativePath", "Public/DcxVehicleTire.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_LongitudinalStiffnessPerUnitGravity = { "LongitudinalStiffnessPerUnitGravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleTire, LongitudinalStiffnessPerUnitGravity), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_LongitudinalStiffnessPerUnitGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_LongitudinalStiffnessPerUnitGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_CamberStiffnessPerUnitGravity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleTire" },
		{ "ModuleRelativePath", "Public/DcxVehicleTire.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_CamberStiffnessPerUnitGravity = { "CamberStiffnessPerUnitGravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleTire, CamberStiffnessPerUnitGravity), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_CamberStiffnessPerUnitGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_CamberStiffnessPerUnitGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_FrictionVsSlipGraph_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleTire" },
		{ "ModuleRelativePath", "Public/DcxVehicleTire.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_FrictionVsSlipGraph = { "FrictionVsSlipGraph", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleTire, FrictionVsSlipGraph), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_FrictionVsSlipGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_FrictionVsSlipGraph_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_DrivableSurfaceToTireFrictionPairs_Inner = { "DrivableSurfaceToTireFrictionPairs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDcxDrivableSurfaceToTireFrictionPair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_DrivableSurfaceToTireFrictionPairs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleTire" },
		{ "ModuleRelativePath", "Public/DcxVehicleTire.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_DrivableSurfaceToTireFrictionPairs = { "DrivableSurfaceToTireFrictionPairs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleTire, DrivableSurfaceToTireFrictionPairs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_DrivableSurfaceToTireFrictionPairs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_DrivableSurfaceToTireFrictionPairs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDcxVehicleTire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_LateralStiffnessX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_LateralStiffnessY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_LongitudinalStiffnessPerUnitGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_CamberStiffnessPerUnitGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_FrictionVsSlipGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_DrivableSurfaceToTireFrictionPairs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleTire_Statics::NewProp_DrivableSurfaceToTireFrictionPairs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDcxVehicleTire_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDcxVehicleTire>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDcxVehicleTire_Statics::ClassParams = {
		&UDcxVehicleTire::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDcxVehicleTire_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleTire_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleTire_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleTire_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDcxVehicleTire()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDcxVehicleTire_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDcxVehicleTire, 959006818);
	template<> DCXVEHICLE_API UClass* StaticClass<UDcxVehicleTire>()
	{
		return UDcxVehicleTire::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDcxVehicleTire(Z_Construct_UClass_UDcxVehicleTire, &UDcxVehicleTire::StaticClass, TEXT("/Script/DcxVehicle"), TEXT("UDcxVehicleTire"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDcxVehicleTire);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
