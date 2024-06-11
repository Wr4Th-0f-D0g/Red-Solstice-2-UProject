// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConstructionSystemRuntime/Public/ConstructionSystemCursor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructionSystemCursor() {}
// Cross Module References
	CONSTRUCTIONSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UConstructionSystemCursor_NoRegister();
	CONSTRUCTIONSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UConstructionSystemCursor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ConstructionSystemRuntime();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_APrefabActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	CONSTRUCTIONSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_NoRegister();
// End Cross Module References
	void UConstructionSystemCursor::StaticRegisterNativesUConstructionSystemCursor()
	{
	}
	UClass* Z_Construct_UClass_UConstructionSystemCursor_NoRegister()
	{
		return UConstructionSystemCursor::StaticClass();
	}
	struct Z_Construct_UClass_UConstructionSystemCursor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorGhostActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CursorGhostActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CursorSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CursorMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorInvalidMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CursorInvalidMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapComponents_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnapComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SnapComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveSnapComponentIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveSnapComponentIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConstructionSystemCursor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ConstructionSystemRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionSystemCursor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ConstructionSystemCursor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConstructionSystemCursor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_CursorGhostActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemCursor" },
		{ "ModuleRelativePath", "Public/ConstructionSystemCursor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_CursorGhostActor = { "CursorGhostActor", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConstructionSystemCursor, CursorGhostActor), Z_Construct_UClass_APrefabActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_CursorGhostActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_CursorGhostActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_CursorSeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemCursor" },
		{ "ModuleRelativePath", "Public/ConstructionSystemCursor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_CursorSeed = { "CursorSeed", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConstructionSystemCursor, CursorSeed), METADATA_PARAMS(Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_CursorSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_CursorSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_CursorMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemCursor" },
		{ "ModuleRelativePath", "Public/ConstructionSystemCursor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_CursorMaterial = { "CursorMaterial", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConstructionSystemCursor, CursorMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_CursorMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_CursorMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_CursorInvalidMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemCursor" },
		{ "ModuleRelativePath", "Public/ConstructionSystemCursor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_CursorInvalidMaterial = { "CursorInvalidMaterial", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConstructionSystemCursor, CursorInvalidMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_CursorInvalidMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_CursorInvalidMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_SnapComponents_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemCursor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConstructionSystemCursor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_SnapComponents_Inner = { "SnapComponents", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_SnapComponents_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_SnapComponents_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_SnapComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemCursor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConstructionSystemCursor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_SnapComponents = { "SnapComponents", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConstructionSystemCursor, SnapComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_SnapComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_SnapComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_ActiveSnapComponentIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemCursor" },
		{ "ModuleRelativePath", "Public/ConstructionSystemCursor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_ActiveSnapComponentIndex = { "ActiveSnapComponentIndex", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConstructionSystemCursor, ActiveSnapComponentIndex), METADATA_PARAMS(Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_ActiveSnapComponentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_ActiveSnapComponentIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConstructionSystemCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_CursorGhostActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_CursorSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_CursorMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_CursorInvalidMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_SnapComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_SnapComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionSystemCursor_Statics::NewProp_ActiveSnapComponentIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConstructionSystemCursor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstructionSystemCursor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConstructionSystemCursor_Statics::ClassParams = {
		&UConstructionSystemCursor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConstructionSystemCursor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemCursor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConstructionSystemCursor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemCursor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConstructionSystemCursor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConstructionSystemCursor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConstructionSystemCursor, 1478143164);
	template<> CONSTRUCTIONSYSTEMRUNTIME_API UClass* StaticClass<UConstructionSystemCursor>()
	{
		return UConstructionSystemCursor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConstructionSystemCursor(Z_Construct_UClass_UConstructionSystemCursor, &UConstructionSystemCursor::StaticClass, TEXT("/Script/ConstructionSystemRuntime"), TEXT("UConstructionSystemCursor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConstructionSystemCursor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
