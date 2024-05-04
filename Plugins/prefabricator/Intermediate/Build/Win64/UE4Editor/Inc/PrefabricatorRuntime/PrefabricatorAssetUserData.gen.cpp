// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrefabricatorRuntime/Public/PrefabricatorAssetUserData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrefabricatorAssetUserData() {}
// Cross Module References
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAssetUserData_NoRegister();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAssetUserData();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	UPackage* Z_Construct_UPackage__Script_PrefabricatorRuntime();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_APrefabActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UPrefabricatorAssetUserData::StaticRegisterNativesUPrefabricatorAssetUserData()
	{
	}
	UClass* Z_Construct_UClass_UPrefabricatorAssetUserData_NoRegister()
	{
		return UPrefabricatorAssetUserData::StaticClass();
	}
	struct Z_Construct_UClass_UPrefabricatorAssetUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrefabActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_PrefabActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrefabricatorAssetUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_PrefabricatorRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorAssetUserData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PrefabricatorAssetUserData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PrefabricatorAssetUserData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorAssetUserData_Statics::NewProp_PrefabActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorAssetUserData" },
		{ "ModuleRelativePath", "Public/PrefabricatorAssetUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPrefabricatorAssetUserData_Statics::NewProp_PrefabActor = { "PrefabActor", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabricatorAssetUserData, PrefabActor), Z_Construct_UClass_APrefabActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorAssetUserData_Statics::NewProp_PrefabActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorAssetUserData_Statics::NewProp_PrefabActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorAssetUserData_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorAssetUserData" },
		{ "ModuleRelativePath", "Public/PrefabricatorAssetUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPrefabricatorAssetUserData_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabricatorAssetUserData, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorAssetUserData_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorAssetUserData_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPrefabricatorAssetUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabricatorAssetUserData_Statics::NewProp_PrefabActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabricatorAssetUserData_Statics::NewProp_ItemId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrefabricatorAssetUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrefabricatorAssetUserData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPrefabricatorAssetUserData_Statics::ClassParams = {
		&UPrefabricatorAssetUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPrefabricatorAssetUserData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorAssetUserData_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorAssetUserData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorAssetUserData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPrefabricatorAssetUserData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPrefabricatorAssetUserData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPrefabricatorAssetUserData, 3000530910);
	template<> PREFABRICATORRUNTIME_API UClass* StaticClass<UPrefabricatorAssetUserData>()
	{
		return UPrefabricatorAssetUserData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPrefabricatorAssetUserData(Z_Construct_UClass_UPrefabricatorAssetUserData, &UPrefabricatorAssetUserData::StaticClass, TEXT("/Script/PrefabricatorRuntime"), TEXT("UPrefabricatorAssetUserData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrefabricatorAssetUserData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
