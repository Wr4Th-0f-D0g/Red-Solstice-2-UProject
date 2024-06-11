// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolsticeMinimap/Public/ObserverPawnBlockingVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObserverPawnBlockingVolume() {}
// Cross Module References
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_AObserverPawnBlockingVolume_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_AObserverPawnBlockingVolume();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SolsticeMinimap();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AObserverPawnBlockingVolume::StaticRegisterNativesAObserverPawnBlockingVolume()
	{
	}
	UClass* Z_Construct_UClass_AObserverPawnBlockingVolume_NoRegister()
	{
		return AObserverPawnBlockingVolume::StaticClass();
	}
	struct Z_Construct_UClass_AObserverPawnBlockingVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundingBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoundsX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoundsY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoundsZ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SolsticeMinimap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ObserverPawnBlockingVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ObserverPawnBlockingVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::NewProp_BoundingBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObserverPawnBlockingVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ObserverPawnBlockingVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObserverPawnBlockingVolume, BoundingBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::NewProp_BoundingBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::NewProp_BoundingBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::NewProp_BoundsX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObserverPawnBlockingVolume" },
		{ "ModuleRelativePath", "Public/ObserverPawnBlockingVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::NewProp_BoundsX = { "BoundsX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObserverPawnBlockingVolume, BoundsX), METADATA_PARAMS(Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::NewProp_BoundsX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::NewProp_BoundsX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::NewProp_BoundsY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObserverPawnBlockingVolume" },
		{ "ModuleRelativePath", "Public/ObserverPawnBlockingVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::NewProp_BoundsY = { "BoundsY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObserverPawnBlockingVolume, BoundsY), METADATA_PARAMS(Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::NewProp_BoundsY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::NewProp_BoundsY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::NewProp_BoundsZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObserverPawnBlockingVolume" },
		{ "ModuleRelativePath", "Public/ObserverPawnBlockingVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::NewProp_BoundsZ = { "BoundsZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObserverPawnBlockingVolume, BoundsZ), METADATA_PARAMS(Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::NewProp_BoundsZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::NewProp_BoundsZ_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::NewProp_BoundingBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::NewProp_BoundsX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::NewProp_BoundsY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::NewProp_BoundsZ,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObserverPawnBlockingVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::ClassParams = {
		&AObserverPawnBlockingVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObserverPawnBlockingVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObserverPawnBlockingVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObserverPawnBlockingVolume, 2738087615);
	template<> SOLSTICEMINIMAP_API UClass* StaticClass<AObserverPawnBlockingVolume>()
	{
		return AObserverPawnBlockingVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObserverPawnBlockingVolume(Z_Construct_UClass_AObserverPawnBlockingVolume, &AObserverPawnBlockingVolume::StaticClass, TEXT("/Script/SolsticeMinimap"), TEXT("AObserverPawnBlockingVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObserverPawnBlockingVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
