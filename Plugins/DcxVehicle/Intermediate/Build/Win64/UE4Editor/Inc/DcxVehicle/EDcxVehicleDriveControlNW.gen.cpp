// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/EDcxVehicleDriveControlNW.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDcxVehicleDriveControlNW() {}
// Cross Module References
	DCXVEHICLE_API UEnum* Z_Construct_UEnum_DcxVehicle_EDcxVehicleDriveControlNW();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
// End Cross Module References
	static UEnum* EDcxVehicleDriveControlNW_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DcxVehicle_EDcxVehicleDriveControlNW, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("EDcxVehicleDriveControlNW"));
		}
		return Singleton;
	}
	template<> DCXVEHICLE_API UEnum* StaticEnum<EDcxVehicleDriveControlNW::Type>()
	{
		return EDcxVehicleDriveControlNW_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDcxVehicleDriveControlNW(EDcxVehicleDriveControlNW_StaticEnum, TEXT("/Script/DcxVehicle"), TEXT("EDcxVehicleDriveControlNW"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DcxVehicle_EDcxVehicleDriveControlNW_Hash() { return 2784708411U; }
	UEnum* Z_Construct_UEnum_DcxVehicle_EDcxVehicleDriveControlNW()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDcxVehicleDriveControlNW"), 0, Get_Z_Construct_UEnum_DcxVehicle_EDcxVehicleDriveControlNW_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDcxVehicleDriveControlNW::Throttle", (int64)EDcxVehicleDriveControlNW::Throttle },
				{ "EDcxVehicleDriveControlNW::Brake", (int64)EDcxVehicleDriveControlNW::Brake },
				{ "EDcxVehicleDriveControlNW::Handbrake", (int64)EDcxVehicleDriveControlNW::Handbrake },
				{ "EDcxVehicleDriveControlNW::Steer", (int64)EDcxVehicleDriveControlNW::Steer },
				{ "EDcxVehicleDriveControlNW::Clutch", (int64)EDcxVehicleDriveControlNW::Clutch },
				{ "EDcxVehicleDriveControlNW::NumControls", (int64)EDcxVehicleDriveControlNW::NumControls },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Brake.Name", "EDcxVehicleDriveControlNW::Brake" },
				{ "Clutch.Name", "EDcxVehicleDriveControlNW::Clutch" },
				{ "Handbrake.Name", "EDcxVehicleDriveControlNW::Handbrake" },
				{ "ModuleRelativePath", "Public/EDcxVehicleDriveControlNW.h" },
				{ "NumControls.Name", "EDcxVehicleDriveControlNW::NumControls" },
				{ "Steer.Name", "EDcxVehicleDriveControlNW::Steer" },
				{ "Throttle.Name", "EDcxVehicleDriveControlNW::Throttle" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DcxVehicle,
				nullptr,
				"EDcxVehicleDriveControlNW",
				"EDcxVehicleDriveControlNW::Type",
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
