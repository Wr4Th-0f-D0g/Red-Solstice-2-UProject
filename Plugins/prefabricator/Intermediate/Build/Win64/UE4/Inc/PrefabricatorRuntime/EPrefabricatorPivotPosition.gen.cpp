// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrefabricatorRuntime/Public/EPrefabricatorPivotPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPrefabricatorPivotPosition() {}
// Cross Module References
	PREFABRICATORRUNTIME_API UEnum* Z_Construct_UEnum_PrefabricatorRuntime_EPrefabricatorPivotPosition();
	UPackage* Z_Construct_UPackage__Script_PrefabricatorRuntime();
// End Cross Module References
	static UEnum* EPrefabricatorPivotPosition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PrefabricatorRuntime_EPrefabricatorPivotPosition, Z_Construct_UPackage__Script_PrefabricatorRuntime(), TEXT("EPrefabricatorPivotPosition"));
		}
		return Singleton;
	}
	template<> PREFABRICATORRUNTIME_API UEnum* StaticEnum<EPrefabricatorPivotPosition>()
	{
		return EPrefabricatorPivotPosition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPrefabricatorPivotPosition(EPrefabricatorPivotPosition_StaticEnum, TEXT("/Script/PrefabricatorRuntime"), TEXT("EPrefabricatorPivotPosition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PrefabricatorRuntime_EPrefabricatorPivotPosition_Hash() { return 1791137068U; }
	UEnum* Z_Construct_UEnum_PrefabricatorRuntime_EPrefabricatorPivotPosition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PrefabricatorRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPrefabricatorPivotPosition"), 0, Get_Z_Construct_UEnum_PrefabricatorRuntime_EPrefabricatorPivotPosition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPrefabricatorPivotPosition::ExtremeLeft", (int64)EPrefabricatorPivotPosition::ExtremeLeft },
				{ "EPrefabricatorPivotPosition::ExtremeRight", (int64)EPrefabricatorPivotPosition::ExtremeRight },
				{ "EPrefabricatorPivotPosition::Center", (int64)EPrefabricatorPivotPosition::Center },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Center.Name", "EPrefabricatorPivotPosition::Center" },
				{ "ExtremeLeft.Name", "EPrefabricatorPivotPosition::ExtremeLeft" },
				{ "ExtremeRight.Name", "EPrefabricatorPivotPosition::ExtremeRight" },
				{ "ModuleRelativePath", "Public/EPrefabricatorPivotPosition.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PrefabricatorRuntime,
				nullptr,
				"EPrefabricatorPivotPosition",
				"EPrefabricatorPivotPosition",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
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
