// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AuthaerWidgetComponentPlugin/Public/AuthaerWidgetComponentManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuthaerWidgetComponentManager() {}
// Cross Module References
	AUTHAERWIDGETCOMPONENTPLUGIN_API UClass* Z_Construct_UClass_UAuthaerWidgetComponentManager_NoRegister();
	AUTHAERWIDGETCOMPONENTPLUGIN_API UClass* Z_Construct_UClass_UAuthaerWidgetComponentManager();
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_AuthaerWidgetComponentPlugin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AUTHAERWIDGETCOMPONENTPLUGIN_API UClass* Z_Construct_UClass_UAuthaerWidgetComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAuthaerWidgetComponentManager::execGetClassesNotUsingAuthaerWidgetComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TSubclassOf<AActor> >*)Z_Param__Result=P_THIS->GetClassesNotUsingAuthaerWidgetComponent();
		P_NATIVE_END;
	}
	void UAuthaerWidgetComponentManager::StaticRegisterNativesUAuthaerWidgetComponentManager()
	{
		UClass* Class = UAuthaerWidgetComponentManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetClassesNotUsingAuthaerWidgetComponent", &UAuthaerWidgetComponentManager::execGetClassesNotUsingAuthaerWidgetComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAuthaerWidgetComponentManager_GetClassesNotUsingAuthaerWidgetComponent_Statics
	{
		struct AuthaerWidgetComponentManager_eventGetClassesNotUsingAuthaerWidgetComponent_Parms
		{
			TArray<TSubclassOf<AActor> > ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAuthaerWidgetComponentManager_GetClassesNotUsingAuthaerWidgetComponent_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAuthaerWidgetComponentManager_GetClassesNotUsingAuthaerWidgetComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuthaerWidgetComponentManager_eventGetClassesNotUsingAuthaerWidgetComponent_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuthaerWidgetComponentManager_GetClassesNotUsingAuthaerWidgetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthaerWidgetComponentManager_GetClassesNotUsingAuthaerWidgetComponent_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthaerWidgetComponentManager_GetClassesNotUsingAuthaerWidgetComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthaerWidgetComponentManager_GetClassesNotUsingAuthaerWidgetComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AuthaerWidgetComponentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuthaerWidgetComponentManager_GetClassesNotUsingAuthaerWidgetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuthaerWidgetComponentManager, nullptr, "GetClassesNotUsingAuthaerWidgetComponent", nullptr, nullptr, sizeof(AuthaerWidgetComponentManager_eventGetClassesNotUsingAuthaerWidgetComponent_Parms), Z_Construct_UFunction_UAuthaerWidgetComponentManager_GetClassesNotUsingAuthaerWidgetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthaerWidgetComponentManager_GetClassesNotUsingAuthaerWidgetComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAuthaerWidgetComponentManager_GetClassesNotUsingAuthaerWidgetComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthaerWidgetComponentManager_GetClassesNotUsingAuthaerWidgetComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAuthaerWidgetComponentManager_GetClassesNotUsingAuthaerWidgetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAuthaerWidgetComponentManager_GetClassesNotUsingAuthaerWidgetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAuthaerWidgetComponentManager_NoRegister()
	{
		return UAuthaerWidgetComponentManager::StaticClass();
	}
	struct Z_Construct_UClass_UAuthaerWidgetComponentManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedWidgetComponents_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackedWidgetComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedWidgetComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackedWidgetComponents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuthaerWidgetComponentManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AuthaerWidgetComponentPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAuthaerWidgetComponentManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuthaerWidgetComponentManager_GetClassesNotUsingAuthaerWidgetComponent, "GetClassesNotUsingAuthaerWidgetComponent" }, // 3726198640
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthaerWidgetComponentManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AuthaerWidgetComponentManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AuthaerWidgetComponentManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthaerWidgetComponentManager_Statics::NewProp_TrackedWidgetComponents_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AuthaerWidgetComponentManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AuthaerWidgetComponentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAuthaerWidgetComponentManager_Statics::NewProp_TrackedWidgetComponents_Inner = { "TrackedWidgetComponents", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAuthaerWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAuthaerWidgetComponentManager_Statics::NewProp_TrackedWidgetComponents_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthaerWidgetComponentManager_Statics::NewProp_TrackedWidgetComponents_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthaerWidgetComponentManager_Statics::NewProp_TrackedWidgetComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AuthaerWidgetComponentManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AuthaerWidgetComponentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAuthaerWidgetComponentManager_Statics::NewProp_TrackedWidgetComponents = { "TrackedWidgetComponents", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAuthaerWidgetComponentManager, TrackedWidgetComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAuthaerWidgetComponentManager_Statics::NewProp_TrackedWidgetComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthaerWidgetComponentManager_Statics::NewProp_TrackedWidgetComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuthaerWidgetComponentManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuthaerWidgetComponentManager_Statics::NewProp_TrackedWidgetComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuthaerWidgetComponentManager_Statics::NewProp_TrackedWidgetComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuthaerWidgetComponentManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuthaerWidgetComponentManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAuthaerWidgetComponentManager_Statics::ClassParams = {
		&UAuthaerWidgetComponentManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAuthaerWidgetComponentManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAuthaerWidgetComponentManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAuthaerWidgetComponentManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthaerWidgetComponentManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAuthaerWidgetComponentManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAuthaerWidgetComponentManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAuthaerWidgetComponentManager, 2721148953);
	template<> AUTHAERWIDGETCOMPONENTPLUGIN_API UClass* StaticClass<UAuthaerWidgetComponentManager>()
	{
		return UAuthaerWidgetComponentManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAuthaerWidgetComponentManager(Z_Construct_UClass_UAuthaerWidgetComponentManager, &UAuthaerWidgetComponentManager::StaticClass, TEXT("/Script/AuthaerWidgetComponentPlugin"), TEXT("UAuthaerWidgetComponentManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuthaerWidgetComponentManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
