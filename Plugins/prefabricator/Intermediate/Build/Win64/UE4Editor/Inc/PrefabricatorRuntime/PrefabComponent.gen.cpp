// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrefabricatorRuntime/Public/PrefabComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrefabComponent() {}
// Cross Module References
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabComponent_NoRegister();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_PrefabricatorRuntime();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAssetInterface_NoRegister();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAssetCollection_NoRegister();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPrefabComponent::execGetPrefabAssetInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrefabricatorAssetInterface**)Z_Param__Result=P_THIS->GetPrefabAssetInterface();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPrefabComponent::execGetPrefabCollection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UPrefabricatorAssetCollection>*)Z_Param__Result=P_THIS->GetPrefabCollection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPrefabComponent::execIsForcedStaticCollection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsForcedStaticCollection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPrefabComponent::execLoadAsset)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UPrefabricatorAsset>,Z_Param_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadAsset(Z_Param_Asset);
		P_NATIVE_END;
	}
	void UPrefabComponent::StaticRegisterNativesUPrefabComponent()
	{
		UClass* Class = UPrefabComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPrefabAssetInterface", &UPrefabComponent::execGetPrefabAssetInterface },
			{ "GetPrefabCollection", &UPrefabComponent::execGetPrefabCollection },
			{ "IsForcedStaticCollection", &UPrefabComponent::execIsForcedStaticCollection },
			{ "LoadAsset", &UPrefabComponent::execLoadAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPrefabComponent_GetPrefabAssetInterface_Statics
	{
		struct PrefabComponent_eventGetPrefabAssetInterface_Parms
		{
			UPrefabricatorAssetInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPrefabComponent_GetPrefabAssetInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabComponent_eventGetPrefabAssetInterface_Parms, ReturnValue), Z_Construct_UClass_UPrefabricatorAssetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPrefabComponent_GetPrefabAssetInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrefabComponent_GetPrefabAssetInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPrefabComponent_GetPrefabAssetInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PrefabComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPrefabComponent_GetPrefabAssetInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPrefabComponent, nullptr, "GetPrefabAssetInterface", nullptr, nullptr, sizeof(PrefabComponent_eventGetPrefabAssetInterface_Parms), Z_Construct_UFunction_UPrefabComponent_GetPrefabAssetInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrefabComponent_GetPrefabAssetInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPrefabComponent_GetPrefabAssetInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrefabComponent_GetPrefabAssetInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPrefabComponent_GetPrefabAssetInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPrefabComponent_GetPrefabAssetInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPrefabComponent_GetPrefabCollection_Statics
	{
		struct PrefabComponent_eventGetPrefabCollection_Parms
		{
			TSoftObjectPtr<UPrefabricatorAssetCollection> ReturnValue;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UPrefabComponent_GetPrefabCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabComponent_eventGetPrefabCollection_Parms, ReturnValue), Z_Construct_UClass_UPrefabricatorAssetCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPrefabComponent_GetPrefabCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrefabComponent_GetPrefabCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPrefabComponent_GetPrefabCollection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PrefabComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPrefabComponent_GetPrefabCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPrefabComponent, nullptr, "GetPrefabCollection", nullptr, nullptr, sizeof(PrefabComponent_eventGetPrefabCollection_Parms), Z_Construct_UFunction_UPrefabComponent_GetPrefabCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrefabComponent_GetPrefabCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPrefabComponent_GetPrefabCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrefabComponent_GetPrefabCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPrefabComponent_GetPrefabCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPrefabComponent_GetPrefabCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPrefabComponent_IsForcedStaticCollection_Statics
	{
		struct PrefabComponent_eventIsForcedStaticCollection_Parms
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
	void Z_Construct_UFunction_UPrefabComponent_IsForcedStaticCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PrefabComponent_eventIsForcedStaticCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPrefabComponent_IsForcedStaticCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PrefabComponent_eventIsForcedStaticCollection_Parms), &Z_Construct_UFunction_UPrefabComponent_IsForcedStaticCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPrefabComponent_IsForcedStaticCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrefabComponent_IsForcedStaticCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPrefabComponent_IsForcedStaticCollection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PrefabComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPrefabComponent_IsForcedStaticCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPrefabComponent, nullptr, "IsForcedStaticCollection", nullptr, nullptr, sizeof(PrefabComponent_eventIsForcedStaticCollection_Parms), Z_Construct_UFunction_UPrefabComponent_IsForcedStaticCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrefabComponent_IsForcedStaticCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPrefabComponent_IsForcedStaticCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrefabComponent_IsForcedStaticCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPrefabComponent_IsForcedStaticCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPrefabComponent_IsForcedStaticCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPrefabComponent_LoadAsset_Statics
	{
		struct PrefabComponent_eventLoadAsset_Parms
		{
			TSoftObjectPtr<UPrefabricatorAsset> Asset;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UPrefabComponent_LoadAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PrefabComponent_eventLoadAsset_Parms, Asset), Z_Construct_UClass_UPrefabricatorAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPrefabComponent_LoadAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPrefabComponent_LoadAsset_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPrefabComponent_LoadAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PrefabComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPrefabComponent_LoadAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPrefabComponent, nullptr, "LoadAsset", nullptr, nullptr, sizeof(PrefabComponent_eventLoadAsset_Parms), Z_Construct_UFunction_UPrefabComponent_LoadAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrefabComponent_LoadAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPrefabComponent_LoadAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPrefabComponent_LoadAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPrefabComponent_LoadAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPrefabComponent_LoadAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPrefabComponent_NoRegister()
	{
		return UPrefabComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPrefabComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrefabAssetInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PrefabAssetInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideStaticCollection_MetaData[];
#endif
		static void NewProp_bOverrideStaticCollection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideStaticCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStaticCollectionOverrideValue_MetaData[];
#endif
		static void NewProp_bStaticCollectionOverrideValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStaticCollectionOverrideValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrefabComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PrefabricatorRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPrefabComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPrefabComponent_GetPrefabAssetInterface, "GetPrefabAssetInterface" }, // 3478192942
		{ &Z_Construct_UFunction_UPrefabComponent_GetPrefabCollection, "GetPrefabCollection" }, // 646319323
		{ &Z_Construct_UFunction_UPrefabComponent_IsForcedStaticCollection, "IsForcedStaticCollection" }, // 312699188
		{ &Z_Construct_UFunction_UPrefabComponent_LoadAsset, "LoadAsset" }, // 123422321
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "PrefabComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PrefabComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabComponent_Statics::NewProp_PrefabAssetInterface_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabComponent" },
		{ "ModuleRelativePath", "Public/PrefabComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPrefabComponent_Statics::NewProp_PrefabAssetInterface = { "PrefabAssetInterface", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrefabComponent, PrefabAssetInterface), Z_Construct_UClass_UPrefabricatorAssetInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPrefabComponent_Statics::NewProp_PrefabAssetInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabComponent_Statics::NewProp_PrefabAssetInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabComponent_Statics::NewProp_bOverrideStaticCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabComponent" },
		{ "ModuleRelativePath", "Public/PrefabComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPrefabComponent_Statics::NewProp_bOverrideStaticCollection_SetBit(void* Obj)
	{
		((UPrefabComponent*)Obj)->bOverrideStaticCollection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPrefabComponent_Statics::NewProp_bOverrideStaticCollection = { "bOverrideStaticCollection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPrefabComponent), &Z_Construct_UClass_UPrefabComponent_Statics::NewProp_bOverrideStaticCollection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPrefabComponent_Statics::NewProp_bOverrideStaticCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabComponent_Statics::NewProp_bOverrideStaticCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrefabComponent_Statics::NewProp_bStaticCollectionOverrideValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PrefabComponent" },
		{ "ModuleRelativePath", "Public/PrefabComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPrefabComponent_Statics::NewProp_bStaticCollectionOverrideValue_SetBit(void* Obj)
	{
		((UPrefabComponent*)Obj)->bStaticCollectionOverrideValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPrefabComponent_Statics::NewProp_bStaticCollectionOverrideValue = { "bStaticCollectionOverrideValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPrefabComponent), &Z_Construct_UClass_UPrefabComponent_Statics::NewProp_bStaticCollectionOverrideValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPrefabComponent_Statics::NewProp_bStaticCollectionOverrideValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabComponent_Statics::NewProp_bStaticCollectionOverrideValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPrefabComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabComponent_Statics::NewProp_PrefabAssetInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabComponent_Statics::NewProp_bOverrideStaticCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrefabComponent_Statics::NewProp_bStaticCollectionOverrideValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrefabComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrefabComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPrefabComponent_Statics::ClassParams = {
		&UPrefabComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPrefabComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPrefabComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPrefabComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPrefabComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPrefabComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPrefabComponent, 2081917495);
	template<> PREFABRICATORRUNTIME_API UClass* StaticClass<UPrefabComponent>()
	{
		return UPrefabComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPrefabComponent(Z_Construct_UClass_UPrefabComponent, &UPrefabComponent::StaticClass, TEXT("/Script/PrefabricatorRuntime"), TEXT("UPrefabComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrefabComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
