// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConstructionSystemRuntime/Public/EConstructionSystemCursorVisiblity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEConstructionSystemCursorVisiblity() {}
// Cross Module References
	CONSTRUCTIONSYSTEMRUNTIME_API UEnum* Z_Construct_UEnum_ConstructionSystemRuntime_EConstructionSystemCursorVisiblity();
	UPackage* Z_Construct_UPackage__Script_ConstructionSystemRuntime();
// End Cross Module References
	static UEnum* EConstructionSystemCursorVisiblity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ConstructionSystemRuntime_EConstructionSystemCursorVisiblity, Z_Construct_UPackage__Script_ConstructionSystemRuntime(), TEXT("EConstructionSystemCursorVisiblity"));
		}
		return Singleton;
	}
	template<> CONSTRUCTIONSYSTEMRUNTIME_API UEnum* StaticEnum<EConstructionSystemCursorVisiblity>()
	{
		return EConstructionSystemCursorVisiblity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EConstructionSystemCursorVisiblity(EConstructionSystemCursorVisiblity_StaticEnum, TEXT("/Script/ConstructionSystemRuntime"), TEXT("EConstructionSystemCursorVisiblity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ConstructionSystemRuntime_EConstructionSystemCursorVisiblity_Hash() { return 3473362825U; }
	UEnum* Z_Construct_UEnum_ConstructionSystemRuntime_EConstructionSystemCursorVisiblity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ConstructionSystemRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EConstructionSystemCursorVisiblity"), 0, Get_Z_Construct_UEnum_ConstructionSystemRuntime_EConstructionSystemCursorVisiblity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EConstructionSystemCursorVisiblity::Visible", (int64)EConstructionSystemCursorVisiblity::Visible },
				{ "EConstructionSystemCursorVisiblity::VisibleInvalid", (int64)EConstructionSystemCursorVisiblity::VisibleInvalid },
				{ "EConstructionSystemCursorVisiblity::Hidden", (int64)EConstructionSystemCursorVisiblity::Hidden },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Hidden.Name", "EConstructionSystemCursorVisiblity::Hidden" },
				{ "ModuleRelativePath", "Public/EConstructionSystemCursorVisiblity.h" },
				{ "Visible.Name", "EConstructionSystemCursorVisiblity::Visible" },
				{ "VisibleInvalid.Name", "EConstructionSystemCursorVisiblity::VisibleInvalid" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ConstructionSystemRuntime,
				nullptr,
				"EConstructionSystemCursorVisiblity",
				"EConstructionSystemCursorVisiblity",
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
