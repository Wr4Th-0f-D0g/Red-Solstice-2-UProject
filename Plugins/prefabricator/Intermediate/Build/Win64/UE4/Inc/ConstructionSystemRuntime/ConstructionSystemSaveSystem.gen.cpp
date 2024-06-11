// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConstructionSystemRuntime/Public/ConstructionSystemSaveSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructionSystemSaveSystem() {}
// Cross Module References
	CONSTRUCTIONSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UConstructionSystemSaveSystem_NoRegister();
	CONSTRUCTIONSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UConstructionSystemSaveSystem();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ConstructionSystemRuntime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UConstructionSystemSaveSystem::execHandleConstructionSystemLevelLoad)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstructionSystemSaveSystem::HandleConstructionSystemLevelLoad(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstructionSystemSaveSystem::execLoadConstructionSystemLevel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LevelName);
		P_GET_UBOOL(Z_Param_bAbsolute);
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveSlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstructionSystemSaveSystem::LoadConstructionSystemLevel(Z_Param_WorldContextObject,Z_Param_Out_LevelName,Z_Param_bAbsolute,Z_Param_SaveSlotName,Z_Param_UserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstructionSystemSaveSystem::execSaveConstructionSystemLevel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveSlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_GET_UBOOL(Z_Param_bSavePlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConstructionSystemSaveSystem::SaveConstructionSystemLevel(Z_Param_WorldContextObject,Z_Param_SaveSlotName,Z_Param_UserIndex,Z_Param_bSavePlayerState);
		P_NATIVE_END;
	}
	void UConstructionSystemSaveSystem::StaticRegisterNativesUConstructionSystemSaveSystem()
	{
		UClass* Class = UConstructionSystemSaveSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleConstructionSystemLevelLoad", &UConstructionSystemSaveSystem::execHandleConstructionSystemLevelLoad },
			{ "LoadConstructionSystemLevel", &UConstructionSystemSaveSystem::execLoadConstructionSystemLevel },
			{ "SaveConstructionSystemLevel", &UConstructionSystemSaveSystem::execSaveConstructionSystemLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConstructionSystemSaveSystem_HandleConstructionSystemLevelLoad_Statics
	{
		struct ConstructionSystemSaveSystem_eventHandleConstructionSystemLevelLoad_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstructionSystemSaveSystem_HandleConstructionSystemLevelLoad_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstructionSystemSaveSystem_HandleConstructionSystemLevelLoad_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConstructionSystemSaveSystem_eventHandleConstructionSystemLevelLoad_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConstructionSystemSaveSystem_HandleConstructionSystemLevelLoad_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionSystemSaveSystem_HandleConstructionSystemLevelLoad_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstructionSystemSaveSystem_HandleConstructionSystemLevelLoad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructionSystemSaveSystem_HandleConstructionSystemLevelLoad_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstructionSystemSaveSystem_HandleConstructionSystemLevelLoad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConstructionSystemSaveSystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstructionSystemSaveSystem_HandleConstructionSystemLevelLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstructionSystemSaveSystem, nullptr, "HandleConstructionSystemLevelLoad", nullptr, nullptr, sizeof(ConstructionSystemSaveSystem_eventHandleConstructionSystemLevelLoad_Parms), Z_Construct_UFunction_UConstructionSystemSaveSystem_HandleConstructionSystemLevelLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionSystemSaveSystem_HandleConstructionSystemLevelLoad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstructionSystemSaveSystem_HandleConstructionSystemLevelLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionSystemSaveSystem_HandleConstructionSystemLevelLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstructionSystemSaveSystem_HandleConstructionSystemLevelLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConstructionSystemSaveSystem_HandleConstructionSystemLevelLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics
	{
		struct ConstructionSystemSaveSystem_eventLoadConstructionSystemLevel_Parms
		{
			const UObject* WorldContextObject;
			FName LevelName;
			bool bAbsolute;
			FString SaveSlotName;
			int32 UserIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LevelName;
		static void NewProp_bAbsolute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAbsolute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConstructionSystemSaveSystem_eventLoadConstructionSystemLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::NewProp_LevelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConstructionSystemSaveSystem_eventLoadConstructionSystemLevel_Parms, LevelName), METADATA_PARAMS(Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::NewProp_LevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::NewProp_LevelName_MetaData)) };
	void Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::NewProp_bAbsolute_SetBit(void* Obj)
	{
		((ConstructionSystemSaveSystem_eventLoadConstructionSystemLevel_Parms*)Obj)->bAbsolute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::NewProp_bAbsolute = { "bAbsolute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConstructionSystemSaveSystem_eventLoadConstructionSystemLevel_Parms), &Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::NewProp_bAbsolute_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::NewProp_SaveSlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConstructionSystemSaveSystem_eventLoadConstructionSystemLevel_Parms, SaveSlotName), METADATA_PARAMS(Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::NewProp_SaveSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::NewProp_SaveSlotName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConstructionSystemSaveSystem_eventLoadConstructionSystemLevel_Parms, UserIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::NewProp_LevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::NewProp_bAbsolute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::NewProp_SaveSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::NewProp_UserIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConstructionSystemSaveSystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstructionSystemSaveSystem, nullptr, "LoadConstructionSystemLevel", nullptr, nullptr, sizeof(ConstructionSystemSaveSystem_eventLoadConstructionSystemLevel_Parms), Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics
	{
		struct ConstructionSystemSaveSystem_eventSaveConstructionSystemLevel_Parms
		{
			const UObject* WorldContextObject;
			FString SaveSlotName;
			int32 UserIndex;
			bool bSavePlayerState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static void NewProp_bSavePlayerState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSavePlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConstructionSystemSaveSystem_eventSaveConstructionSystemLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::NewProp_SaveSlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConstructionSystemSaveSystem_eventSaveConstructionSystemLevel_Parms, SaveSlotName), METADATA_PARAMS(Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::NewProp_SaveSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::NewProp_SaveSlotName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConstructionSystemSaveSystem_eventSaveConstructionSystemLevel_Parms, UserIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::NewProp_bSavePlayerState_SetBit(void* Obj)
	{
		((ConstructionSystemSaveSystem_eventSaveConstructionSystemLevel_Parms*)Obj)->bSavePlayerState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::NewProp_bSavePlayerState = { "bSavePlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConstructionSystemSaveSystem_eventSaveConstructionSystemLevel_Parms), &Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::NewProp_bSavePlayerState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::NewProp_SaveSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::NewProp_UserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::NewProp_bSavePlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConstructionSystemSaveSystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstructionSystemSaveSystem, nullptr, "SaveConstructionSystemLevel", nullptr, nullptr, sizeof(ConstructionSystemSaveSystem_eventSaveConstructionSystemLevel_Parms), Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UConstructionSystemSaveSystem_NoRegister()
	{
		return UConstructionSystemSaveSystem::StaticClass();
	}
	struct Z_Construct_UClass_UConstructionSystemSaveSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConstructionSystemSaveSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ConstructionSystemRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConstructionSystemSaveSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConstructionSystemSaveSystem_HandleConstructionSystemLevelLoad, "HandleConstructionSystemLevelLoad" }, // 3003289268
		{ &Z_Construct_UFunction_UConstructionSystemSaveSystem_LoadConstructionSystemLevel, "LoadConstructionSystemLevel" }, // 598536301
		{ &Z_Construct_UFunction_UConstructionSystemSaveSystem_SaveConstructionSystemLevel, "SaveConstructionSystemLevel" }, // 1761743577
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructionSystemSaveSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ConstructionSystemSaveSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConstructionSystemSaveSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConstructionSystemSaveSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstructionSystemSaveSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConstructionSystemSaveSystem_Statics::ClassParams = {
		&UConstructionSystemSaveSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UConstructionSystemSaveSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionSystemSaveSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConstructionSystemSaveSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConstructionSystemSaveSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConstructionSystemSaveSystem, 90008420);
	template<> CONSTRUCTIONSYSTEMRUNTIME_API UClass* StaticClass<UConstructionSystemSaveSystem>()
	{
		return UConstructionSystemSaveSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConstructionSystemSaveSystem(Z_Construct_UClass_UConstructionSystemSaveSystem, &UConstructionSystemSaveSystem::StaticClass, TEXT("/Script/ConstructionSystemRuntime"), TEXT("UConstructionSystemSaveSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConstructionSystemSaveSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
