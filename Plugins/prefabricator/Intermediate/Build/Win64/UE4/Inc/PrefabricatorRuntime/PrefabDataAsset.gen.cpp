// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrefabricatorRuntime/Public/PrefabDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrefabDataAsset() {}
// Cross Module References
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabDataAsset_NoRegister();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_PrefabricatorRuntime();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAsset_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	PREFABRICATORRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPrefabInfo();
// End Cross Module References
	DEFINE_FUNCTION(UPrefabDataAsset::execAddPrefabAsset)
	{
		P_GET_OBJECT(UPrefabricatorAsset,Z_Param_Asset);
		P_GET_STRUCT(FGameplayTag,Z_Param_Shape);
		P_GET_STRUCT(FGameplayTag,Z_Param_AssetTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPrefabAsset(Z_Param_Asset,Z_Param_Shape,Z_Param_AssetTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPrefabDataAsset::execClearAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPrefabDataAsset::execGetValidPrefabs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPrefabInfo>*)Z_Param__Result=P_THIS->GetValidPrefabs();
		P_NATIVE_END;
	}
	void UPrefabDataAsset::StaticRegisterNativesUPrefabDataAsset()
	{
		UClass* Class = UPrefabDataAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPrefabAsset", &UPrefabDataAsset::execAddPrefabAsset },
			{ "ClearAll", &UPrefabDataAsset::execClearAll },
			{ "GetValidPrefabs", &UPrefabDataAsset::execGetValidPrefabs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPrefabDataAsset_AddPrefabAsset_Statics
	{
		struct PrefabDataAsset_eventAddPrefabAsset_Parms
		{
			UPrefabricatorAsset* Asset;
			FGameplayTag Shape;
			FGameplayTag AssetTag;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Shape;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPrefabDataAsset_AddPrefabAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabDataAsset_eventAddPrefabAsset_Parms, Asset), Z_Construct_UClass_UPrefabricatorAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPrefabDataAsset_AddPrefabAsset_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabDataAsset_eventAddPrefabAsset_Parms, Shape), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPrefabDataAsset_AddPrefabAsset_Statics::NewProp_AssetTag = { "AssetTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabDataAsset_eventAddPrefabAsset_Parms, AssetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPrefabDataAsset_AddPrefabAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrefabDataAsset_AddPrefabAsset_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrefabDataAsset_AddPrefabAsset_Statics::NewProp_Shape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrefabDataAsset_AddPrefabAsset_Statics::NewProp_AssetTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPrefabDataAsset_AddPrefabAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PrefabDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPrefabDataAsset_AddPrefabAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPrefabDataAsset, nullptr, "AddPrefabAsset", nullptr, nullptr, sizeof(PrefabDataAsset_eventAddPrefabAsset_Parms), Z_Construct_UFunction_UPrefabDataAsset_AddPrefabAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrefabDataAsset_AddPrefabAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPrefabDataAsset_AddPrefabAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrefabDataAsset_AddPrefabAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPrefabDataAsset_AddPrefabAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPrefabDataAsset_AddPrefabAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPrefabDataAsset_ClearAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPrefabDataAsset_ClearAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PrefabDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPrefabDataAsset_ClearAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPrefabDataAsset, nullptr, "ClearAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPrefabDataAsset_ClearAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrefabDataAsset_ClearAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPrefabDataAsset_ClearAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPrefabDataAsset_ClearAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPrefabDataAsset_GetValidPrefabs_Statics
	{
		struct PrefabDataAsset_eventGetValidPrefabs_Parms
		{
			TArray<FPrefabInfo> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPrefabDataAsset_GetValidPrefabs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPrefabInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPrefabDataAsset_GetValidPrefabs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabDataAsset_eventGetValidPrefabs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPrefabDataAsset_GetValidPrefabs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrefabDataAsset_GetValidPrefabs_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrefabDataAsset_GetValidPrefabs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPrefabDataAsset_GetValidPrefabs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PrefabDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPrefabDataAsset_GetValidPrefabs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPrefabDataAsset, nullptr, "GetValidPrefabs", nullptr, nullptr, sizeof(PrefabDataAsset_eventGetValidPrefabs_Parms), Z_Construct_UFunction_UPrefabDataAsset_GetValidPrefabs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrefabDataAsset_GetValidPrefabs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPrefabDataAsset_GetValidPrefabs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrefabDataAsset_GetValidPrefabs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPrefabDataAsset_GetValidPrefabs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPrefabDataAsset_GetValidPrefabs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPrefabDataAsset_NoRegister()
	{
		return UPrefabDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPrefabDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Prefabs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefabs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Prefabs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrefabDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_PrefabricatorRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPrefabDataAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPrefabDataAsset_AddPrefabAsset, "AddPrefabAsset" }, // 3001667436
		{ &Z_Construct_UFunction_UPrefabDataAsset_ClearAll, "ClearAll" }, // 3502606177
		{ &Z_Construct_UFunction_UPrefabDataAsset_GetValidPrefabs, "GetValidPrefabs" }, // 2245884652
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PrefabDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PrefabDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPrefabDataAsset_Statics::NewProp_Prefabs_Inner = { "Prefabs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPrefabInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabDataAsset_Statics::NewProp_Prefabs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabDataAsset" },
		{ "ModuleRelativePath", "Public/PrefabDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPrefabDataAsset_Statics::NewProp_Prefabs = { "Prefabs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabDataAsset, Prefabs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPrefabDataAsset_Statics::NewProp_Prefabs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabDataAsset_Statics::NewProp_Prefabs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPrefabDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabDataAsset_Statics::NewProp_Prefabs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabDataAsset_Statics::NewProp_Prefabs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrefabDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrefabDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPrefabDataAsset_Statics::ClassParams = {
		&UPrefabDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPrefabDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPrefabDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPrefabDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPrefabDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPrefabDataAsset, 3564799039);
	template<> PREFABRICATORRUNTIME_API UClass* StaticClass<UPrefabDataAsset>()
	{
		return UPrefabDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPrefabDataAsset(Z_Construct_UClass_UPrefabDataAsset, &UPrefabDataAsset::StaticClass, TEXT("/Script/PrefabricatorRuntime"), TEXT("UPrefabDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrefabDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
