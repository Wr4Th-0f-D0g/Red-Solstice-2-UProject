// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/EDcxVehicleDriveControlModelTank.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDcxVehicleDriveControlModelTank() {}
// Cross Module References
	DCXVEHICLE_API UEnum* Z_Construct_UEnum_DcxVehicle_EDcxVehicleDriveControlModelTank();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
// End Cross Module References
	static UEnum* EDcxVehicleDriveControlModelTank_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DcxVehicle_EDcxVehicleDriveControlModelTank, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("EDcxVehicleDriveControlModelTank"));
		}
		return Singleton;
	}
	template<> DCXVEHICLE_API UEnum* StaticEnum<EDcxVehicleDriveControlModelTank::Type>()
	{
		return EDcxVehicleDriveControlModelTank_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDcxVehicleDriveControlModelTank(EDcxVehicleDriveControlModelTank_StaticEnum, TEXT("/Script/DcxVehicle"), TEXT("EDcxVehicleDriveControlModelTank"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DcxVehicle_EDcxVehicleDriveControlModelTank_Hash() { return 770354800U; }
	UEnum* Z_Construct_UEnum_DcxVehicle_EDcxVehicleDriveControlModelTank()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDcxVehicleDriveControlModelTank"), 0, Get_Z_Construct_UEnum_DcxVehicle_EDcxVehicleDriveControlModelTank_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDcxVehicleDriveControlModelTank::Standard", (int64)EDcxVehicleDriveControlModelTank::Standard },
				{ "EDcxVehicleDriveControlModelTank::Special", (int64)EDcxVehicleDriveControlModelTank::Special },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EDcxVehicleDriveControlModelTank.h" },
				{ "Special.Name", "EDcxVehicleDriveControlModelTank::Special" },
				{ "Standard.Name", "EDcxVehicleDriveControlModelTank::Standard" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DcxVehicle,
				nullptr,
				"EDcxVehicleDriveControlModelTank",
				"EDcxVehicleDriveControlModelTank::Type",
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
