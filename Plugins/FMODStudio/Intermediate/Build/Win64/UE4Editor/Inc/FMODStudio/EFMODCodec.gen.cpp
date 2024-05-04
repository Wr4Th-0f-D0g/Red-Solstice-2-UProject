// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Public/EFMODCodec.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFMODCodec() {}
// Cross Module References
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODCodec();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
	static UEnum* EFMODCodec_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODCodec, Z_Construct_UPackage__Script_FMODStudio(), TEXT("EFMODCodec"));
		}
		return Singleton;
	}
	template<> FMODSTUDIO_API UEnum* StaticEnum<EFMODCodec::Type>()
	{
		return EFMODCodec_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFMODCodec(EFMODCodec_StaticEnum, TEXT("/Script/FMODStudio"), TEXT("EFMODCodec"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FMODStudio_EFMODCodec_Hash() { return 1030958194U; }
	UEnum* Z_Construct_UEnum_FMODStudio_EFMODCodec()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFMODCodec"), 0, Get_Z_Construct_UEnum_FMODStudio_EFMODCodec_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFMODCodec::VORBIS", (int64)EFMODCodec::VORBIS },
				{ "EFMODCodec::FADPCM", (int64)EFMODCodec::FADPCM },
				{ "EFMODCodec::OPUS", (int64)EFMODCodec::OPUS },
				{ "EFMODCodec::XMA", (int64)EFMODCodec::XMA },
				{ "EFMODCodec::AT9", (int64)EFMODCodec::AT9 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AT9.Name", "EFMODCodec::AT9" },
				{ "BlueprintType", "true" },
				{ "FADPCM.Name", "EFMODCodec::FADPCM" },
				{ "ModuleRelativePath", "Public/EFMODCodec.h" },
				{ "OPUS.Name", "EFMODCodec::OPUS" },
				{ "VORBIS.Name", "EFMODCodec::VORBIS" },
				{ "XMA.Name", "EFMODCodec::XMA" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FMODStudio,
				nullptr,
				"EFMODCodec",
				"EFMODCodec::Type",
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
