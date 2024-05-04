// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Public/FMODPlatformSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODPlatformSettings() {}
// Cross Module References
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODPlatformSettings();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode();
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODOutput();
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODCodec();
// End Cross Module References
class UScriptStruct* FFMODPlatformSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FFMODPlatformSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODPlatformSettings, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODPlatformSettings"), sizeof(FFMODPlatformSettings), Get_Z_Construct_UScriptStruct_FFMODPlatformSettings_Hash());
	}
	return Singleton;
}
template<> FMODSTUDIO_API UScriptStruct* StaticStruct<FFMODPlatformSettings>()
{
	return FFMODPlatformSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODPlatformSettings(FFMODPlatformSettings::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("FMODPlatformSettings"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFFMODPlatformSettings
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFFMODPlatformSettings()
	{
		UScriptStruct::DeferCppStructOps<FFMODPlatformSettings>(FName(TEXT("FMODPlatformSettings")));
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFFMODPlatformSettings;
	struct Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealChannelCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RealChannelCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeakerMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpeakerMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomPoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CustomPoolSize;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Codecs_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Codecs_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Codecs_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Codecs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FMODPlatformSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODPlatformSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_RealChannelCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODPlatformSettings" },
		{ "ModuleRelativePath", "Public/FMODPlatformSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_RealChannelCount = { "RealChannelCount", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODPlatformSettings, RealChannelCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_RealChannelCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_RealChannelCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_SampleRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODPlatformSettings" },
		{ "ModuleRelativePath", "Public/FMODPlatformSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODPlatformSettings, SampleRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_SampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_SpeakerMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODPlatformSettings" },
		{ "ModuleRelativePath", "Public/FMODPlatformSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_SpeakerMode = { "SpeakerMode", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODPlatformSettings, SpeakerMode), Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_SpeakerMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_SpeakerMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_OutputType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODPlatformSettings" },
		{ "ModuleRelativePath", "Public/FMODPlatformSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODPlatformSettings, OutputType), Z_Construct_UEnum_FMODStudio_EFMODOutput, METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_OutputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_OutputType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_CustomPoolSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODPlatformSettings" },
		{ "ModuleRelativePath", "Public/FMODPlatformSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_CustomPoolSize = { "CustomPoolSize", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODPlatformSettings, CustomPoolSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_CustomPoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_CustomPoolSize_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_Codecs_ValueProp = { "Codecs", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_Codecs_Key_KeyProp = { "Codecs_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FMODStudio_EFMODCodec, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_Codecs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODPlatformSettings" },
		{ "ModuleRelativePath", "Public/FMODPlatformSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_Codecs = { "Codecs", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODPlatformSettings, Codecs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_Codecs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_Codecs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_RealChannelCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_SampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_SpeakerMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_OutputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_CustomPoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_Codecs_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_Codecs_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewProp_Codecs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
		nullptr,
		&NewStructOps,
		"FMODPlatformSettings",
		sizeof(FFMODPlatformSettings),
		alignof(FFMODPlatformSettings),
		Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFMODPlatformSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODPlatformSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODPlatformSettings"), sizeof(FFMODPlatformSettings), Get_Z_Construct_UScriptStruct_FFMODPlatformSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODPlatformSettings_Hash() { return 3284925362U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
