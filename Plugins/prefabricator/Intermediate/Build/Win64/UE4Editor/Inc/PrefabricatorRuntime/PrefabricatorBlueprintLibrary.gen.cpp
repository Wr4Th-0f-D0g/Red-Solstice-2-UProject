// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrefabricatorRuntime/Public/PrefabricatorBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrefabricatorBlueprintLibrary() {}
// Cross Module References
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorBlueprintLibrary_NoRegister();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PrefabricatorRuntime();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_APrefabActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAssetInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UPrefabricatorBlueprintLibrary::execGetAllAttachedActors)
	{
		P_GET_OBJECT(AActor,Z_Param_Prefab);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_AttachedActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPrefabricatorBlueprintLibrary::GetAllAttachedActors(Z_Param_Prefab,Z_Param_Out_AttachedActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPrefabricatorBlueprintLibrary::execRandomizePrefab)
	{
		P_GET_OBJECT(APrefabActor,Z_Param_PrefabActor);
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_InRandom);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPrefabricatorBlueprintLibrary::RandomizePrefab(Z_Param_PrefabActor,Z_Param_Out_InRandom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPrefabricatorBlueprintLibrary::execSpawnPrefab)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UPrefabricatorAssetInterface,Z_Param_Prefab);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APrefabActor**)Z_Param__Result=UPrefabricatorBlueprintLibrary::SpawnPrefab(Z_Param_WorldContextObject,Z_Param_Prefab,Z_Param_Out_Transform,Z_Param_Seed);
		P_NATIVE_END;
	}
	void UPrefabricatorBlueprintLibrary::StaticRegisterNativesUPrefabricatorBlueprintLibrary()
	{
		UClass* Class = UPrefabricatorBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllAttachedActors", &UPrefabricatorBlueprintLibrary::execGetAllAttachedActors },
			{ "RandomizePrefab", &UPrefabricatorBlueprintLibrary::execRandomizePrefab },
			{ "SpawnPrefab", &UPrefabricatorBlueprintLibrary::execSpawnPrefab },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Statics
	{
		struct PrefabricatorBlueprintLibrary_eventGetAllAttachedActors_Parms
		{
			AActor* Prefab;
			TArray<AActor*> AttachedActors;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Prefab;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachedActors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttachedActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Statics::NewProp_Prefab = { "Prefab", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabricatorBlueprintLibrary_eventGetAllAttachedActors_Parms, Prefab), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Statics::NewProp_AttachedActors_Inner = { "AttachedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Statics::NewProp_AttachedActors = { "AttachedActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabricatorBlueprintLibrary_eventGetAllAttachedActors_Parms, AttachedActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Statics::NewProp_Prefab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Statics::NewProp_AttachedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Statics::NewProp_AttachedActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PrefabricatorBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPrefabricatorBlueprintLibrary, nullptr, "GetAllAttachedActors", nullptr, nullptr, sizeof(PrefabricatorBlueprintLibrary_eventGetAllAttachedActors_Parms), Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_GetAllAttachedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_RandomizePrefab_Statics
	{
		struct PrefabricatorBlueprintLibrary_eventRandomizePrefab_Parms
		{
			APrefabActor* PrefabActor;
			FRandomStream InRandom;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrefabActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRandom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRandom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_RandomizePrefab_Statics::NewProp_PrefabActor = { "PrefabActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabricatorBlueprintLibrary_eventRandomizePrefab_Parms, PrefabActor), Z_Construct_UClass_APrefabActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_RandomizePrefab_Statics::NewProp_InRandom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_RandomizePrefab_Statics::NewProp_InRandom = { "InRandom", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabricatorBlueprintLibrary_eventRandomizePrefab_Parms, InRandom), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_RandomizePrefab_Statics::NewProp_InRandom_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_RandomizePrefab_Statics::NewProp_InRandom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_RandomizePrefab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_RandomizePrefab_Statics::NewProp_PrefabActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_RandomizePrefab_Statics::NewProp_InRandom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_RandomizePrefab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PrefabricatorBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_RandomizePrefab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPrefabricatorBlueprintLibrary, nullptr, "RandomizePrefab", nullptr, nullptr, sizeof(PrefabricatorBlueprintLibrary_eventRandomizePrefab_Parms), Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_RandomizePrefab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_RandomizePrefab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_RandomizePrefab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_RandomizePrefab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_RandomizePrefab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_RandomizePrefab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics
	{
		struct PrefabricatorBlueprintLibrary_eventSpawnPrefab_Parms
		{
			const UObject* WorldContextObject;
			UPrefabricatorAssetInterface* Prefab;
			FTransform Transform;
			int32 Seed;
			APrefabActor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Prefab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabricatorBlueprintLibrary_eventSpawnPrefab_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::NewProp_Prefab = { "Prefab", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabricatorBlueprintLibrary_eventSpawnPrefab_Parms, Prefab), Z_Construct_UClass_UPrefabricatorAssetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabricatorBlueprintLibrary_eventSpawnPrefab_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabricatorBlueprintLibrary_eventSpawnPrefab_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabricatorBlueprintLibrary_eventSpawnPrefab_Parms, ReturnValue), Z_Construct_UClass_APrefabActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::NewProp_Prefab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PrefabricatorBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPrefabricatorBlueprintLibrary, nullptr, "SpawnPrefab", nullptr, nullptr, sizeof(PrefabricatorBlueprintLibrary_eventSpawnPrefab_Parms), Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPrefabricatorBlueprintLibrary_NoRegister()
	{
		return UPrefabricatorBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPrefabricatorBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrefabricatorBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PrefabricatorRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPrefabricatorBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_GetAllAttachedActors, "GetAllAttachedActors" }, // 3704062472
		{ &Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_RandomizePrefab, "RandomizePrefab" }, // 1173063214
		{ &Z_Construct_UFunction_UPrefabricatorBlueprintLibrary_SpawnPrefab, "SpawnPrefab" }, // 3206592667
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabricatorBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PrefabricatorBlueprintLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PrefabricatorBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrefabricatorBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrefabricatorBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPrefabricatorBlueprintLibrary_Statics::ClassParams = {
		&UPrefabricatorBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPrefabricatorBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabricatorBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPrefabricatorBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPrefabricatorBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPrefabricatorBlueprintLibrary, 1865968401);
	template<> PREFABRICATORRUNTIME_API UClass* StaticClass<UPrefabricatorBlueprintLibrary>()
	{
		return UPrefabricatorBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPrefabricatorBlueprintLibrary(Z_Construct_UClass_UPrefabricatorBlueprintLibrary, &UPrefabricatorBlueprintLibrary::StaticClass, TEXT("/Script/PrefabricatorRuntime"), TEXT("UPrefabricatorBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrefabricatorBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
