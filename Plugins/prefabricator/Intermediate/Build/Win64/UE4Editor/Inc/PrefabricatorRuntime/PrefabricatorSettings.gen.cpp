// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrefabricatorRuntime/Public/PrefabricatorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrefabricatorSettings() {}
// Cross Module References
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorSettings_NoRegister();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_PrefabricatorRuntime();
	PREFABRICATORRUNTIME_API UEnum* Z_Construct_UEnum_PrefabricatorRuntime_EPrefabricatorPivotPosition();
// End Cross Module References
	void UPrefabricatorSettings::StaticRegisterNativesUPrefabricatorSettings()
	{
	}
	UClass* Z_Construct_UClass_UPrefabricatorSettings_NoRegister()
	{
		return UPrefabricatorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPrefabricatorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PivotPosition_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PivotPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowDynamicUpdate_MetaData[];
#endif
		static void NewProp_bAllowDynamicUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowDynamicUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrefabricatorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PrefabricatorRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PrefabricatorSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PrefabricatorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPrefabricatorSettings_Statics::NewProp_PivotPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorSettings_Statics::NewProp_PivotPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorSettings" },
		{ "ModuleRelativePath", "Public/PrefabricatorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPrefabricatorSettings_Statics::NewProp_PivotPosition = { "PivotPosition", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabricatorSettings, PivotPosition), Z_Construct_UEnum_PrefabricatorRuntime_EPrefabricatorPivotPosition, METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorSettings_Statics::NewProp_PivotPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorSettings_Statics::NewProp_PivotPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorSettings_Statics::NewProp_bAllowDynamicUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorSettings" },
		{ "ModuleRelativePath", "Public/PrefabricatorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPrefabricatorSettings_Statics::NewProp_bAllowDynamicUpdate_SetBit(void* Obj)
	{
		((UPrefabricatorSettings*)Obj)->bAllowDynamicUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPrefabricatorSettings_Statics::NewProp_bAllowDynamicUpdate = { "bAllowDynamicUpdate", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPrefabricatorSettings), &Z_Construct_UClass_UPrefabricatorSettings_Statics::NewProp_bAllowDynamicUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorSettings_Statics::NewProp_bAllowDynamicUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorSettings_Statics::NewProp_bAllowDynamicUpdate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPrefabricatorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabricatorSettings_Statics::NewProp_PivotPosition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabricatorSettings_Statics::NewProp_PivotPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabricatorSettings_Statics::NewProp_bAllowDynamicUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrefabricatorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrefabricatorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPrefabricatorSettings_Statics::ClassParams = {
		&UPrefabricatorSettings::StaticClass,
		"Prefabricator",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPrefabricatorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPrefabricatorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPrefabricatorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPrefabricatorSettings, 2148261086);
	template<> PREFABRICATORRUNTIME_API UClass* StaticClass<UPrefabricatorSettings>()
	{
		return UPrefabricatorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPrefabricatorSettings(Z_Construct_UClass_UPrefabricatorSettings, &UPrefabricatorSettings::StaticClass, TEXT("/Script/PrefabricatorRuntime"), TEXT("UPrefabricatorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrefabricatorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
