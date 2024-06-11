// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrefabricatorRuntime/Public/PrefabManagerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrefabManagerComponent() {}
// Cross Module References
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabManagerComponent_NoRegister();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabManagerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PrefabricatorRuntime();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAssetCollection_NoRegister();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	PREFABRICATORRUNTIME_API UFunction* Z_Construct_UDelegateFunction_PrefabricatorRuntime_FailedToSpawnPrefab__DelegateSignature();
// End Cross Module References
	void UPrefabManagerComponent::StaticRegisterNativesUPrefabManagerComponent()
	{
	}
	UClass* Z_Construct_UClass_UPrefabManagerComponent_NoRegister()
	{
		return UPrefabManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPrefabManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelPrefabCollections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelPrefabCollections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelPrefabCollections;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LevelPrefabAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelPrefabAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelPrefabAssets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreLoadQueue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreLoadQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreLoadQueue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreloadedPrefabAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreloadedPrefabAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreloadedPrefabAssets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousLevelPreloadedObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousLevelPreloadedObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreviousLevelPreloadedObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreloadedObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreloadedObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreloadedObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreloadedLevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PreloadedLevelName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreloadedAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreloadedAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreloadedAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailedToSpawnPrefab_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailedToSpawnPrefab;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrefabManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PrefabricatorRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PrefabManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PrefabManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_LevelPrefabCollections_Inner = { "LevelPrefabCollections", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrefabricatorAssetCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_LevelPrefabCollections_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabManagerComponent" },
		{ "ModuleRelativePath", "Public/PrefabManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_LevelPrefabCollections = { "LevelPrefabCollections", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabManagerComponent, LevelPrefabCollections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_LevelPrefabCollections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_LevelPrefabCollections_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_LevelPrefabAssets_Inner = { "LevelPrefabAssets", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrefabricatorAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_LevelPrefabAssets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabManagerComponent" },
		{ "ModuleRelativePath", "Public/PrefabManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_LevelPrefabAssets = { "LevelPrefabAssets", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabManagerComponent, LevelPrefabAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_LevelPrefabAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_LevelPrefabAssets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreLoadQueue_Inner = { "PreLoadQueue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreLoadQueue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabManagerComponent" },
		{ "ModuleRelativePath", "Public/PrefabManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreLoadQueue = { "PreLoadQueue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabManagerComponent, PreLoadQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreLoadQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreLoadQueue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedPrefabAssets_Inner = { "PreloadedPrefabAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrefabricatorAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedPrefabAssets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabManagerComponent" },
		{ "ModuleRelativePath", "Public/PrefabManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedPrefabAssets = { "PreloadedPrefabAssets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabManagerComponent, PreloadedPrefabAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedPrefabAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedPrefabAssets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreviousLevelPreloadedObjects_Inner = { "PreviousLevelPreloadedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreviousLevelPreloadedObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabManagerComponent" },
		{ "ModuleRelativePath", "Public/PrefabManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreviousLevelPreloadedObjects = { "PreviousLevelPreloadedObjects", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabManagerComponent, PreviousLevelPreloadedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreviousLevelPreloadedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreviousLevelPreloadedObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedObjects_Inner = { "PreloadedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabManagerComponent" },
		{ "ModuleRelativePath", "Public/PrefabManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedObjects = { "PreloadedObjects", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabManagerComponent, PreloadedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedLevelName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabManagerComponent" },
		{ "ModuleRelativePath", "Public/PrefabManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedLevelName = { "PreloadedLevelName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabManagerComponent, PreloadedLevelName), METADATA_PARAMS(Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedLevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedLevelName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedAssets_Inner = { "PreloadedAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedAssets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabManagerComponent" },
		{ "ModuleRelativePath", "Public/PrefabManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedAssets = { "PreloadedAssets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabManagerComponent, PreloadedAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_OnFailedToSpawnPrefab_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabManagerComponent" },
		{ "ModuleRelativePath", "Public/PrefabManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_OnFailedToSpawnPrefab = { "OnFailedToSpawnPrefab", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabManagerComponent, OnFailedToSpawnPrefab), Z_Construct_UDelegateFunction_PrefabricatorRuntime_FailedToSpawnPrefab__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_OnFailedToSpawnPrefab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_OnFailedToSpawnPrefab_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPrefabManagerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_LevelPrefabCollections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_LevelPrefabCollections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_LevelPrefabAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_LevelPrefabAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreLoadQueue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreLoadQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedPrefabAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedPrefabAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreviousLevelPreloadedObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreviousLevelPreloadedObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedLevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_PreloadedAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabManagerComponent_Statics::NewProp_OnFailedToSpawnPrefab,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrefabManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrefabManagerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPrefabManagerComponent_Statics::ClassParams = {
		&UPrefabManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPrefabManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPrefabManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPrefabManagerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPrefabManagerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPrefabManagerComponent, 3255187139);
	template<> PREFABRICATORRUNTIME_API UClass* StaticClass<UPrefabManagerComponent>()
	{
		return UPrefabManagerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPrefabManagerComponent(Z_Construct_UClass_UPrefabManagerComponent, &UPrefabManagerComponent::StaticClass, TEXT("/Script/PrefabricatorRuntime"), TEXT("UPrefabManagerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrefabManagerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
