// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConstructionSystemRuntime/Public/ConstructionSystemBuildTool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructionSystemBuildTool() {}
// Cross Module References
	CONSTRUCTIONSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UConstructionSystemBuildTool_NoRegister();
	CONSTRUCTIONSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UConstructionSystemBuildTool();
	CONSTRUCTIONSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UConstructionSystemTool();
	UPackage* Z_Construct_UPackage__Script_ConstructionSystemRuntime();
	PREFABRICATORRUNTIME_API UClass* Z_Construct_UClass_UPrefabricatorAssetInterface_NoRegister();
	CONSTRUCTIONSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UConstructionSystemCursor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UConstructionSystemBuildTool::execHandleInput_ConstructAtCursor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleInput_ConstructAtCursor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstructionSystemBuildTool::execHandleInput_CursorMoveNext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleInput_CursorMoveNext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstructionSystemBuildTool::execHandleInput_CursorMovePrev)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleInput_CursorMovePrev();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstructionSystemBuildTool::execHandleInput_RotateCursorStep)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NumSteps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleInput_RotateCursorStep(Z_Param_NumSteps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstructionSystemBuildTool::execSetActivePrefab)
	{
		P_GET_OBJECT(UPrefabricatorAssetInterface,Z_Param_InActivePrefabAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActivePrefab(Z_Param_InActivePrefabAsset);
		P_NATIVE_END;
	}
	void UConstructionSystemBuildTool::StaticRegisterNativesUConstructionSystemBuildTool()
	{
		UClass* Class = UConstructionSystemBuildTool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleInput_ConstructAtCursor", &UConstructionSystemBuildTool::execHandleInput_ConstructAtCursor },
			{ "HandleInput_CursorMoveNext", &UConstructionSystemBuildTool::execHandleInput_CursorMoveNext },
			{ "HandleInput_CursorMovePrev", &UConstructionSystemBuildTool::execHandleInput_CursorMovePrev },
			{ "HandleInput_RotateCursorStep", &UConstructionSystemBuildTool::execHandleInput_RotateCursorStep },
			{ "SetActivePrefab", &UConstructionSystemBuildTool::execSetActivePrefab },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_ConstructAtCursor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_ConstructAtCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConstructionSystemBuildTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_ConstructAtCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstructionSystemBuildTool, nullptr, "HandleInput_ConstructAtCursor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_ConstructAtCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_ConstructAtCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_ConstructAtCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_ConstructAtCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_CursorMoveNext_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_CursorMoveNext_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConstructionSystemBuildTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_CursorMoveNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstructionSystemBuildTool, nullptr, "HandleInput_CursorMoveNext", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_CursorMoveNext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_CursorMoveNext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_CursorMoveNext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_CursorMoveNext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_CursorMovePrev_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_CursorMovePrev_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConstructionSystemBuildTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_CursorMovePrev_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstructionSystemBuildTool, nullptr, "HandleInput_CursorMovePrev", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_CursorMovePrev_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_CursorMovePrev_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_CursorMovePrev()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_CursorMovePrev_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_RotateCursorStep_Statics
	{
		struct ConstructionSystemBuildTool_eventHandleInput_RotateCursorStep_Parms
		{
			float NumSteps;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NumSteps;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_RotateCursorStep_Statics::NewProp_NumSteps = { "NumSteps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConstructionSystemBuildTool_eventHandleInput_RotateCursorStep_Parms, NumSteps), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_RotateCursorStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_RotateCursorStep_Statics::NewProp_NumSteps,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_RotateCursorStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConstructionSystemBuildTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_RotateCursorStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstructionSystemBuildTool, nullptr, "HandleInput_RotateCursorStep", nullptr, nullptr, sizeof(ConstructionSystemBuildTool_eventHandleInput_RotateCursorStep_Parms), Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_RotateCursorStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_RotateCursorStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_RotateCursorStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_RotateCursorStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_RotateCursorStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_RotateCursorStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstructionSystemBuildTool_SetActivePrefab_Statics
	{
		struct ConstructionSystemBuildTool_eventSetActivePrefab_Parms
		{
			UPrefabricatorAssetInterface* InActivePrefabAsset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActivePrefabAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstructionSystemBuildTool_SetActivePrefab_Statics::NewProp_InActivePrefabAsset = { "InActivePrefabAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConstructionSystemBuildTool_eventSetActivePrefab_Parms, InActivePrefabAsset), Z_Construct_UClass_UPrefabricatorAssetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstructionSystemBuildTool_SetActivePrefab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructionSystemBuildTool_SetActivePrefab_Statics::NewProp_InActivePrefabAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstructionSystemBuildTool_SetActivePrefab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConstructionSystemBuildTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstructionSystemBuildTool_SetActivePrefab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstructionSystemBuildTool, nullptr, "SetActivePrefab", nullptr, nullptr, sizeof(ConstructionSystemBuildTool_eventSetActivePrefab_Parms), Z_Construct_UFunction_UConstructionSystemBuildTool_SetActivePrefab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionSystemBuildTool_SetActivePrefab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstructionSystemBuildTool_SetActivePrefab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionSystemBuildTool_SetActivePrefab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstructionSystemBuildTool_SetActivePrefab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConstructionSystemBuildTool_SetActivePrefab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UConstructionSystemBuildTool_NoRegister()
	{
		return UConstructionSystemBuildTool::StaticClass();
	}
	struct Z_Construct_UClass_UConstructionSystemBuildTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorRotationStepAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CursorRotationStepAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cursor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivePrefabAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivePrefabAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConstructionSystemBuildTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UConstructionSystemTool,
		(UObject* (*)())Z_Construct_UPackage__Script_ConstructionSystemRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConstructionSystemBuildTool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_ConstructAtCursor, "HandleInput_ConstructAtCursor" }, // 4010406192
		{ &Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_CursorMoveNext, "HandleInput_CursorMoveNext" }, // 2889468044
		{ &Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_CursorMovePrev, "HandleInput_CursorMovePrev" }, // 3761546569
		{ &Z_Construct_UFunction_UConstructionSystemBuildTool_HandleInput_RotateCursorStep, "HandleInput_RotateCursorStep" }, // 2759588291
		{ &Z_Construct_UFunction_UConstructionSystemBuildTool_SetActivePrefab, "SetActivePrefab" }, // 3924917142
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionSystemBuildTool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ConstructionSystemBuildTool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConstructionSystemBuildTool.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionSystemBuildTool_Statics::NewProp_TraceDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemBuildTool" },
		{ "ModuleRelativePath", "Public/ConstructionSystemBuildTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConstructionSystemBuildTool_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConstructionSystemBuildTool, TraceDistance), METADATA_PARAMS(Z_Construct_UClass_UConstructionSystemBuildTool_Statics::NewProp_TraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemBuildTool_Statics::NewProp_TraceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionSystemBuildTool_Statics::NewProp_CursorRotationStepAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemBuildTool" },
		{ "ModuleRelativePath", "Public/ConstructionSystemBuildTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConstructionSystemBuildTool_Statics::NewProp_CursorRotationStepAngle = { "CursorRotationStepAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConstructionSystemBuildTool, CursorRotationStepAngle), METADATA_PARAMS(Z_Construct_UClass_UConstructionSystemBuildTool_Statics::NewProp_CursorRotationStepAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemBuildTool_Statics::NewProp_CursorRotationStepAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionSystemBuildTool_Statics::NewProp_Cursor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemBuildTool" },
		{ "ModuleRelativePath", "Public/ConstructionSystemBuildTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConstructionSystemBuildTool_Statics::NewProp_Cursor = { "Cursor", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConstructionSystemBuildTool, Cursor), Z_Construct_UClass_UConstructionSystemCursor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConstructionSystemBuildTool_Statics::NewProp_Cursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemBuildTool_Statics::NewProp_Cursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionSystemBuildTool_Statics::NewProp_ActivePrefabAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemBuildTool" },
		{ "ModuleRelativePath", "Public/ConstructionSystemBuildTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConstructionSystemBuildTool_Statics::NewProp_ActivePrefabAsset = { "ActivePrefabAsset", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConstructionSystemBuildTool, ActivePrefabAsset), Z_Construct_UClass_UPrefabricatorAssetInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConstructionSystemBuildTool_Statics::NewProp_ActivePrefabAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemBuildTool_Statics::NewProp_ActivePrefabAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConstructionSystemBuildTool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionSystemBuildTool_Statics::NewProp_TraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionSystemBuildTool_Statics::NewProp_CursorRotationStepAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionSystemBuildTool_Statics::NewProp_Cursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionSystemBuildTool_Statics::NewProp_ActivePrefabAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConstructionSystemBuildTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstructionSystemBuildTool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConstructionSystemBuildTool_Statics::ClassParams = {
		&UConstructionSystemBuildTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UConstructionSystemBuildTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemBuildTool_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConstructionSystemBuildTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemBuildTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConstructionSystemBuildTool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConstructionSystemBuildTool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConstructionSystemBuildTool, 1150534537);
	template<> CONSTRUCTIONSYSTEMRUNTIME_API UClass* StaticClass<UConstructionSystemBuildTool>()
	{
		return UConstructionSystemBuildTool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConstructionSystemBuildTool(Z_Construct_UClass_UConstructionSystemBuildTool, &UConstructionSystemBuildTool::StaticClass, TEXT("/Script/ConstructionSystemRuntime"), TEXT("UConstructionSystemBuildTool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConstructionSystemBuildTool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
