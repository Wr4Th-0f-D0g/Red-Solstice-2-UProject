// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrefabricatorRuntime/Public/PrefabricatorAssetInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrefabricatorAssetInterface() {}
// Cross Module References
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAssetInterface_NoRegister();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAssetInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PrefabricatorRuntime();
// End Cross Module References
	void UPrefabricatorAssetInterface::StaticRegisterNativesUPrefabricatorAssetInterface()
	{
	}
	UClass* Z_Construct_UClass_UPrefabricatorAssetInterface_NoRegister()
	{
		return UPrefabricatorAssetInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPrefabricatorAssetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicates_MetaData[];
#endif
		static void NewProp_bReplicates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicates;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrefabricatorAssetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PrefabricatorRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorAssetInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PrefabricatorAssetInterface.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PrefabricatorAssetInterface.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorAssetInterface_Statics::NewProp_bReplicates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorAssetInterface" },
		{ "ModuleRelativePath", "Public/PrefabricatorAssetInterface.h" },
	};
#endif
	void Z_Construct_UClass_UPrefabricatorAssetInterface_Statics::NewProp_bReplicates_SetBit(void* Obj)
	{
		((UPrefabricatorAssetInterface*)Obj)->bReplicates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPrefabricatorAssetInterface_Statics::NewProp_bReplicates = { "bReplicates", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPrefabricatorAssetInterface), &Z_Construct_UClass_UPrefabricatorAssetInterface_Statics::NewProp_bReplicates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorAssetInterface_Statics::NewProp_bReplicates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorAssetInterface_Statics::NewProp_bReplicates_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPrefabricatorAssetInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabricatorAssetInterface_Statics::NewProp_bReplicates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrefabricatorAssetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrefabricatorAssetInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPrefabricatorAssetInterface_Statics::ClassParams = {
		&UPrefabricatorAssetInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPrefabricatorAssetInterface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorAssetInterface_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorAssetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorAssetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPrefabricatorAssetInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPrefabricatorAssetInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPrefabricatorAssetInterface, 4096013589);
	template<> PREFABRICATORRUNTIME_API UClass* StaticClass<UPrefabricatorAssetInterface>()
	{
		return UPrefabricatorAssetInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPrefabricatorAssetInterface(Z_Construct_UClass_UPrefabricatorAssetInterface, &UPrefabricatorAssetInterface::StaticClass, TEXT("/Script/PrefabricatorRuntime"), TEXT("UPrefabricatorAssetInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrefabricatorAssetInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
