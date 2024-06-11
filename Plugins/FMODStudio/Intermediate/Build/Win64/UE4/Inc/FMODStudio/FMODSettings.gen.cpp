// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Public/FMODSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODSettings() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSettings_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode();
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODOutput();
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODProjectLocale();
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FCustomPoolSizes();
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODLogging();
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODPlatformSettings();
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODPlatforms();
// End Cross Module References
	void UFMODSettings::StaticRegisterNativesUFMODSettings()
	{
	}
	UClass* Z_Construct_UClass_UFMODSettings_NoRegister()
	{
		return UFMODSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFMODSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoadAllBanks_MetaData[];
#endif
		static void NewProp_bLoadAllBanks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoadAllBanks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoadAllSampleData_MetaData[];
#endif
		static void NewProp_bLoadAllSampleData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoadAllSampleData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLiveUpdate_MetaData[];
#endif
		static void NewProp_bEnableLiveUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLiveUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableEditorLiveUpdate_MetaData[];
#endif
		static void NewProp_bEnableEditorLiveUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableEditorLiveUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BankOutputDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BankOutputDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Locales_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Locales_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Locales;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVol0Virtual_MetaData[];
#endif
		static void NewProp_bVol0Virtual_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVol0Virtual;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vol0VirtualLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Vol0VirtualLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMatchHardwareSampleRate_MetaData[];
#endif
		static void NewProp_bMatchHardwareSampleRate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMatchHardwareSampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealChannelCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RealChannelCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalChannelCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalChannelCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DSPBufferLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DSPBufferLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DSPBufferCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DSPBufferCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileBufferSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FileBufferSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StudioUpdatePeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StudioUpdatePeriod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialOutputDriverName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InitialOutputDriverName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockAllBuses_MetaData[];
#endif
		static void NewProp_bLockAllBuses_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockAllBuses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemoryPoolSizes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MemoryPoolSizes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LiveUpdatePort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LiveUpdatePort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorLiveUpdatePort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditorLiveUpdatePort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadBanksDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReloadBanksDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAPIErrorLogging_MetaData[];
#endif
		static void NewProp_bEnableAPIErrorLogging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAPIErrorLogging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMemoryTracking_MetaData[];
#endif
		static void NewProp_bEnableMemoryTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMemoryTracking;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PluginFiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PluginFiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentBrowserPrefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentBrowserPrefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcePlatformName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ForcePlatformName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterBankName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MasterBankName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipLoadBankName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SkipLoadBankName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StudioBankKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StudioBankKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WavWriterPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WavWriterPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoggingLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OcclusionParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientVolumeParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AmbientVolumeParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientLPFParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AmbientLPFParameter;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Platforms_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Platforms_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Platforms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFMODSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FMODSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllBanks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	void Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllBanks_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bLoadAllBanks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllBanks = { "bLoadAllBanks", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFMODSettings), &Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllBanks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllBanks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllBanks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllSampleData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	void Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllSampleData_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bLoadAllSampleData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllSampleData = { "bLoadAllSampleData", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFMODSettings), &Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllSampleData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllSampleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllSampleData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableLiveUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	void Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableLiveUpdate_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bEnableLiveUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableLiveUpdate = { "bEnableLiveUpdate", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFMODSettings), &Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableLiveUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableLiveUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableLiveUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableEditorLiveUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	void Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableEditorLiveUpdate_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bEnableEditorLiveUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableEditorLiveUpdate = { "bEnableEditorLiveUpdate", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFMODSettings), &Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableEditorLiveUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableEditorLiveUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableEditorLiveUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_BankOutputDirectory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_BankOutputDirectory = { "BankOutputDirectory", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, BankOutputDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_BankOutputDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_BankOutputDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_OutputFormat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_OutputFormat = { "OutputFormat", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, OutputFormat), Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_OutputFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_OutputFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_OutputType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, OutputType), Z_Construct_UEnum_FMODStudio_EFMODOutput, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_OutputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_OutputType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_Locales_Inner = { "Locales", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFMODProjectLocale, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_Locales_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_Locales = { "Locales", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, Locales), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_Locales_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_Locales_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_bVol0Virtual_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	void Z_Construct_UClass_UFMODSettings_Statics::NewProp_bVol0Virtual_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bVol0Virtual = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_bVol0Virtual = { "bVol0Virtual", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFMODSettings), &Z_Construct_UClass_UFMODSettings_Statics::NewProp_bVol0Virtual_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bVol0Virtual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bVol0Virtual_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_Vol0VirtualLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_Vol0VirtualLevel = { "Vol0VirtualLevel", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, Vol0VirtualLevel), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_Vol0VirtualLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_Vol0VirtualLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_SampleRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, SampleRate), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_SampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_bMatchHardwareSampleRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	void Z_Construct_UClass_UFMODSettings_Statics::NewProp_bMatchHardwareSampleRate_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bMatchHardwareSampleRate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_bMatchHardwareSampleRate = { "bMatchHardwareSampleRate", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFMODSettings), &Z_Construct_UClass_UFMODSettings_Statics::NewProp_bMatchHardwareSampleRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bMatchHardwareSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bMatchHardwareSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_RealChannelCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_RealChannelCount = { "RealChannelCount", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, RealChannelCount), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_RealChannelCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_RealChannelCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_TotalChannelCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_TotalChannelCount = { "TotalChannelCount", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, TotalChannelCount), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_TotalChannelCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_TotalChannelCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_DSPBufferLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_DSPBufferLength = { "DSPBufferLength", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, DSPBufferLength), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_DSPBufferLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_DSPBufferLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_DSPBufferCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_DSPBufferCount = { "DSPBufferCount", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, DSPBufferCount), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_DSPBufferCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_DSPBufferCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_FileBufferSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_FileBufferSize = { "FileBufferSize", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, FileBufferSize), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_FileBufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_FileBufferSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_StudioUpdatePeriod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_StudioUpdatePeriod = { "StudioUpdatePeriod", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, StudioUpdatePeriod), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_StudioUpdatePeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_StudioUpdatePeriod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_InitialOutputDriverName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_InitialOutputDriverName = { "InitialOutputDriverName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, InitialOutputDriverName), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_InitialOutputDriverName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_InitialOutputDriverName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLockAllBuses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	void Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLockAllBuses_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bLockAllBuses = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLockAllBuses = { "bLockAllBuses", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFMODSettings), &Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLockAllBuses_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLockAllBuses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLockAllBuses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_MemoryPoolSizes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_MemoryPoolSizes = { "MemoryPoolSizes", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, MemoryPoolSizes), Z_Construct_UScriptStruct_FCustomPoolSizes, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_MemoryPoolSizes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_MemoryPoolSizes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_LiveUpdatePort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_LiveUpdatePort = { "LiveUpdatePort", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, LiveUpdatePort), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_LiveUpdatePort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_LiveUpdatePort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_EditorLiveUpdatePort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_EditorLiveUpdatePort = { "EditorLiveUpdatePort", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, EditorLiveUpdatePort), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_EditorLiveUpdatePort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_EditorLiveUpdatePort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_ReloadBanksDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_ReloadBanksDelay = { "ReloadBanksDelay", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, ReloadBanksDelay), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_ReloadBanksDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_ReloadBanksDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableAPIErrorLogging_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	void Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableAPIErrorLogging_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bEnableAPIErrorLogging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableAPIErrorLogging = { "bEnableAPIErrorLogging", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFMODSettings), &Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableAPIErrorLogging_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableAPIErrorLogging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableAPIErrorLogging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableMemoryTracking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	void Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableMemoryTracking_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bEnableMemoryTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableMemoryTracking = { "bEnableMemoryTracking", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFMODSettings), &Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableMemoryTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableMemoryTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableMemoryTracking_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_PluginFiles_Inner = { "PluginFiles", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_PluginFiles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_PluginFiles = { "PluginFiles", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, PluginFiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_PluginFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_PluginFiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_ContentBrowserPrefix_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_ContentBrowserPrefix = { "ContentBrowserPrefix", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, ContentBrowserPrefix), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_ContentBrowserPrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_ContentBrowserPrefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_ForcePlatformName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_ForcePlatformName = { "ForcePlatformName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, ForcePlatformName), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_ForcePlatformName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_ForcePlatformName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_MasterBankName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_MasterBankName = { "MasterBankName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, MasterBankName), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_MasterBankName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_MasterBankName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_SkipLoadBankName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_SkipLoadBankName = { "SkipLoadBankName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, SkipLoadBankName), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_SkipLoadBankName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_SkipLoadBankName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_StudioBankKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_StudioBankKey = { "StudioBankKey", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, StudioBankKey), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_StudioBankKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_StudioBankKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_WavWriterPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_WavWriterPath = { "WavWriterPath", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, WavWriterPath), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_WavWriterPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_WavWriterPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_LoggingLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_LoggingLevel = { "LoggingLevel", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, LoggingLevel), Z_Construct_UEnum_FMODStudio_EFMODLogging, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_LoggingLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_LoggingLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_OcclusionParameter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_OcclusionParameter = { "OcclusionParameter", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, OcclusionParameter), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_OcclusionParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_OcclusionParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_AmbientVolumeParameter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_AmbientVolumeParameter = { "AmbientVolumeParameter", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, AmbientVolumeParameter), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_AmbientVolumeParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_AmbientVolumeParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_AmbientLPFParameter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_AmbientLPFParameter = { "AmbientLPFParameter", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, AmbientLPFParameter), METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_AmbientLPFParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_AmbientLPFParameter_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_Platforms_ValueProp = { "Platforms", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFMODPlatformSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_Platforms_Key_KeyProp = { "Platforms_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FMODStudio_EFMODPlatforms, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODSettings_Statics::NewProp_Platforms_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODSettings" },
		{ "ModuleRelativePath", "Public/FMODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFMODSettings_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODSettings, Platforms), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::NewProp_Platforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::NewProp_Platforms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFMODSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllBanks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLoadAllSampleData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableLiveUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableEditorLiveUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_BankOutputDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_OutputFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_OutputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_Locales_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_Locales,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_bVol0Virtual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_Vol0VirtualLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_SampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_bMatchHardwareSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_RealChannelCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_TotalChannelCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_DSPBufferLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_DSPBufferCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_FileBufferSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_StudioUpdatePeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_InitialOutputDriverName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_bLockAllBuses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_MemoryPoolSizes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_LiveUpdatePort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_EditorLiveUpdatePort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_ReloadBanksDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableAPIErrorLogging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_bEnableMemoryTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_PluginFiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_PluginFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_ContentBrowserPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_ForcePlatformName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_MasterBankName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_SkipLoadBankName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_StudioBankKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_WavWriterPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_LoggingLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_OcclusionParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_AmbientVolumeParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_AmbientLPFParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_Platforms_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_Platforms_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODSettings_Statics::NewProp_Platforms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFMODSettings_Statics::ClassParams = {
		&UFMODSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFMODSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UFMODSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFMODSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFMODSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODSettings, 2885371232);
	template<> FMODSTUDIO_API UClass* StaticClass<UFMODSettings>()
	{
		return UFMODSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODSettings(Z_Construct_UClass_UFMODSettings, &UFMODSettings::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
