// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/EDcxVehicleClutchAccuracyMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDcxVehicleClutchAccuracyMode() {}
// Cross Module References
	DCXVEHICLE_API UEnum* Z_Construct_UEnum_DcxVehicle_EDcxVehicleClutchAccuracyMode();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
// End Cross Module References
	static UEnum* EDcxVehicleClutchAccuracyMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DcxVehicle_EDcxVehicleClutchAccuracyMode, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("EDcxVehicleClutchAccuracyMode"));
		}
		return Singleton;
	}
	template<> DCXVEHICLE_API UEnum* StaticEnum<EDcxVehicleClutchAccuracyMode::Type>()
	{
		return EDcxVehicleClutchAccuracyMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDcxVehicleClutchAccuracyMode(EDcxVehicleClutchAccuracyMode_StaticEnum, TEXT("/Script/DcxVehicle"), TEXT("EDcxVehicleClutchAccuracyMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DcxVehicle_EDcxVehicleClutchAccuracyMode_Hash() { return 1318532577U; }
	UEnum* Z_Construct_UEnum_DcxVehicle_EDcxVehicleClutchAccuracyMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDcxVehicleClutchAccuracyMode"), 0, Get_Z_Construct_UEnum_DcxVehicle_EDcxVehicleClutchAccuracyMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDcxVehicleClutchAccuracyMode::Estimate", (int64)EDcxVehicleClutchAccuracyMode::Estimate },
				{ "EDcxVehicleClutchAccuracyMode::BestPossible", (int64)EDcxVehicleClutchAccuracyMode::BestPossible },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BestPossible.Name", "EDcxVehicleClutchAccuracyMode::BestPossible" },
				{ "BlueprintType", "true" },
				{ "Estimate.Name", "EDcxVehicleClutchAccuracyMode::Estimate" },
				{ "ModuleRelativePath", "Public/EDcxVehicleClutchAccuracyMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DcxVehicle,
				nullptr,
				"EDcxVehicleClutchAccuracyMode",
				"EDcxVehicleClutchAccuracyMode::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
