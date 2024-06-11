// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolsticeMinimap/Public/MapSystem_MinimapDrawCanvas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapSystem_MinimapDrawCanvas() {}
// Cross Module References
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_MinimapDrawCanvas();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SolsticeMinimap();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_AMapSystemManager_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(UMapSystem_MinimapDrawCanvas::execGetPlayerCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACharacter**)Z_Param__Result=P_THIS->GetPlayerCharacter();
		P_NATIVE_END;
	}
	void UMapSystem_MinimapDrawCanvas::StaticRegisterNativesUMapSystem_MinimapDrawCanvas()
	{
		UClass* Class = UMapSystem_MinimapDrawCanvas::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerCharacter", &UMapSystem_MinimapDrawCanvas::execGetPlayerCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapSystem_MinimapDrawCanvas_GetPlayerCharacter_Statics
	{
		struct MapSystem_MinimapDrawCanvas_eventGetPlayerCharacter_Parms
		{
			ACharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSystem_MinimapDrawCanvas_GetPlayerCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MinimapDrawCanvas_eventGetPlayerCharacter_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MinimapDrawCanvas_GetPlayerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MinimapDrawCanvas_GetPlayerCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MinimapDrawCanvas_GetPlayerCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MinimapDrawCanvas.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MinimapDrawCanvas_GetPlayerCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MinimapDrawCanvas, nullptr, "GetPlayerCharacter", nullptr, nullptr, sizeof(MapSystem_MinimapDrawCanvas_eventGetPlayerCharacter_Parms), Z_Construct_UFunction_UMapSystem_MinimapDrawCanvas_GetPlayerCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapDrawCanvas_GetPlayerCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MinimapDrawCanvas_GetPlayerCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapDrawCanvas_GetPlayerCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MinimapDrawCanvas_GetPlayerCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MinimapDrawCanvas_GetPlayerCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_NoRegister()
	{
		return UMapSystem_MinimapDrawCanvas::StaticClass();
	}
	struct Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CanvasSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Zoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Zoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SolsticeMinimap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapSystem_MinimapDrawCanvas_GetPlayerCharacter, "GetPlayerCharacter" }, // 2578924082
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MapSystem_MinimapDrawCanvas.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapDrawCanvas.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_MapManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapDrawCanvas" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapDrawCanvas.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_MapManager = { "MapManager", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapDrawCanvas, MapManager), Z_Construct_UClass_AMapSystemManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_MapManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_MapManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_MinBounds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapDrawCanvas" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapDrawCanvas.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_MinBounds = { "MinBounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapDrawCanvas, MinBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_MinBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_MinBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_MaxBounds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapDrawCanvas" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapDrawCanvas.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_MaxBounds = { "MaxBounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapDrawCanvas, MaxBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_MaxBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_MaxBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_CanvasSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapDrawCanvas" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapDrawCanvas.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_CanvasSize = { "CanvasSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapDrawCanvas, CanvasSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_CanvasSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_CanvasSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_Zoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapDrawCanvas" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapDrawCanvas.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_Zoom = { "Zoom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapDrawCanvas, Zoom), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_Zoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_Zoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_MapManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_MinBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_MaxBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_CanvasSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::NewProp_Zoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapSystem_MinimapDrawCanvas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::ClassParams = {
		&UMapSystem_MinimapDrawCanvas::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapSystem_MinimapDrawCanvas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMapSystem_MinimapDrawCanvas, 3272310197);
	template<> SOLSTICEMINIMAP_API UClass* StaticClass<UMapSystem_MinimapDrawCanvas>()
	{
		return UMapSystem_MinimapDrawCanvas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapSystem_MinimapDrawCanvas(Z_Construct_UClass_UMapSystem_MinimapDrawCanvas, &UMapSystem_MinimapDrawCanvas::StaticClass, TEXT("/Script/SolsticeMinimap"), TEXT("UMapSystem_MinimapDrawCanvas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapSystem_MinimapDrawCanvas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
