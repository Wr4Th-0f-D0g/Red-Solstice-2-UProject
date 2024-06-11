// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrefabricatorRuntime/Public/PrefabRandomizer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrefabRandomizer() {}
// Cross Module References
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_APrefabRandomizer_NoRegister();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_APrefabRandomizer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PrefabricatorRuntime();
	PREFABRICATORRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem();
	PREFABRICATORRUNTIME_API UFunction* Z_Construct_UDelegateFunction_PrefabricatorRuntime_PrefabRandomizerCompleteBindableEvent__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APrefabRandomizer::execRandomize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Randomize(Z_Param_InSeed);
		P_NATIVE_END;
	}
	void APrefabRandomizer::StaticRegisterNativesAPrefabRandomizer()
	{
		UClass* Class = APrefabRandomizer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Randomize", &APrefabRandomizer::execRandomize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APrefabRandomizer_Randomize_Statics
	{
		struct PrefabRandomizer_eventRandomize_Parms
		{
			int32 InSeed;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InSeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APrefabRandomizer_Randomize_Statics::NewProp_InSeed = { "InSeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabRandomizer_eventRandomize_Parms, InSeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APrefabRandomizer_Randomize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APrefabRandomizer_Randomize_Statics::NewProp_InSeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APrefabRandomizer_Randomize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PrefabRandomizer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APrefabRandomizer_Randomize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APrefabRandomizer, nullptr, "Randomize", nullptr, nullptr, sizeof(PrefabRandomizer_eventRandomize_Parms), Z_Construct_UFunction_APrefabRandomizer_Randomize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APrefabRandomizer_Randomize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APrefabRandomizer_Randomize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APrefabRandomizer_Randomize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APrefabRandomizer_Randomize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APrefabRandomizer_Randomize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APrefabRandomizer_NoRegister()
	{
		return APrefabRandomizer::StaticClass();
	}
	struct Z_Construct_UClass_APrefabRandomizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeedOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SeedOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBuildTimePerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBuildTimePerFrame;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlreadySpawnedPrefabs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlreadySpawnedPrefabs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AlreadySpawnedPrefabs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRandomizationComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRandomizationComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFastSyncBuild_MetaData[];
#endif
		static void NewProp_bFastSyncBuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFastSyncBuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshActor;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SpawnedPrefabAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedPrefabAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnedPrefabAssets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrefabRandomizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PrefabricatorRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APrefabRandomizer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APrefabRandomizer_Randomize, "Randomize" }, // 4221471604
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabRandomizer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PrefabRandomizer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PrefabRandomizer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_SeedOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabRandomizer" },
		{ "ModuleRelativePath", "Public/PrefabRandomizer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_SeedOffset = { "SeedOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrefabRandomizer, SeedOffset), METADATA_PARAMS(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_SeedOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_SeedOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_MaxBuildTimePerFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabRandomizer" },
		{ "ModuleRelativePath", "Public/PrefabRandomizer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_MaxBuildTimePerFrame = { "MaxBuildTimePerFrame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrefabRandomizer, MaxBuildTimePerFrame), METADATA_PARAMS(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_MaxBuildTimePerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_MaxBuildTimePerFrame_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_AlreadySpawnedPrefabs_Inner = { "AlreadySpawnedPrefabs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPrefabricatorAssetCollectionItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_AlreadySpawnedPrefabs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabRandomizer" },
		{ "ModuleRelativePath", "Public/PrefabRandomizer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_AlreadySpawnedPrefabs = { "AlreadySpawnedPrefabs", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrefabRandomizer, AlreadySpawnedPrefabs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_AlreadySpawnedPrefabs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_AlreadySpawnedPrefabs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_OnRandomizationComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabRandomizer" },
		{ "ModuleRelativePath", "Public/PrefabRandomizer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_OnRandomizationComplete = { "OnRandomizationComplete", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrefabRandomizer, OnRandomizationComplete), Z_Construct_UDelegateFunction_PrefabricatorRuntime_PrefabRandomizerCompleteBindableEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_OnRandomizationComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_OnRandomizationComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_bFastSyncBuild_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabRandomizer" },
		{ "ModuleRelativePath", "Public/PrefabRandomizer.h" },
	};
#endif
	void Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_bFastSyncBuild_SetBit(void* Obj)
	{
		((APrefabRandomizer*)Obj)->bFastSyncBuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_bFastSyncBuild = { "bFastSyncBuild", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APrefabRandomizer), &Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_bFastSyncBuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_bFastSyncBuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_bFastSyncBuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_StaticMeshActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabRandomizer" },
		{ "ModuleRelativePath", "Public/PrefabRandomizer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_StaticMeshActor = { "StaticMeshActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrefabRandomizer, StaticMeshActor), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_StaticMeshActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_StaticMeshActor_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_SpawnedPrefabAssets_Inner = { "SpawnedPrefabAssets", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrefabricatorAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_SpawnedPrefabAssets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabRandomizer" },
		{ "ModuleRelativePath", "Public/PrefabRandomizer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_SpawnedPrefabAssets = { "SpawnedPrefabAssets", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrefabRandomizer, SpawnedPrefabAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_SpawnedPrefabAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_SpawnedPrefabAssets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APrefabRandomizer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_SeedOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_MaxBuildTimePerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_AlreadySpawnedPrefabs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_AlreadySpawnedPrefabs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_OnRandomizationComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_bFastSyncBuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_StaticMeshActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_SpawnedPrefabAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabRandomizer_Statics::NewProp_SpawnedPrefabAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrefabRandomizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrefabRandomizer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APrefabRandomizer_Statics::ClassParams = {
		&APrefabRandomizer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APrefabRandomizer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APrefabRandomizer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APrefabRandomizer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabRandomizer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrefabRandomizer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APrefabRandomizer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APrefabRandomizer, 2481098009);
	template<> PREFABRICATORRUNTIME_API UClass* StaticClass<APrefabRandomizer>()
	{
		return APrefabRandomizer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrefabRandomizer(Z_Construct_UClass_APrefabRandomizer, &APrefabRandomizer::StaticClass, TEXT("/Script/PrefabricatorRuntime"), TEXT("APrefabRandomizer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrefabRandomizer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
