// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Public/EFMODEventProperty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFMODEventProperty() {}
// Cross Module References
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventProperty();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
	static UEnum* EFMODEventProperty_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODEventProperty, Z_Construct_UPackage__Script_FMODStudio(), TEXT("EFMODEventProperty"));
		}
		return Singleton;
	}
	template<> FMODSTUDIO_API UEnum* StaticEnum<EFMODEventProperty::Type>()
	{
		return EFMODEventProperty_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFMODEventProperty(EFMODEventProperty_StaticEnum, TEXT("/Script/FMODStudio"), TEXT("EFMODEventProperty"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FMODStudio_EFMODEventProperty_Hash() { return 3300966888U; }
	UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventProperty()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFMODEventProperty"), 0, Get_Z_Construct_UEnum_FMODStudio_EFMODEventProperty_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFMODEventProperty::ChannelPriority", (int64)EFMODEventProperty::ChannelPriority },
				{ "EFMODEventProperty::ScheduleDelay", (int64)EFMODEventProperty::ScheduleDelay },
				{ "EFMODEventProperty::ScheduleLookahead", (int64)EFMODEventProperty::ScheduleLookahead },
				{ "EFMODEventProperty::MinimumDistance", (int64)EFMODEventProperty::MinimumDistance },
				{ "EFMODEventProperty::MaximumDistance", (int64)EFMODEventProperty::MaximumDistance },
				{ "EFMODEventProperty::Count", (int64)EFMODEventProperty::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChannelPriority.Name", "EFMODEventProperty::ChannelPriority" },
				{ "Count.Name", "EFMODEventProperty::Count" },
				{ "MaximumDistance.Name", "EFMODEventProperty::MaximumDistance" },
				{ "MinimumDistance.Name", "EFMODEventProperty::MinimumDistance" },
				{ "ModuleRelativePath", "Public/EFMODEventProperty.h" },
				{ "ScheduleDelay.Name", "EFMODEventProperty::ScheduleDelay" },
				{ "ScheduleLookahead.Name", "EFMODEventProperty::ScheduleLookahead" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FMODStudio,
				nullptr,
				"EFMODEventProperty",
				"EFMODEventProperty::Type",
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
