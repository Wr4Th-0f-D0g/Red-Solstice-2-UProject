// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolsticeMinimap/Public/MapSystemWidget_PingElementBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapSystemWidget_PingElementBase() {}
// Cross Module References
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystemWidget_PingElementBase_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystemWidget_PingElementBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SolsticeMinimap();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_MinimapWidgetBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(UMapSystemWidget_PingElementBase::execGetParentMinimap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMapSystem_MinimapWidgetBase**)Z_Param__Result=P_THIS->GetParentMinimap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemWidget_PingElementBase::execSetPositionInCanvas)
	{
		P_GET_STRUCT(FVector2D,Z_Param_PingLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPositionInCanvas(Z_Param_PingLocation);
		P_NATIVE_END;
	}
	static FName NAME_UMapSystemWidget_PingElementBase_InitializePing = FName(TEXT("InitializePing"));
	void UMapSystemWidget_PingElementBase::InitializePing()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMapSystemWidget_PingElementBase_InitializePing),NULL);
	}
	void UMapSystemWidget_PingElementBase::StaticRegisterNativesUMapSystemWidget_PingElementBase()
	{
		UClass* Class = UMapSystemWidget_PingElementBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetParentMinimap", &UMapSystemWidget_PingElementBase::execGetParentMinimap },
			{ "SetPositionInCanvas", &UMapSystemWidget_PingElementBase::execSetPositionInCanvas },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapSystemWidget_PingElementBase_GetParentMinimap_Statics
	{
		struct MapSystemWidget_PingElementBase_eventGetParentMinimap_Parms
		{
			UMapSystem_MinimapWidgetBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemWidget_PingElementBase_GetParentMinimap_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSystemWidget_PingElementBase_GetParentMinimap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemWidget_PingElementBase_eventGetParentMinimap_Parms, ReturnValue), Z_Construct_UClass_UMapSystem_MinimapWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemWidget_PingElementBase_GetParentMinimap_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidget_PingElementBase_GetParentMinimap_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemWidget_PingElementBase_GetParentMinimap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemWidget_PingElementBase_GetParentMinimap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemWidget_PingElementBase_GetParentMinimap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemWidget_PingElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemWidget_PingElementBase_GetParentMinimap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemWidget_PingElementBase, nullptr, "GetParentMinimap", nullptr, nullptr, sizeof(MapSystemWidget_PingElementBase_eventGetParentMinimap_Parms), Z_Construct_UFunction_UMapSystemWidget_PingElementBase_GetParentMinimap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidget_PingElementBase_GetParentMinimap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemWidget_PingElementBase_GetParentMinimap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidget_PingElementBase_GetParentMinimap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemWidget_PingElementBase_GetParentMinimap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemWidget_PingElementBase_GetParentMinimap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemWidget_PingElementBase_InitializePing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemWidget_PingElementBase_InitializePing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemWidget_PingElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemWidget_PingElementBase_InitializePing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemWidget_PingElementBase, nullptr, "InitializePing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemWidget_PingElementBase_InitializePing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidget_PingElementBase_InitializePing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemWidget_PingElementBase_InitializePing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemWidget_PingElementBase_InitializePing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemWidget_PingElementBase_SetPositionInCanvas_Statics
	{
		struct MapSystemWidget_PingElementBase_eventSetPositionInCanvas_Parms
		{
			FVector2D PingLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PingLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemWidget_PingElementBase_SetPositionInCanvas_Statics::NewProp_PingLocation = { "PingLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemWidget_PingElementBase_eventSetPositionInCanvas_Parms, PingLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemWidget_PingElementBase_SetPositionInCanvas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemWidget_PingElementBase_SetPositionInCanvas_Statics::NewProp_PingLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemWidget_PingElementBase_SetPositionInCanvas_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemWidget_PingElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemWidget_PingElementBase_SetPositionInCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemWidget_PingElementBase, nullptr, "SetPositionInCanvas", nullptr, nullptr, sizeof(MapSystemWidget_PingElementBase_eventSetPositionInCanvas_Parms), Z_Construct_UFunction_UMapSystemWidget_PingElementBase_SetPositionInCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidget_PingElementBase_SetPositionInCanvas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemWidget_PingElementBase_SetPositionInCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidget_PingElementBase_SetPositionInCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemWidget_PingElementBase_SetPositionInCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemWidget_PingElementBase_SetPositionInCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMapSystemWidget_PingElementBase_NoRegister()
	{
		return UMapSystemWidget_PingElementBase::StaticClass();
	}
	struct Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PingLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PingLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentMinimap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentMinimap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinBound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxBound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ElementOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SolsticeMinimap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapSystemWidget_PingElementBase_GetParentMinimap, "GetParentMinimap" }, // 3226917933
		{ &Z_Construct_UFunction_UMapSystemWidget_PingElementBase_InitializePing, "InitializePing" }, // 3803436489
		{ &Z_Construct_UFunction_UMapSystemWidget_PingElementBase_SetPositionInCanvas, "SetPositionInCanvas" }, // 3698062605
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MapSystemWidget_PingElementBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MapSystemWidget_PingElementBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_PingLoc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidget_PingElementBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidget_PingElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_PingLoc = { "PingLoc", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidget_PingElementBase, PingLoc), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_PingLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_PingLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_ParentMinimap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidget_PingElementBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystemWidget_PingElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_ParentMinimap = { "ParentMinimap", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidget_PingElementBase, ParentMinimap), Z_Construct_UClass_UMapSystem_MinimapWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_ParentMinimap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_ParentMinimap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_MinBound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidget_PingElementBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidget_PingElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_MinBound = { "MinBound", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidget_PingElementBase, MinBound), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_MinBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_MinBound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_MaxBound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidget_PingElementBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidget_PingElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_MaxBound = { "MaxBound", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidget_PingElementBase, MaxBound), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_MaxBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_MaxBound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_ElementOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidget_PingElementBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidget_PingElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_ElementOffset = { "ElementOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidget_PingElementBase, ElementOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_ElementOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_ElementOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_EdgeOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidget_PingElementBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidget_PingElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_EdgeOffset = { "EdgeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidget_PingElementBase, EdgeOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_EdgeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_EdgeOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_PingLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_ParentMinimap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_MinBound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_MaxBound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_ElementOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::NewProp_EdgeOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapSystemWidget_PingElementBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::ClassParams = {
		&UMapSystemWidget_PingElementBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapSystemWidget_PingElementBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMapSystemWidget_PingElementBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMapSystemWidget_PingElementBase, 2440380705);
	template<> SOLSTICEMINIMAP_API UClass* StaticClass<UMapSystemWidget_PingElementBase>()
	{
		return UMapSystemWidget_PingElementBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapSystemWidget_PingElementBase(Z_Construct_UClass_UMapSystemWidget_PingElementBase, &UMapSystemWidget_PingElementBase::StaticClass, TEXT("/Script/SolsticeMinimap"), TEXT("UMapSystemWidget_PingElementBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapSystemWidget_PingElementBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
