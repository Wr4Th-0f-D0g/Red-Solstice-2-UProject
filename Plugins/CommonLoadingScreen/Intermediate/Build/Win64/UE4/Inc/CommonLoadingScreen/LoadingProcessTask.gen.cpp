// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonLoadingScreen/Public/LoadingProcessTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingProcessTask() {}
// Cross Module References
	COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingProcessTask_NoRegister();
	COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingProcessTask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CommonLoadingScreen();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingProcessInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULoadingProcessTask::execCreateLoadingScreenProcessTask)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_ShowLoadingScreenReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULoadingProcessTask**)Z_Param__Result=ULoadingProcessTask::CreateLoadingScreenProcessTask(Z_Param_WorldContextObject,Z_Param_ShowLoadingScreenReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadingProcessTask::execSetShowLoadingScreenReason)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowLoadingScreenReason(Z_Param_InReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadingProcessTask::execUnregister)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unregister();
		P_NATIVE_END;
	}
	void ULoadingProcessTask::StaticRegisterNativesULoadingProcessTask()
	{
		UClass* Class = ULoadingProcessTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateLoadingScreenProcessTask", &ULoadingProcessTask::execCreateLoadingScreenProcessTask },
			{ "SetShowLoadingScreenReason", &ULoadingProcessTask::execSetShowLoadingScreenReason },
			{ "Unregister", &ULoadingProcessTask::execUnregister },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics
	{
		struct LoadingProcessTask_eventCreateLoadingScreenProcessTask_Parms
		{
			UObject* WorldContextObject;
			FString ShowLoadingScreenReason;
			ULoadingProcessTask* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowLoadingScreenReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShowLoadingScreenReason;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadingProcessTask_eventCreateLoadingScreenProcessTask_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::NewProp_ShowLoadingScreenReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::NewProp_ShowLoadingScreenReason = { "ShowLoadingScreenReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadingProcessTask_eventCreateLoadingScreenProcessTask_Parms, ShowLoadingScreenReason), METADATA_PARAMS(Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::NewProp_ShowLoadingScreenReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::NewProp_ShowLoadingScreenReason_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadingProcessTask_eventCreateLoadingScreenProcessTask_Parms, ReturnValue), Z_Construct_UClass_ULoadingProcessTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::NewProp_ShowLoadingScreenReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadingProcessTask.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadingProcessTask, nullptr, "CreateLoadingScreenProcessTask", nullptr, nullptr, sizeof(LoadingProcessTask_eventCreateLoadingScreenProcessTask_Parms), Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics
	{
		struct LoadingProcessTask_eventSetShowLoadingScreenReason_Parms
		{
			FString InReason;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::NewProp_InReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::NewProp_InReason = { "InReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadingProcessTask_eventSetShowLoadingScreenReason_Parms, InReason), METADATA_PARAMS(Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::NewProp_InReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::NewProp_InReason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::NewProp_InReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadingProcessTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadingProcessTask, nullptr, "SetShowLoadingScreenReason", nullptr, nullptr, sizeof(LoadingProcessTask_eventSetShowLoadingScreenReason_Parms), Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadingProcessTask_Unregister_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingProcessTask_Unregister_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadingProcessTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingProcessTask_Unregister_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadingProcessTask, nullptr, "Unregister", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadingProcessTask_Unregister_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingProcessTask_Unregister_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadingProcessTask_Unregister()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadingProcessTask_Unregister_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULoadingProcessTask_NoRegister()
	{
		return ULoadingProcessTask::StaticClass();
	}
	struct Z_Construct_UClass_ULoadingProcessTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadingProcessTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonLoadingScreen,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoadingProcessTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadingProcessTask_CreateLoadingScreenProcessTask, "CreateLoadingScreenProcessTask" }, // 4060104542
		{ &Z_Construct_UFunction_ULoadingProcessTask_SetShowLoadingScreenReason, "SetShowLoadingScreenReason" }, // 2740558319
		{ &Z_Construct_UFunction_ULoadingProcessTask_Unregister, "Unregister" }, // 2117221734
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingProcessTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LoadingProcessTask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LoadingProcessTask.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULoadingProcessTask_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULoadingProcessInterface_NoRegister, (int32)VTABLE_OFFSET(ULoadingProcessTask, ILoadingProcessInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadingProcessTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadingProcessTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadingProcessTask_Statics::ClassParams = {
		&ULoadingProcessTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadingProcessTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingProcessTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadingProcessTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadingProcessTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadingProcessTask, 4038672127);
	template<> COMMONLOADINGSCREEN_API UClass* StaticClass<ULoadingProcessTask>()
	{
		return ULoadingProcessTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadingProcessTask(Z_Construct_UClass_ULoadingProcessTask, &ULoadingProcessTask::StaticClass, TEXT("/Script/CommonLoadingScreen"), TEXT("ULoadingProcessTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingProcessTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
