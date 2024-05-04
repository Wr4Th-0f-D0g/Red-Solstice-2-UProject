// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrefabricatorRuntime/Public/PrefabricatorAssetCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrefabricatorAssetCollection() {}
// Cross Module References
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAssetCollection_NoRegister();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAssetCollection();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAssetInterface();
	UPackage* Z_Construct_UPackage__Script_PrefabricatorRuntime();
	PREFABRICATORRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UPrefabricatorAssetCollection::StaticRegisterNativesUPrefabricatorAssetCollection()
	{
	}
	UClass* Z_Construct_UClass_UPrefabricatorAssetCollection_NoRegister()
	{
		return UPrefabricatorAssetCollection::StaticClass();
	}
	struct Z_Construct_UClass_UPrefabricatorAssetCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Prefabs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefabs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Prefabs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShapeTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoLoadPrefabInLevel_MetaData[];
#endif
		static void NewProp_bNoLoadPrefabInLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoLoadPrefabInLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrefabNullModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PrefabNullModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NetworkManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrefabricatorAssetInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PrefabricatorRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PrefabricatorAssetCollection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PrefabricatorAssetCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_Prefabs_Inner = { "Prefabs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_Prefabs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorAssetCollection" },
		{ "ModuleRelativePath", "Public/PrefabricatorAssetCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_Prefabs = { "Prefabs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabricatorAssetCollection, Prefabs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_Prefabs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_Prefabs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_ShapeTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorAssetCollection" },
		{ "ModuleRelativePath", "Public/PrefabricatorAssetCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_ShapeTag = { "ShapeTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabricatorAssetCollection, ShapeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_ShapeTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_ShapeTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_bNoLoadPrefabInLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorAssetCollection" },
		{ "ModuleRelativePath", "Public/PrefabricatorAssetCollection.h" },
	};
#endif
	void Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_bNoLoadPrefabInLevel_SetBit(void* Obj)
	{
		((UPrefabricatorAssetCollection*)Obj)->bNoLoadPrefabInLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_bNoLoadPrefabInLevel = { "bNoLoadPrefabInLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPrefabricatorAssetCollection), &Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_bNoLoadPrefabInLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_bNoLoadPrefabInLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_bNoLoadPrefabInLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_PrefabNullModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorAssetCollection" },
		{ "ModuleRelativePath", "Public/PrefabricatorAssetCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_PrefabNullModifier = { "PrefabNullModifier", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabricatorAssetCollection, PrefabNullModifier), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_PrefabNullModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_PrefabNullModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_NetworkManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorAssetCollection" },
		{ "ModuleRelativePath", "Public/PrefabricatorAssetCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_NetworkManager = { "NetworkManager", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabricatorAssetCollection, NetworkManager), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_NetworkManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_NetworkManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_Version_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorAssetCollection" },
		{ "ModuleRelativePath", "Public/PrefabricatorAssetCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabricatorAssetCollection, Version), METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_Prefabs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_Prefabs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_ShapeTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_bNoLoadPrefabInLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_PrefabNullModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_NetworkManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::NewProp_Version,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrefabricatorAssetCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::ClassParams = {
		&UPrefabricatorAssetCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPrefabricatorAssetCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPrefabricatorAssetCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPrefabricatorAssetCollection, 1925341346);
	template<> PREFABRICATORRUNTIME_API UClass* StaticClass<UPrefabricatorAssetCollection>()
	{
		return UPrefabricatorAssetCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPrefabricatorAssetCollection(Z_Construct_UClass_UPrefabricatorAssetCollection, &UPrefabricatorAssetCollection::StaticClass, TEXT("/Script/PrefabricatorRuntime"), TEXT("UPrefabricatorAssetCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrefabricatorAssetCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
