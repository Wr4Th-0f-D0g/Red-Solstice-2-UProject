// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonLoadingScreen/Public/LoadingScreenManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingScreenManager() {}
// Cross Module References
	COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingScreenManager_NoRegister();
	COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingScreenManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_CommonLoadingScreen();
// End Cross Module References
	DEFINE_FUNCTION(ULoadingScreenManager::execGetDebugReasonForShowingOrHidingLoadingScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDebugReasonForShowingOrHidingLoadingScreen();
		P_NATIVE_END;
	}
	void ULoadingScreenManager::StaticRegisterNativesULoadingScreenManager()
	{
		UClass* Class = ULoadingScreenManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDebugReasonForShowingOrHidingLoadingScreen", &ULoadingScreenManager::execGetDebugReasonForShowingOrHidingLoadingScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics
	{
		struct LoadingScreenManager_eventGetDebugReasonForShowingOrHidingLoadingScreen_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadingScreenManager_eventGetDebugReasonForShowingOrHidingLoadingScreen_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadingScreenManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadingScreenManager, nullptr, "GetDebugReasonForShowingOrHidingLoadingScreen", nullptr, nullptr, sizeof(LoadingScreenManager_eventGetDebugReasonForShowingOrHidingLoadingScreen_Parms), Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULoadingScreenManager_NoRegister()
	{
		return ULoadingScreenManager::StaticClass();
	}
	struct Z_Construct_UClass_ULoadingScreenManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadingScreenManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonLoadingScreen,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoadingScreenManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadingScreenManager_GetDebugReasonForShowingOrHidingLoadingScreen, "GetDebugReasonForShowingOrHidingLoadingScreen" }, // 3024616047
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LoadingScreenManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LoadingScreenManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadingScreenManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadingScreenManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadingScreenManager_Statics::ClassParams = {
		&ULoadingScreenManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadingScreenManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadingScreenManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadingScreenManager, 3869000343);
	template<> COMMONLOADINGSCREEN_API UClass* StaticClass<ULoadingScreenManager>()
	{
		return ULoadingScreenManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadingScreenManager(Z_Construct_UClass_ULoadingScreenManager, &ULoadingScreenManager::StaticClass, TEXT("/Script/CommonLoadingScreen"), TEXT("ULoadingScreenManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingScreenManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
