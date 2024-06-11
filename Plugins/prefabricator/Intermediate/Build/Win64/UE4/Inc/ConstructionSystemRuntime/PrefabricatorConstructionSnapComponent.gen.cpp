// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConstructionSystemRuntime/Public/PrefabricatorConstructionSnapComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrefabricatorConstructionSnapComponent() {}
// Cross Module References
	CONSTRUCTIONSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_NoRegister();
	CONSTRUCTIONSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorConstructionSnapComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_ConstructionSystemRuntime();
	CONSTRUCTIONSYSTEMRUNTIME_API UEnum* Z_Construct_UEnum_ConstructionSystemRuntime_EPrefabricatorConstructionSnapType();
	CONSTRUCTIONSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPCSnapConstraintFloor();
	CONSTRUCTIONSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPCSnapConstraintWall();
// End Cross Module References
	void UPrefabricatorConstructionSnapComponent::StaticRegisterNativesUPrefabricatorConstructionSnapComponent()
	{
	}
	UClass* Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_NoRegister()
	{
		return UPrefabricatorConstructionSnapComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SnapType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SnapType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorConstraint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloorConstraint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallConstraint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WallConstraint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlignToGroundSlope_MetaData[];
#endif
		static void NewProp_bAlignToGroundSlope_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlignToGroundSlope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMaxGroundSlopeConstraint_MetaData[];
#endif
		static void NewProp_bUseMaxGroundSlopeConstraint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMaxGroundSlopeConstraint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxGroundPlacementSlope_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxGroundPlacementSlope;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ConstructionSystemRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "PrefabricatorConstructionSnapComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PrefabricatorConstructionSnapComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_SnapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_SnapType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorConstructionSnapComponent" },
		{ "ModuleRelativePath", "Public/PrefabricatorConstructionSnapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_SnapType = { "SnapType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabricatorConstructionSnapComponent, SnapType), Z_Construct_UEnum_ConstructionSystemRuntime_EPrefabricatorConstructionSnapType, METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_SnapType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_SnapType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_FloorConstraint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorConstructionSnapComponent" },
		{ "ModuleRelativePath", "Public/PrefabricatorConstructionSnapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_FloorConstraint = { "FloorConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabricatorConstructionSnapComponent, FloorConstraint), Z_Construct_UScriptStruct_FPCSnapConstraintFloor, METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_FloorConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_FloorConstraint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_WallConstraint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorConstructionSnapComponent" },
		{ "ModuleRelativePath", "Public/PrefabricatorConstructionSnapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_WallConstraint = { "WallConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabricatorConstructionSnapComponent, WallConstraint), Z_Construct_UScriptStruct_FPCSnapConstraintWall, METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_WallConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_WallConstraint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_bAlignToGroundSlope_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorConstructionSnapComponent" },
		{ "ModuleRelativePath", "Public/PrefabricatorConstructionSnapComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_bAlignToGroundSlope_SetBit(void* Obj)
	{
		((UPrefabricatorConstructionSnapComponent*)Obj)->bAlignToGroundSlope = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_bAlignToGroundSlope = { "bAlignToGroundSlope", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPrefabricatorConstructionSnapComponent), &Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_bAlignToGroundSlope_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_bAlignToGroundSlope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_bAlignToGroundSlope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_bUseMaxGroundSlopeConstraint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorConstructionSnapComponent" },
		{ "ModuleRelativePath", "Public/PrefabricatorConstructionSnapComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_bUseMaxGroundSlopeConstraint_SetBit(void* Obj)
	{
		((UPrefabricatorConstructionSnapComponent*)Obj)->bUseMaxGroundSlopeConstraint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_bUseMaxGroundSlopeConstraint = { "bUseMaxGroundSlopeConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPrefabricatorConstructionSnapComponent), &Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_bUseMaxGroundSlopeConstraint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_bUseMaxGroundSlopeConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_bUseMaxGroundSlopeConstraint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_MaxGroundPlacementSlope_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabricatorConstructionSnapComponent" },
		{ "ModuleRelativePath", "Public/PrefabricatorConstructionSnapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_MaxGroundPlacementSlope = { "MaxGroundPlacementSlope", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabricatorConstructionSnapComponent, MaxGroundPlacementSlope), METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_MaxGroundPlacementSlope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_MaxGroundPlacementSlope_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_SnapType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_SnapType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_FloorConstraint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_WallConstraint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_bAlignToGroundSlope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_bUseMaxGroundSlopeConstraint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::NewProp_MaxGroundPlacementSlope,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrefabricatorConstructionSnapComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::ClassParams = {
		&UPrefabricatorConstructionSnapComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPrefabricatorConstructionSnapComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPrefabricatorConstructionSnapComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPrefabricatorConstructionSnapComponent, 2791762138);
	template<> CONSTRUCTIONSYSTEMRUNTIME_API UClass* StaticClass<UPrefabricatorConstructionSnapComponent>()
	{
		return UPrefabricatorConstructionSnapComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPrefabricatorConstructionSnapComponent(Z_Construct_UClass_UPrefabricatorConstructionSnapComponent, &UPrefabricatorConstructionSnapComponent::StaticClass, TEXT("/Script/ConstructionSystemRuntime"), TEXT("UPrefabricatorConstructionSnapComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrefabricatorConstructionSnapComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
