// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/EDcxVehicleDifferential4W.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDcxVehicleDifferential4W() {}
// Cross Module References
	DCXVEHICLE_API UEnum* Z_Construct_UEnum_DcxVehicle_EDcxVehicleDifferential4W();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
// End Cross Module References
	static UEnum* EDcxVehicleDifferential4W_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DcxVehicle_EDcxVehicleDifferential4W, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("EDcxVehicleDifferential4W"));
		}
		return Singleton;
	}
	template<> DCXVEHICLE_API UEnum* StaticEnum<EDcxVehicleDifferential4W::Type>()
	{
		return EDcxVehicleDifferential4W_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDcxVehicleDifferential4W(EDcxVehicleDifferential4W_StaticEnum, TEXT("/Script/DcxVehicle"), TEXT("EDcxVehicleDifferential4W"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DcxVehicle_EDcxVehicleDifferential4W_Hash() { return 3332848645U; }
	UEnum* Z_Construct_UEnum_DcxVehicle_EDcxVehicleDifferential4W()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDcxVehicleDifferential4W"), 0, Get_Z_Construct_UEnum_DcxVehicle_EDcxVehicleDifferential4W_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDcxVehicleDifferential4W::LS_4WD", (int64)EDcxVehicleDifferential4W::LS_4WD },
				{ "EDcxVehicleDifferential4W::LS_FrontWD", (int64)EDcxVehicleDifferential4W::LS_FrontWD },
				{ "EDcxVehicleDifferential4W::LS_RearWD", (int64)EDcxVehicleDifferential4W::LS_RearWD },
				{ "EDcxVehicleDifferential4W::Open_4WD", (int64)EDcxVehicleDifferential4W::Open_4WD },
				{ "EDcxVehicleDifferential4W::Open_FrontWD", (int64)EDcxVehicleDifferential4W::Open_FrontWD },
				{ "EDcxVehicleDifferential4W::Open_RearWD", (int64)EDcxVehicleDifferential4W::Open_RearWD },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LS_4WD.Name", "EDcxVehicleDifferential4W::LS_4WD" },
				{ "LS_FrontWD.Name", "EDcxVehicleDifferential4W::LS_FrontWD" },
				{ "LS_RearWD.Name", "EDcxVehicleDifferential4W::LS_RearWD" },
				{ "ModuleRelativePath", "Public/EDcxVehicleDifferential4W.h" },
				{ "Open_4WD.Name", "EDcxVehicleDifferential4W::Open_4WD" },
				{ "Open_FrontWD.Name", "EDcxVehicleDifferential4W::Open_FrontWD" },
				{ "Open_RearWD.Name", "EDcxVehicleDifferential4W::Open_RearWD" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DcxVehicle,
				nullptr,
				"EDcxVehicleDifferential4W",
				"EDcxVehicleDifferential4W::Type",
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
