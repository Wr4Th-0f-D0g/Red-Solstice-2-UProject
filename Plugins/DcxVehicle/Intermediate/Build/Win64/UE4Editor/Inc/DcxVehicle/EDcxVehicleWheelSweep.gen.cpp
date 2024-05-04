// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/EDcxVehicleWheelSweep.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDcxVehicleWheelSweep() {}
// Cross Module References
	DCXVEHICLE_API UEnum* Z_Construct_UEnum_DcxVehicle_EDcxVehicleWheelSweep();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
// End Cross Module References
	static UEnum* EDcxVehicleWheelSweep_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DcxVehicle_EDcxVehicleWheelSweep, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("EDcxVehicleWheelSweep"));
		}
		return Singleton;
	}
	template<> DCXVEHICLE_API UEnum* StaticEnum<EDcxVehicleWheelSweep::Type>()
	{
		return EDcxVehicleWheelSweep_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDcxVehicleWheelSweep(EDcxVehicleWheelSweep_StaticEnum, TEXT("/Script/DcxVehicle"), TEXT("EDcxVehicleWheelSweep"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DcxVehicle_EDcxVehicleWheelSweep_Hash() { return 1977970153U; }
	UEnum* Z_Construct_UEnum_DcxVehicle_EDcxVehicleWheelSweep()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDcxVehicleWheelSweep"), 0, Get_Z_Construct_UEnum_DcxVehicle_EDcxVehicleWheelSweep_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDcxVehicleWheelSweep::Both", (int64)EDcxVehicleWheelSweep::Both },
				{ "EDcxVehicleWheelSweep::Simple", (int64)EDcxVehicleWheelSweep::Simple },
				{ "EDcxVehicleWheelSweep::Complex", (int64)EDcxVehicleWheelSweep::Complex },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Both.Name", "EDcxVehicleWheelSweep::Both" },
				{ "Complex.Name", "EDcxVehicleWheelSweep::Complex" },
				{ "ModuleRelativePath", "Public/EDcxVehicleWheelSweep.h" },
				{ "Simple.Name", "EDcxVehicleWheelSweep::Simple" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DcxVehicle,
				nullptr,
				"EDcxVehicleWheelSweep",
				"EDcxVehicleWheelSweep::Type",
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
