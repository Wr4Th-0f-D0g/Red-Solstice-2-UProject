// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Public/EFMOD_STUDIO_STOP_MODE.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFMOD_STUDIO_STOP_MODE() {}
// Cross Module References
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMOD_STUDIO_STOP_MODE();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
	static UEnum* EFMOD_STUDIO_STOP_MODE_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMOD_STUDIO_STOP_MODE, Z_Construct_UPackage__Script_FMODStudio(), TEXT("EFMOD_STUDIO_STOP_MODE"));
		}
		return Singleton;
	}
	template<> FMODSTUDIO_API UEnum* StaticEnum<EFMOD_STUDIO_STOP_MODE>()
	{
		return EFMOD_STUDIO_STOP_MODE_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFMOD_STUDIO_STOP_MODE(EFMOD_STUDIO_STOP_MODE_StaticEnum, TEXT("/Script/FMODStudio"), TEXT("EFMOD_STUDIO_STOP_MODE"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FMODStudio_EFMOD_STUDIO_STOP_MODE_Hash() { return 1657055566U; }
	UEnum* Z_Construct_UEnum_FMODStudio_EFMOD_STUDIO_STOP_MODE()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFMOD_STUDIO_STOP_MODE"), 0, Get_Z_Construct_UEnum_FMODStudio_EFMOD_STUDIO_STOP_MODE_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ALLOWFADEOUT", (int64)ALLOWFADEOUT },
				{ "IMMEDIATE", (int64)IMMEDIATE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ALLOWFADEOUT.Name", "ALLOWFADEOUT" },
				{ "BlueprintType", "true" },
				{ "IMMEDIATE.Name", "IMMEDIATE" },
				{ "ModuleRelativePath", "Public/EFMOD_STUDIO_STOP_MODE.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FMODStudio,
				nullptr,
				"EFMOD_STUDIO_STOP_MODE",
				"EFMOD_STUDIO_STOP_MODE",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
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
