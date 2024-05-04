// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrefabricatorRuntime/Public/ReplicablePrefabActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicablePrefabActor() {}
// Cross Module References
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_AReplicablePrefabActor_NoRegister();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_AReplicablePrefabActor();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_APrefabActor();
	UPackage* Z_Construct_UPackage__Script_PrefabricatorRuntime();
// End Cross Module References
	void AReplicablePrefabActor::StaticRegisterNativesAReplicablePrefabActor()
	{
	}
	UClass* Z_Construct_UClass_AReplicablePrefabActor_NoRegister()
	{
		return AReplicablePrefabActor::StaticClass();
	}
	struct Z_Construct_UClass_AReplicablePrefabActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReplicablePrefabActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APrefabActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PrefabricatorRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicablePrefabActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ReplicablePrefabActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ReplicablePrefabActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReplicablePrefabActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReplicablePrefabActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AReplicablePrefabActor_Statics::ClassParams = {
		&AReplicablePrefabActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AReplicablePrefabActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicablePrefabActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReplicablePrefabActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AReplicablePrefabActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AReplicablePrefabActor, 2253277053);
	template<> PREFABRICATORRUNTIME_API UClass* StaticClass<AReplicablePrefabActor>()
	{
		return AReplicablePrefabActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReplicablePrefabActor(Z_Construct_UClass_AReplicablePrefabActor, &AReplicablePrefabActor::StaticClass, TEXT("/Script/PrefabricatorRuntime"), TEXT("AReplicablePrefabActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReplicablePrefabActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
