// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConstructionSystemRuntime/Public/EConstructionSystemToolType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEConstructionSystemToolType() {}
// Cross Module References
	CONSTRUCTIONSYSTEMRUNTIME_API UEnum* Z_Construct_UEnum_ConstructionSystemRuntime_EConstructionSystemToolType();
	UPackage* Z_Construct_UPackage__Script_ConstructionSystemRuntime();
// End Cross Module References
	static UEnum* EConstructionSystemToolType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ConstructionSystemRuntime_EConstructionSystemToolType, Z_Construct_UPackage__Script_ConstructionSystemRuntime(), TEXT("EConstructionSystemToolType"));
		}
		return Singleton;
	}
	template<> CONSTRUCTIONSYSTEMRUNTIME_API UEnum* StaticEnum<EConstructionSystemToolType>()
	{
		return EConstructionSystemToolType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EConstructionSystemToolType(EConstructionSystemToolType_StaticEnum, TEXT("/Script/ConstructionSystemRuntime"), TEXT("EConstructionSystemToolType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ConstructionSystemRuntime_EConstructionSystemToolType_Hash() { return 3125060485U; }
	UEnum* Z_Construct_UEnum_ConstructionSystemRuntime_EConstructionSystemToolType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ConstructionSystemRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EConstructionSystemToolType"), 0, Get_Z_Construct_UEnum_ConstructionSystemRuntime_EConstructionSystemToolType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EConstructionSystemToolType::BuildTool", (int64)EConstructionSystemToolType::BuildTool },
				{ "EConstructionSystemToolType::RemoveTool", (int64)EConstructionSystemToolType::RemoveTool },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BuildTool.Name", "EConstructionSystemToolType::BuildTool" },
				{ "ModuleRelativePath", "Public/EConstructionSystemToolType.h" },
				{ "RemoveTool.Name", "EConstructionSystemToolType::RemoveTool" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ConstructionSystemRuntime,
				nullptr,
				"EConstructionSystemToolType",
				"EConstructionSystemToolType",
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
