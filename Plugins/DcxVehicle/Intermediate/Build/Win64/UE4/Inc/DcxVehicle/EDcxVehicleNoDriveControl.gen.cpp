// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/EDcxVehicleNoDriveControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDcxVehicleNoDriveControl() {}
// Cross Module References
	DCXVEHICLE_API UEnum* Z_Construct_UEnum_DcxVehicle_EDcxVehicleNoDriveControl();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
// End Cross Module References
	static UEnum* EDcxVehicleNoDriveControl_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DcxVehicle_EDcxVehicleNoDriveControl, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("EDcxVehicleNoDriveControl"));
		}
		return Singleton;
	}
	template<> DCXVEHICLE_API UEnum* StaticEnum<EDcxVehicleNoDriveControl::Type>()
	{
		return EDcxVehicleNoDriveControl_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDcxVehicleNoDriveControl(EDcxVehicleNoDriveControl_StaticEnum, TEXT("/Script/DcxVehicle"), TEXT("EDcxVehicleNoDriveControl"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DcxVehicle_EDcxVehicleNoDriveControl_Hash() { return 492527699U; }
	UEnum* Z_Construct_UEnum_DcxVehicle_EDcxVehicleNoDriveControl()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDcxVehicleNoDriveControl"), 0, Get_Z_Construct_UEnum_DcxVehicle_EDcxVehicleNoDriveControl_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDcxVehicleNoDriveControl::Throttle", (int64)EDcxVehicleNoDriveControl::Throttle },
				{ "EDcxVehicleNoDriveControl::Brake", (int64)EDcxVehicleNoDriveControl::Brake },
				{ "EDcxVehicleNoDriveControl::Steer", (int64)EDcxVehicleNoDriveControl::Steer },
				{ "EDcxVehicleNoDriveControl::NumControls", (int64)EDcxVehicleNoDriveControl::NumControls },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Brake.Name", "EDcxVehicleNoDriveControl::Brake" },
				{ "ModuleRelativePath", "Public/EDcxVehicleNoDriveControl.h" },
				{ "NumControls.Name", "EDcxVehicleNoDriveControl::NumControls" },
				{ "Steer.Name", "EDcxVehicleNoDriveControl::Steer" },
				{ "Throttle.Name", "EDcxVehicleNoDriveControl::Throttle" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DcxVehicle,
				nullptr,
				"EDcxVehicleNoDriveControl",
				"EDcxVehicleNoDriveControl::Type",
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
