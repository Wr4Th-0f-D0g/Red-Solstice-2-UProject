// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/EDcxVehicleWheelOrder4W.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDcxVehicleWheelOrder4W() {}
// Cross Module References
	DCXVEHICLE_API UEnum* Z_Construct_UEnum_DcxVehicle_EDcxVehicleWheelOrder4W();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
// End Cross Module References
	static UEnum* EDcxVehicleWheelOrder4W_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DcxVehicle_EDcxVehicleWheelOrder4W, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("EDcxVehicleWheelOrder4W"));
		}
		return Singleton;
	}
	template<> DCXVEHICLE_API UEnum* StaticEnum<EDcxVehicleWheelOrder4W::Type>()
	{
		return EDcxVehicleWheelOrder4W_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDcxVehicleWheelOrder4W(EDcxVehicleWheelOrder4W_StaticEnum, TEXT("/Script/DcxVehicle"), TEXT("EDcxVehicleWheelOrder4W"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DcxVehicle_EDcxVehicleWheelOrder4W_Hash() { return 1875713777U; }
	UEnum* Z_Construct_UEnum_DcxVehicle_EDcxVehicleWheelOrder4W()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDcxVehicleWheelOrder4W"), 0, Get_Z_Construct_UEnum_DcxVehicle_EDcxVehicleWheelOrder4W_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDcxVehicleWheelOrder4W::FrontLeft", (int64)EDcxVehicleWheelOrder4W::FrontLeft },
				{ "EDcxVehicleWheelOrder4W::FrontRight", (int64)EDcxVehicleWheelOrder4W::FrontRight },
				{ "EDcxVehicleWheelOrder4W::RearLeft", (int64)EDcxVehicleWheelOrder4W::RearLeft },
				{ "EDcxVehicleWheelOrder4W::RearRight", (int64)EDcxVehicleWheelOrder4W::RearRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FrontLeft.Name", "EDcxVehicleWheelOrder4W::FrontLeft" },
				{ "FrontRight.Name", "EDcxVehicleWheelOrder4W::FrontRight" },
				{ "ModuleRelativePath", "Public/EDcxVehicleWheelOrder4W.h" },
				{ "RearLeft.Name", "EDcxVehicleWheelOrder4W::RearLeft" },
				{ "RearRight.Name", "EDcxVehicleWheelOrder4W::RearRight" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DcxVehicle,
				nullptr,
				"EDcxVehicleWheelOrder4W",
				"EDcxVehicleWheelOrder4W::Type",
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
