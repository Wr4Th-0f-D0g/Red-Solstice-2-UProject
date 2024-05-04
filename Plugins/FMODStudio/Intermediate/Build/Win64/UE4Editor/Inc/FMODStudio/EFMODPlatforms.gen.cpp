// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Public/EFMODPlatforms.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFMODPlatforms() {}
// Cross Module References
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODPlatforms();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
	static UEnum* EFMODPlatforms_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODPlatforms, Z_Construct_UPackage__Script_FMODStudio(), TEXT("EFMODPlatforms"));
		}
		return Singleton;
	}
	template<> FMODSTUDIO_API UEnum* StaticEnum<EFMODPlatforms::Type>()
	{
		return EFMODPlatforms_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFMODPlatforms(EFMODPlatforms_StaticEnum, TEXT("/Script/FMODStudio"), TEXT("EFMODPlatforms"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FMODStudio_EFMODPlatforms_Hash() { return 2521847578U; }
	UEnum* Z_Construct_UEnum_FMODStudio_EFMODPlatforms()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFMODPlatforms"), 0, Get_Z_Construct_UEnum_FMODStudio_EFMODPlatforms_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFMODPlatforms::Windows", (int64)EFMODPlatforms::Windows },
				{ "EFMODPlatforms::Linux", (int64)EFMODPlatforms::Linux },
				{ "EFMODPlatforms::Mac", (int64)EFMODPlatforms::Mac },
				{ "EFMODPlatforms::Android", (int64)EFMODPlatforms::Android },
				{ "EFMODPlatforms::IOS", (int64)EFMODPlatforms::IOS },
				{ "EFMODPlatforms::PS4", (int64)EFMODPlatforms::PS4 },
				{ "EFMODPlatforms::PS5", (int64)EFMODPlatforms::PS5 },
				{ "EFMODPlatforms::Stadia", (int64)EFMODPlatforms::Stadia },
				{ "EFMODPlatforms::Switch", (int64)EFMODPlatforms::Switch },
				{ "EFMODPlatforms::XboxOne", (int64)EFMODPlatforms::XboxOne },
				{ "EFMODPlatforms::XSX", (int64)EFMODPlatforms::XSX },
				{ "EFMODPlatforms::Editor", (int64)EFMODPlatforms::Editor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Android.Name", "EFMODPlatforms::Android" },
				{ "BlueprintType", "true" },
				{ "Editor.Name", "EFMODPlatforms::Editor" },
				{ "IOS.Name", "EFMODPlatforms::IOS" },
				{ "Linux.Name", "EFMODPlatforms::Linux" },
				{ "Mac.Name", "EFMODPlatforms::Mac" },
				{ "ModuleRelativePath", "Public/EFMODPlatforms.h" },
				{ "PS4.Name", "EFMODPlatforms::PS4" },
				{ "PS5.Name", "EFMODPlatforms::PS5" },
				{ "Stadia.Name", "EFMODPlatforms::Stadia" },
				{ "Switch.Name", "EFMODPlatforms::Switch" },
				{ "Windows.Name", "EFMODPlatforms::Windows" },
				{ "XboxOne.Name", "EFMODPlatforms::XboxOne" },
				{ "XSX.Name", "EFMODPlatforms::XSX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FMODStudio,
				nullptr,
				"EFMODPlatforms",
				"EFMODPlatforms::Type",
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
