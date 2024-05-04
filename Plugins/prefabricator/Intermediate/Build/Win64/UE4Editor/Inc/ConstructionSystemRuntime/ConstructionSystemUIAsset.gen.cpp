// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConstructionSystemRuntime/Public/ConstructionSystemUIAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructionSystemUIAsset() {}
// Cross Module References
	CONSTRUCTIONSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UConstructionSystemUIAsset_NoRegister();
	CONSTRUCTIONSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UConstructionSystemUIAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_ConstructionSystemRuntime();
	CONSTRUCTIONSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConstructionSystemUICategory();
// End Cross Module References
	void UConstructionSystemUIAsset::StaticRegisterNativesUConstructionSystemUIAsset()
	{
	}
	UClass* Z_Construct_UClass_UConstructionSystemUIAsset_NoRegister()
	{
		return UConstructionSystemUIAsset::StaticClass();
	}
	struct Z_Construct_UClass_UConstructionSystemUIAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MenuTitle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Categories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Categories;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConstructionSystemUIAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ConstructionSystemRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionSystemUIAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ConstructionSystemUIAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConstructionSystemUIAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionSystemUIAsset_Statics::NewProp_MenuTitle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemUIAsset" },
		{ "ModuleRelativePath", "Public/ConstructionSystemUIAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UConstructionSystemUIAsset_Statics::NewProp_MenuTitle = { "MenuTitle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConstructionSystemUIAsset, MenuTitle), METADATA_PARAMS(Z_Construct_UClass_UConstructionSystemUIAsset_Statics::NewProp_MenuTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemUIAsset_Statics::NewProp_MenuTitle_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConstructionSystemUIAsset_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConstructionSystemUICategory, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionSystemUIAsset_Statics::NewProp_Categories_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemUIAsset" },
		{ "ModuleRelativePath", "Public/ConstructionSystemUIAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConstructionSystemUIAsset_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConstructionSystemUIAsset, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConstructionSystemUIAsset_Statics::NewProp_Categories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemUIAsset_Statics::NewProp_Categories_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConstructionSystemUIAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionSystemUIAsset_Statics::NewProp_MenuTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionSystemUIAsset_Statics::NewProp_Categories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionSystemUIAsset_Statics::NewProp_Categories,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConstructionSystemUIAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstructionSystemUIAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConstructionSystemUIAsset_Statics::ClassParams = {
		&UConstructionSystemUIAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConstructionSystemUIAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemUIAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConstructionSystemUIAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemUIAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConstructionSystemUIAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConstructionSystemUIAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConstructionSystemUIAsset, 2610270657);
	template<> CONSTRUCTIONSYSTEMRUNTIME_API UClass* StaticClass<UConstructionSystemUIAsset>()
	{
		return UConstructionSystemUIAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConstructionSystemUIAsset(Z_Construct_UClass_UConstructionSystemUIAsset, &UConstructionSystemUIAsset::StaticClass, TEXT("/Script/ConstructionSystemRuntime"), TEXT("UConstructionSystemUIAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConstructionSystemUIAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
