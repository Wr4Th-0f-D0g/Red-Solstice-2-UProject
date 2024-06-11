// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolsticeMinimap/Public/MapSystem_TooltipWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapSystem_TooltipWidgetBase() {}
// Cross Module References
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_TooltipWidgetBase_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_TooltipWidgetBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SolsticeMinimap();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	static FName NAME_UMapSystem_TooltipWidgetBase_OnToolTipInitialized = FName(TEXT("OnToolTipInitialized"));
	void UMapSystem_TooltipWidgetBase::OnToolTipInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMapSystem_TooltipWidgetBase_OnToolTipInitialized),NULL);
	}
	void UMapSystem_TooltipWidgetBase::StaticRegisterNativesUMapSystem_TooltipWidgetBase()
	{
	}
	struct Z_Construct_UFunction_UMapSystem_TooltipWidgetBase_OnToolTipInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_TooltipWidgetBase_OnToolTipInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_TooltipWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_TooltipWidgetBase_OnToolTipInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_TooltipWidgetBase, nullptr, "OnToolTipInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_TooltipWidgetBase_OnToolTipInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_TooltipWidgetBase_OnToolTipInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_TooltipWidgetBase_OnToolTipInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_TooltipWidgetBase_OnToolTipInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMapSystem_TooltipWidgetBase_NoRegister()
	{
		return UMapSystem_TooltipWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentActor;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ToolTipData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolTipData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ToolTipData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFromPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFromPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDistance_MetaData[];
#endif
		static void NewProp_bShowDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CanvasOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SolsticeMinimap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapSystem_TooltipWidgetBase_OnToolTipInitialized, "OnToolTipInitialized" }, // 2471113688
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MapSystem_TooltipWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MapSystem_TooltipWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_ParentActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_TooltipWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_TooltipWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_ParentActor = { "ParentActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_TooltipWidgetBase, ParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_ParentActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_ParentActor_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_ToolTipData_Inner = { "ToolTipData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_ToolTipData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_TooltipWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_TooltipWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_ToolTipData = { "ToolTipData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_TooltipWidgetBase, ToolTipData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_ToolTipData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_ToolTipData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_DistanceFromPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_TooltipWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_TooltipWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_DistanceFromPlayer = { "DistanceFromPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_TooltipWidgetBase, DistanceFromPlayer), METADATA_PARAMS(Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_DistanceFromPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_DistanceFromPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_bShowDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_TooltipWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_TooltipWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_bShowDistance_SetBit(void* Obj)
	{
		((UMapSystem_TooltipWidgetBase*)Obj)->bShowDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_bShowDistance = { "bShowDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystem_TooltipWidgetBase), &Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_bShowDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_bShowDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_bShowDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_TooltipWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_TooltipWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_TooltipWidgetBase, HorizontalAlignment), METADATA_PARAMS(Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_HorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_TooltipWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_TooltipWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_TooltipWidgetBase, VerticalAlignment), METADATA_PARAMS(Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_CanvasOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_TooltipWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_TooltipWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_CanvasOffset = { "CanvasOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_TooltipWidgetBase, CanvasOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_CanvasOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_CanvasOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_TooltipWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_TooltipWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_TooltipWidgetBase, PlayerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_PlayerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_PlayerCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_ParentActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_ToolTipData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_ToolTipData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_DistanceFromPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_bShowDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_HorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_VerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_CanvasOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::NewProp_PlayerCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapSystem_TooltipWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::ClassParams = {
		&UMapSystem_TooltipWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapSystem_TooltipWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMapSystem_TooltipWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMapSystem_TooltipWidgetBase, 2543040315);
	template<> SOLSTICEMINIMAP_API UClass* StaticClass<UMapSystem_TooltipWidgetBase>()
	{
		return UMapSystem_TooltipWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapSystem_TooltipWidgetBase(Z_Construct_UClass_UMapSystem_TooltipWidgetBase, &UMapSystem_TooltipWidgetBase::StaticClass, TEXT("/Script/SolsticeMinimap"), TEXT("UMapSystem_TooltipWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapSystem_TooltipWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
