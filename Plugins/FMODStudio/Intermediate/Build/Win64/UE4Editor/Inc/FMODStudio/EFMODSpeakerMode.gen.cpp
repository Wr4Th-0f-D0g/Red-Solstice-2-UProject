// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Public/EFMODSpeakerMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFMODSpeakerMode() {}
// Cross Module References
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
	static UEnum* EFMODSpeakerMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode, Z_Construct_UPackage__Script_FMODStudio(), TEXT("EFMODSpeakerMode"));
		}
		return Singleton;
	}
	template<> FMODSTUDIO_API UEnum* StaticEnum<EFMODSpeakerMode::Type>()
	{
		return EFMODSpeakerMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFMODSpeakerMode(EFMODSpeakerMode_StaticEnum, TEXT("/Script/FMODStudio"), TEXT("EFMODSpeakerMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode_Hash() { return 1284121326U; }
	UEnum* Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFMODSpeakerMode"), 0, Get_Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFMODSpeakerMode::Stereo", (int64)EFMODSpeakerMode::Stereo },
				{ "EFMODSpeakerMode::Surround_5_1", (int64)EFMODSpeakerMode::Surround_5_1 },
				{ "EFMODSpeakerMode::Surround_7_1", (int64)EFMODSpeakerMode::Surround_7_1 },
				{ "EFMODSpeakerMode::Surround_7_1_4", (int64)EFMODSpeakerMode::Surround_7_1_4 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EFMODSpeakerMode.h" },
				{ "Stereo.Name", "EFMODSpeakerMode::Stereo" },
				{ "Surround_5_1.Name", "EFMODSpeakerMode::Surround_5_1" },
				{ "Surround_7_1.Name", "EFMODSpeakerMode::Surround_7_1" },
				{ "Surround_7_1_4.Name", "EFMODSpeakerMode::Surround_7_1_4" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FMODStudio,
				nullptr,
				"EFMODSpeakerMode",
				"EFMODSpeakerMode::Type",
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
