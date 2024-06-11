// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrefabricatorRuntime/Public/PrefabActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrefabActor() {}
// Cross Module References
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_APrefabActor_NoRegister();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_APrefabActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PrefabricatorRuntime();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_APrefabRandomizer_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAssetInterface_NoRegister();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(APrefabActor::execGetPrefabAsset)
	{
		P_GET_OBJECT(APrefabRandomizer,Z_Param_InRandomizer);
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AActor> ,Z_Param_Out_OutModClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrefabricatorAsset**)Z_Param__Result=P_THIS->GetPrefabAsset(Z_Param_InRandomizer,Z_Param_Out_OutModClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APrefabActor::execIsPrefabOutdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPrefabOutdated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APrefabActor::execLoadPrefab)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadPrefab();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APrefabActor::execRandomizeSeed)
	{
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_InRandom);
		P_GET_UBOOL(Z_Param_bRecursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RandomizeSeed(Z_Param_Out_InRandom,Z_Param_bRecursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APrefabActor::execSavePrefab)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SavePrefab();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APrefabActor::execSetPrefab)
	{
		P_GET_OBJECT(UPrefabricatorAssetInterface,Z_Param_NewPrefab);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPrefab(Z_Param_NewPrefab);
		P_NATIVE_END;
	}
	void APrefabActor::StaticRegisterNativesAPrefabActor()
	{
		UClass* Class = APrefabActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPrefabAsset", &APrefabActor::execGetPrefabAsset },
			{ "IsPrefabOutdated", &APrefabActor::execIsPrefabOutdated },
			{ "LoadPrefab", &APrefabActor::execLoadPrefab },
			{ "RandomizeSeed", &APrefabActor::execRandomizeSeed },
			{ "SavePrefab", &APrefabActor::execSavePrefab },
			{ "SetPrefab", &APrefabActor::execSetPrefab },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APrefabActor_GetPrefabAsset_Statics
	{
		struct PrefabActor_eventGetPrefabAsset_Parms
		{
			APrefabRandomizer* InRandomizer;
			TSubclassOf<AActor>  OutModClass;
			UPrefabricatorAsset* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRandomizer;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OutModClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APrefabActor_GetPrefabAsset_Statics::NewProp_InRandomizer = { "InRandomizer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabActor_eventGetPrefabAsset_Parms, InRandomizer), Z_Construct_UClass_APrefabRandomizer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APrefabActor_GetPrefabAsset_Statics::NewProp_OutModClass = { "OutModClass", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabActor_eventGetPrefabAsset_Parms, OutModClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APrefabActor_GetPrefabAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabActor_eventGetPrefabAsset_Parms, ReturnValue), Z_Construct_UClass_UPrefabricatorAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APrefabActor_GetPrefabAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APrefabActor_GetPrefabAsset_Statics::NewProp_InRandomizer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APrefabActor_GetPrefabAsset_Statics::NewProp_OutModClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APrefabActor_GetPrefabAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APrefabActor_GetPrefabAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PrefabActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APrefabActor_GetPrefabAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APrefabActor, nullptr, "GetPrefabAsset", nullptr, nullptr, sizeof(PrefabActor_eventGetPrefabAsset_Parms), Z_Construct_UFunction_APrefabActor_GetPrefabAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APrefabActor_GetPrefabAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APrefabActor_GetPrefabAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APrefabActor_GetPrefabAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APrefabActor_GetPrefabAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APrefabActor_GetPrefabAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APrefabActor_IsPrefabOutdated_Statics
	{
		struct PrefabActor_eventIsPrefabOutdated_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APrefabActor_IsPrefabOutdated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PrefabActor_eventIsPrefabOutdated_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APrefabActor_IsPrefabOutdated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PrefabActor_eventIsPrefabOutdated_Parms), &Z_Construct_UFunction_APrefabActor_IsPrefabOutdated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APrefabActor_IsPrefabOutdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APrefabActor_IsPrefabOutdated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APrefabActor_IsPrefabOutdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PrefabActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APrefabActor_IsPrefabOutdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APrefabActor, nullptr, "IsPrefabOutdated", nullptr, nullptr, sizeof(PrefabActor_eventIsPrefabOutdated_Parms), Z_Construct_UFunction_APrefabActor_IsPrefabOutdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APrefabActor_IsPrefabOutdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APrefabActor_IsPrefabOutdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APrefabActor_IsPrefabOutdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APrefabActor_IsPrefabOutdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APrefabActor_IsPrefabOutdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APrefabActor_LoadPrefab_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APrefabActor_LoadPrefab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PrefabActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APrefabActor_LoadPrefab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APrefabActor, nullptr, "LoadPrefab", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APrefabActor_LoadPrefab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APrefabActor_LoadPrefab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APrefabActor_LoadPrefab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APrefabActor_LoadPrefab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APrefabActor_RandomizeSeed_Statics
	{
		struct PrefabActor_eventRandomizeSeed_Parms
		{
			FRandomStream InRandom;
			bool bRecursive;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRandom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRandom;
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APrefabActor_RandomizeSeed_Statics::NewProp_InRandom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APrefabActor_RandomizeSeed_Statics::NewProp_InRandom = { "InRandom", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabActor_eventRandomizeSeed_Parms, InRandom), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UFunction_APrefabActor_RandomizeSeed_Statics::NewProp_InRandom_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APrefabActor_RandomizeSeed_Statics::NewProp_InRandom_MetaData)) };
	void Z_Construct_UFunction_APrefabActor_RandomizeSeed_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((PrefabActor_eventRandomizeSeed_Parms*)Obj)->bRecursive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APrefabActor_RandomizeSeed_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PrefabActor_eventRandomizeSeed_Parms), &Z_Construct_UFunction_APrefabActor_RandomizeSeed_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APrefabActor_RandomizeSeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APrefabActor_RandomizeSeed_Statics::NewProp_InRandom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APrefabActor_RandomizeSeed_Statics::NewProp_bRecursive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APrefabActor_RandomizeSeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PrefabActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APrefabActor_RandomizeSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APrefabActor, nullptr, "RandomizeSeed", nullptr, nullptr, sizeof(PrefabActor_eventRandomizeSeed_Parms), Z_Construct_UFunction_APrefabActor_RandomizeSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APrefabActor_RandomizeSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APrefabActor_RandomizeSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APrefabActor_RandomizeSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APrefabActor_RandomizeSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APrefabActor_RandomizeSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APrefabActor_SavePrefab_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APrefabActor_SavePrefab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PrefabActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APrefabActor_SavePrefab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APrefabActor, nullptr, "SavePrefab", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APrefabActor_SavePrefab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APrefabActor_SavePrefab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APrefabActor_SavePrefab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APrefabActor_SavePrefab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APrefabActor_SetPrefab_Statics
	{
		struct PrefabActor_eventSetPrefab_Parms
		{
			UPrefabricatorAssetInterface* NewPrefab;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPrefab;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APrefabActor_SetPrefab_Statics::NewProp_NewPrefab = { "NewPrefab", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabActor_eventSetPrefab_Parms, NewPrefab), Z_Construct_UClass_UPrefabricatorAssetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APrefabActor_SetPrefab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APrefabActor_SetPrefab_Statics::NewProp_NewPrefab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APrefabActor_SetPrefab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PrefabActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APrefabActor_SetPrefab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APrefabActor, nullptr, "SetPrefab", nullptr, nullptr, sizeof(PrefabActor_eventSetPrefab_Parms), Z_Construct_UFunction_APrefabActor_SetPrefab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APrefabActor_SetPrefab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APrefabActor_SetPrefab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APrefabActor_SetPrefab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APrefabActor_SetPrefab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APrefabActor_SetPrefab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APrefabActor_NoRegister()
	{
		return APrefabActor::StaticClass();
	}
	struct Z_Construct_UClass_APrefabActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrefabComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrefabComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrefabTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrefabTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrefabricatorAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PrefabricatorAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdateID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastUpdateID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrefabNullModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PrefabNullModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrefabActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PrefabricatorRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APrefabActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APrefabActor_GetPrefabAsset, "GetPrefabAsset" }, // 1632472003
		{ &Z_Construct_UFunction_APrefabActor_IsPrefabOutdated, "IsPrefabOutdated" }, // 1221463212
		{ &Z_Construct_UFunction_APrefabActor_LoadPrefab, "LoadPrefab" }, // 3652693140
		{ &Z_Construct_UFunction_APrefabActor_RandomizeSeed, "RandomizeSeed" }, // 3485767669
		{ &Z_Construct_UFunction_APrefabActor_SavePrefab, "SavePrefab" }, // 2876674710
		{ &Z_Construct_UFunction_APrefabActor_SetPrefab, "SetPrefab" }, // 1093825264
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PrefabActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PrefabActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabActor_Statics::NewProp_PrefabComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PrefabActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APrefabActor_Statics::NewProp_PrefabComponent = { "PrefabComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrefabActor, PrefabComponent), Z_Construct_UClass_UPrefabComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APrefabActor_Statics::NewProp_PrefabComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabActor_Statics::NewProp_PrefabComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabActor_Statics::NewProp_PrefabTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabActor" },
		{ "ModuleRelativePath", "Public/PrefabActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APrefabActor_Statics::NewProp_PrefabTag = { "PrefabTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrefabActor, PrefabTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_APrefabActor_Statics::NewProp_PrefabTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabActor_Statics::NewProp_PrefabTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabActor_Statics::NewProp_PrefabricatorAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabActor" },
		{ "ModuleRelativePath", "Public/PrefabActor.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_APrefabActor_Statics::NewProp_PrefabricatorAsset = { "PrefabricatorAsset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrefabActor, PrefabricatorAsset), Z_Construct_UClass_UPrefabricatorAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APrefabActor_Statics::NewProp_PrefabricatorAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabActor_Statics::NewProp_PrefabricatorAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabActor_Statics::NewProp_LastUpdateID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabActor" },
		{ "ModuleRelativePath", "Public/PrefabActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APrefabActor_Statics::NewProp_LastUpdateID = { "LastUpdateID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrefabActor, LastUpdateID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_APrefabActor_Statics::NewProp_LastUpdateID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabActor_Statics::NewProp_LastUpdateID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabActor_Statics::NewProp_Seed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabActor" },
		{ "ModuleRelativePath", "Public/PrefabActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APrefabActor_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrefabActor, Seed), METADATA_PARAMS(Z_Construct_UClass_APrefabActor_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabActor_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrefabActor_Statics::NewProp_PrefabNullModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabActor" },
		{ "ModuleRelativePath", "Public/PrefabActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APrefabActor_Statics::NewProp_PrefabNullModifier = { "PrefabNullModifier", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrefabActor, PrefabNullModifier), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APrefabActor_Statics::NewProp_PrefabNullModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabActor_Statics::NewProp_PrefabNullModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APrefabActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabActor_Statics::NewProp_PrefabComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabActor_Statics::NewProp_PrefabTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabActor_Statics::NewProp_PrefabricatorAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabActor_Statics::NewProp_LastUpdateID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabActor_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrefabActor_Statics::NewProp_PrefabNullModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrefabActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrefabActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APrefabActor_Statics::ClassParams = {
		&APrefabActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APrefabActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APrefabActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APrefabActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrefabActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrefabActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APrefabActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APrefabActor, 443674341);
	template<> PREFABRICATORRUNTIME_API UClass* StaticClass<APrefabActor>()
	{
		return APrefabActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrefabActor(Z_Construct_UClass_APrefabActor, &APrefabActor::StaticClass, TEXT("/Script/PrefabricatorRuntime"), TEXT("APrefabActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrefabActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
