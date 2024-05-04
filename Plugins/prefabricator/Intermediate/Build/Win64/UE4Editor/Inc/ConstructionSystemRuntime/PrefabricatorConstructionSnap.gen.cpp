// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConstructionSystemRuntime/Public/PrefabricatorConstructionSnap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrefabricatorConstructionSnap() {}
// Cross Module References
	CONSTRUCTIONSYSTEMRUNTIME_API UClass* Z_Construct_UClass_APrefabricatorConstructionSnap_NoRegister();
	CONSTRUCTIONSYSTEMRUNTIME_API UClass* Z_Construct_UClass_APrefabricatorConstructionSnap();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ConstructionSystemRuntime();
	CONSTRUCTIONSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_NoRegister();
// End Cross Module References
	void APrefabricatorConstructionSnap::StaticRegisterNativesAPrefabricatorConstructionSnap()
	{
	}
	UClass* Z_Construct_UClass_APrefabricatorConstructionSnap_NoRegister()
	{
		return APrefabricatorConstructionSnap::StaticClass();
	}
	struct Z_Construct_UClass_APrefabricatorConstructionSnap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstructionSnapComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstructionSnapComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrefabricatorConstructionSnap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ConstructionSystemRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabricatorConstructionSnap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PrefabricatorConstructionSnap.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PrefabricatorConstructionSnap.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabricatorConstructionSnap_Statics::NewProp_ConstructionSnapComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorConstructionSnap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PrefabricatorConstructionSnap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APrefabricatorConstructionSnap_Statics::NewProp_ConstructionSnapComponent = { "ConstructionSnapComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrefabricatorConstructionSnap, ConstructionSnapComponent), Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APrefabricatorConstructionSnap_Statics::NewProp_ConstructionSnapComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabricatorConstructionSnap_Statics::NewProp_ConstructionSnapComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APrefabricatorConstructionSnap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabricatorConstructionSnap_Statics::NewProp_ConstructionSnapComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrefabricatorConstructionSnap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrefabricatorConstructionSnap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APrefabricatorConstructionSnap_Statics::ClassParams = {
		&APrefabricatorConstructionSnap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APrefabricatorConstructionSnap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APrefabricatorConstructionSnap_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APrefabricatorConstructionSnap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabricatorConstructionSnap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrefabricatorConstructionSnap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APrefabricatorConstructionSnap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APrefabricatorConstructionSnap, 1982822554);
	template<> CONSTRUCTIONSYSTEMRUNTIME_API UClass* StaticClass<APrefabricatorConstructionSnap>()
	{
		return APrefabricatorConstructionSnap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrefabricatorConstructionSnap(Z_Construct_UClass_APrefabricatorConstructionSnap, &APrefabricatorConstructionSnap::StaticClass, TEXT("/Script/ConstructionSystemRuntime"), TEXT("APrefabricatorConstructionSnap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrefabricatorConstructionSnap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
