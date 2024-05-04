// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonLoadingScreen/Public/CommonLoadingScreenSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonLoadingScreenSettings() {}
// Cross Module References
	COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_UCommonLoadingScreenSettings_NoRegister();
	COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_UCommonLoadingScreenSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_CommonLoadingScreen();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
// End Cross Module References
	void UCommonLoadingScreenSettings::StaticRegisterNativesUCommonLoadingScreenSettings()
	{
	}
	UClass* Z_Construct_UClass_UCommonLoadingScreenSettings_NoRegister()
	{
		return UCommonLoadingScreenSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCommonLoadingScreenSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadingScreenWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenZOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoadingScreenZOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenHeartbeatHangDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoadingScreenHeartbeatHangDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogLoadingScreenHeartbeatInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LogLoadingScreenHeartbeatInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldLoadingScreenAdditionalSecsEvenInEditor_MetaData[];
#endif
		static void NewProp_HoldLoadingScreenAdditionalSecsEvenInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HoldLoadingScreenAdditionalSecsEvenInEditor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceTickLoadingScreenEvenInEditor_MetaData[];
#endif
		static void NewProp_ForceTickLoadingScreenEvenInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceTickLoadingScreenEvenInEditor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonLoadingScreen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonLoadingScreenSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonLoadingScreenSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/CommonLoadingScreenSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenWidget = { "LoadingScreenWidget", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommonLoadingScreenSettings, LoadingScreenWidget), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenZOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/CommonLoadingScreenSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenZOrder = { "LoadingScreenZOrder", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommonLoadingScreenSettings, LoadingScreenZOrder), METADATA_PARAMS(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenZOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenZOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenHeartbeatHangDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/CommonLoadingScreenSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenHeartbeatHangDuration = { "LoadingScreenHeartbeatHangDuration", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommonLoadingScreenSettings, LoadingScreenHeartbeatHangDuration), METADATA_PARAMS(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenHeartbeatHangDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenHeartbeatHangDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LogLoadingScreenHeartbeatInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/CommonLoadingScreenSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LogLoadingScreenHeartbeatInterval = { "LogLoadingScreenHeartbeatInterval", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommonLoadingScreenSettings, LogLoadingScreenHeartbeatInterval), METADATA_PARAMS(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LogLoadingScreenHeartbeatInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LogLoadingScreenHeartbeatInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_HoldLoadingScreenAdditionalSecsEvenInEditor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/CommonLoadingScreenSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_HoldLoadingScreenAdditionalSecsEvenInEditor_SetBit(void* Obj)
	{
		((UCommonLoadingScreenSettings*)Obj)->HoldLoadingScreenAdditionalSecsEvenInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_HoldLoadingScreenAdditionalSecsEvenInEditor = { "HoldLoadingScreenAdditionalSecsEvenInEditor", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCommonLoadingScreenSettings), &Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_HoldLoadingScreenAdditionalSecsEvenInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_HoldLoadingScreenAdditionalSecsEvenInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_HoldLoadingScreenAdditionalSecsEvenInEditor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_ForceTickLoadingScreenEvenInEditor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/CommonLoadingScreenSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_ForceTickLoadingScreenEvenInEditor_SetBit(void* Obj)
	{
		((UCommonLoadingScreenSettings*)Obj)->ForceTickLoadingScreenEvenInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_ForceTickLoadingScreenEvenInEditor = { "ForceTickLoadingScreenEvenInEditor", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCommonLoadingScreenSettings), &Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_ForceTickLoadingScreenEvenInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_ForceTickLoadingScreenEvenInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_ForceTickLoadingScreenEvenInEditor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenZOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenHeartbeatHangDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LogLoadingScreenHeartbeatInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_HoldLoadingScreenAdditionalSecsEvenInEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_ForceTickLoadingScreenEvenInEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonLoadingScreenSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::ClassParams = {
		&UCommonLoadingScreenSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonLoadingScreenSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonLoadingScreenSettings, 1041857112);
	template<> COMMONLOADINGSCREEN_API UClass* StaticClass<UCommonLoadingScreenSettings>()
	{
		return UCommonLoadingScreenSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonLoadingScreenSettings(Z_Construct_UClass_UCommonLoadingScreenSettings, &UCommonLoadingScreenSettings::StaticClass, TEXT("/Script/CommonLoadingScreen"), TEXT("UCommonLoadingScreenSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonLoadingScreenSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
