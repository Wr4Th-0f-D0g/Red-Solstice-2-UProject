// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolsticeMinimap/Public/MapSystem_MinimapElementBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapSystem_MinimapElementBase() {}
// Cross Module References
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_MinimapElementBase_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_MinimapElementBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SolsticeMinimap();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_AMapSystemManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMapSystem_MinimapElementBase::execGetMinimapActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetMinimapActor();
		P_NATIVE_END;
	}
	static FName NAME_UMapSystem_MinimapElementBase_OnElementIconChanged = FName(TEXT("OnElementIconChanged"));
	void UMapSystem_MinimapElementBase::OnElementIconChanged(UObject* NewElementIcon, FLinearColor NewTint)
	{
		MapSystem_MinimapElementBase_eventOnElementIconChanged_Parms Parms;
		Parms.NewElementIcon=NewElementIcon;
		Parms.NewTint=NewTint;
		ProcessEvent(FindFunctionChecked(NAME_UMapSystem_MinimapElementBase_OnElementIconChanged),&Parms);
	}
	static FName NAME_UMapSystem_MinimapElementBase_OnMinimapElementInitialized = FName(TEXT("OnMinimapElementInitialized"));
	void UMapSystem_MinimapElementBase::OnMinimapElementInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMapSystem_MinimapElementBase_OnMinimapElementInitialized),NULL);
	}
	static FName NAME_UMapSystem_MinimapElementBase_OnReceiveCurrentTransform = FName(TEXT("OnReceiveCurrentTransform"));
	void UMapSystem_MinimapElementBase::OnReceiveCurrentTransform(FTransform ActorTransform)
	{
		MapSystem_MinimapElementBase_eventOnReceiveCurrentTransform_Parms Parms;
		Parms.ActorTransform=ActorTransform;
		ProcessEvent(FindFunctionChecked(NAME_UMapSystem_MinimapElementBase_OnReceiveCurrentTransform),&Parms);
	}
	static FName NAME_UMapSystem_MinimapElementBase_OnWidgetInRange = FName(TEXT("OnWidgetInRange"));
	void UMapSystem_MinimapElementBase::OnWidgetInRange()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMapSystem_MinimapElementBase_OnWidgetInRange),NULL);
	}
	static FName NAME_UMapSystem_MinimapElementBase_OnWidgetOutOfRange = FName(TEXT("OnWidgetOutOfRange"));
	void UMapSystem_MinimapElementBase::OnWidgetOutOfRange()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMapSystem_MinimapElementBase_OnWidgetOutOfRange),NULL);
	}
	void UMapSystem_MinimapElementBase::StaticRegisterNativesUMapSystem_MinimapElementBase()
	{
		UClass* Class = UMapSystem_MinimapElementBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMinimapActor", &UMapSystem_MinimapElementBase::execGetMinimapActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapSystem_MinimapElementBase_GetMinimapActor_Statics
	{
		struct MapSystem_MinimapElementBase_eventGetMinimapActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSystem_MinimapElementBase_GetMinimapActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MinimapElementBase_eventGetMinimapActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MinimapElementBase_GetMinimapActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MinimapElementBase_GetMinimapActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MinimapElementBase_GetMinimapActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MinimapElementBase_GetMinimapActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MinimapElementBase, nullptr, "GetMinimapActor", nullptr, nullptr, sizeof(MapSystem_MinimapElementBase_eventGetMinimapActor_Parms), Z_Construct_UFunction_UMapSystem_MinimapElementBase_GetMinimapActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapElementBase_GetMinimapActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MinimapElementBase_GetMinimapActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapElementBase_GetMinimapActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MinimapElementBase_GetMinimapActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MinimapElementBase_GetMinimapActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnElementIconChanged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewElementIcon;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnElementIconChanged_Statics::NewProp_NewElementIcon = { "NewElementIcon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MinimapElementBase_eventOnElementIconChanged_Parms, NewElementIcon), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnElementIconChanged_Statics::NewProp_NewTint = { "NewTint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MinimapElementBase_eventOnElementIconChanged_Parms, NewTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnElementIconChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnElementIconChanged_Statics::NewProp_NewElementIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnElementIconChanged_Statics::NewProp_NewTint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnElementIconChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnElementIconChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MinimapElementBase, nullptr, "OnElementIconChanged", nullptr, nullptr, sizeof(MapSystem_MinimapElementBase_eventOnElementIconChanged_Parms), Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnElementIconChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnElementIconChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnElementIconChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnElementIconChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnElementIconChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnElementIconChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnMinimapElementInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnMinimapElementInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnMinimapElementInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MinimapElementBase, nullptr, "OnMinimapElementInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnMinimapElementInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnMinimapElementInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnMinimapElementInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnMinimapElementInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnReceiveCurrentTransform_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnReceiveCurrentTransform_Statics::NewProp_ActorTransform = { "ActorTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MinimapElementBase_eventOnReceiveCurrentTransform_Parms, ActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnReceiveCurrentTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnReceiveCurrentTransform_Statics::NewProp_ActorTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnReceiveCurrentTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnReceiveCurrentTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MinimapElementBase, nullptr, "OnReceiveCurrentTransform", nullptr, nullptr, sizeof(MapSystem_MinimapElementBase_eventOnReceiveCurrentTransform_Parms), Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnReceiveCurrentTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnReceiveCurrentTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnReceiveCurrentTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnReceiveCurrentTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnReceiveCurrentTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnReceiveCurrentTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnWidgetInRange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnWidgetInRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnWidgetInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MinimapElementBase, nullptr, "OnWidgetInRange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnWidgetInRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnWidgetInRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnWidgetInRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnWidgetInRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnWidgetOutOfRange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnWidgetOutOfRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnWidgetOutOfRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MinimapElementBase, nullptr, "OnWidgetOutOfRange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnWidgetOutOfRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnWidgetOutOfRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnWidgetOutOfRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnWidgetOutOfRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMapSystem_MinimapElementBase_NoRegister()
	{
		return UMapSystem_MinimapElementBase::StaticClass();
	}
	struct Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CanvasSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSizeOffset_MetaData[];
#endif
		static void NewProp_bIsSizeOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSizeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObserverPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObserverPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MinimapActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStatic_MetaData[];
#endif
		static void NewProp_bIsStatic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStatic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinBound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxBound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCentralizedPlayer_MetaData[];
#endif
		static void NewProp_bCentralizedPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCentralizedPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImageSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ElementIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementPointerIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ElementPointerIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowIconOnMinimap_MetaData[];
#endif
		static void NewProp_bShowIconOnMinimap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowIconOnMinimap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RangeIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RangeTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowRadius_MetaData[];
#endif
		static void NewProp_bShowRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasRadiusShown_MetaData[];
#endif
		static void NewProp_bHasRadiusShown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasRadiusShown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMinimap_MetaData[];
#endif
		static void NewProp_bIsMinimap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMinimap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ElementOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFixedRotation_MetaData[];
#endif
		static void NewProp_bFixedRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFixedRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowRotationChange_MetaData[];
#endif
		static void NewProp_bAllowRotationChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRotationChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowPointerRotationChange_MetaData[];
#endif
		static void NewProp_bAllowPointerRotationChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowPointerRotationChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysVisibleInRange_MetaData[];
#endif
		static void NewProp_bAlwaysVisibleInRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysVisibleInRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisibilityRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ElementImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SolsticeMinimap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapSystem_MinimapElementBase_GetMinimapActor, "GetMinimapActor" }, // 1865537105
		{ &Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnElementIconChanged, "OnElementIconChanged" }, // 742253363
		{ &Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnMinimapElementInitialized, "OnMinimapElementInitialized" }, // 4143651688
		{ &Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnReceiveCurrentTransform, "OnReceiveCurrentTransform" }, // 3450289382
		{ &Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnWidgetInRange, "OnWidgetInRange" }, // 2776990669
		{ &Z_Construct_UFunction_UMapSystem_MinimapElementBase_OnWidgetOutOfRange, "OnWidgetOutOfRange" }, // 3678067318
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MapSystem_MinimapElementBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_CanvasSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_CanvasSlot = { "CanvasSlot", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapElementBase, CanvasSlot), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_CanvasSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_CanvasSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bIsSizeOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bIsSizeOffset_SetBit(void* Obj)
	{
		((UMapSystem_MinimapElementBase*)Obj)->bIsSizeOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bIsSizeOffset = { "bIsSizeOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystem_MinimapElementBase), &Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bIsSizeOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bIsSizeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bIsSizeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_MapManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_MapManager = { "MapManager", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapElementBase, MapManager), Z_Construct_UClass_AMapSystemManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_MapManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_MapManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ObserverPawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ObserverPawn = { "ObserverPawn", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapElementBase, ObserverPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ObserverPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ObserverPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_MinimapActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_MinimapActor = { "MinimapActor", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapElementBase, MinimapActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_MinimapActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_MinimapActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_CachedLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_CachedLocation = { "CachedLocation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapElementBase, CachedLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_CachedLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_CachedLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bIsStatic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bIsStatic_SetBit(void* Obj)
	{
		((UMapSystem_MinimapElementBase*)Obj)->bIsStatic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bIsStatic = { "bIsStatic", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystem_MinimapElementBase), &Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bIsStatic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bIsStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bIsStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_MinBound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_MinBound = { "MinBound", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapElementBase, MinBound), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_MinBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_MinBound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_MaxBound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_MaxBound = { "MaxBound", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapElementBase, MaxBound), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_MaxBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_MaxBound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bCentralizedPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bCentralizedPlayer_SetBit(void* Obj)
	{
		((UMapSystem_MinimapElementBase*)Obj)->bCentralizedPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bCentralizedPlayer = { "bCentralizedPlayer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystem_MinimapElementBase), &Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bCentralizedPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bCentralizedPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bCentralizedPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ImageSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ImageSize = { "ImageSize", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapElementBase, ImageSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ImageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ImageSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ElementIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ElementIcon = { "ElementIcon", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapElementBase, ElementIcon), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ElementIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ElementIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ElementPointerIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ElementPointerIcon = { "ElementPointerIcon", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapElementBase, ElementPointerIcon), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ElementPointerIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ElementPointerIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_Tint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapElementBase, Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bShowIconOnMinimap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bShowIconOnMinimap_SetBit(void* Obj)
	{
		((UMapSystem_MinimapElementBase*)Obj)->bShowIconOnMinimap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bShowIconOnMinimap = { "bShowIconOnMinimap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystem_MinimapElementBase), &Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bShowIconOnMinimap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bShowIconOnMinimap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bShowIconOnMinimap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_RangeIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_RangeIcon = { "RangeIcon", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapElementBase, RangeIcon), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_RangeIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_RangeIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_RangeTint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_RangeTint = { "RangeTint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapElementBase, RangeTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_RangeTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_RangeTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bShowRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bShowRadius_SetBit(void* Obj)
	{
		((UMapSystem_MinimapElementBase*)Obj)->bShowRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bShowRadius = { "bShowRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystem_MinimapElementBase), &Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bShowRadius_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bShowRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bShowRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapElementBase, Radius), METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bHasRadiusShown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bHasRadiusShown_SetBit(void* Obj)
	{
		((UMapSystem_MinimapElementBase*)Obj)->bHasRadiusShown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bHasRadiusShown = { "bHasRadiusShown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystem_MinimapElementBase), &Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bHasRadiusShown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bHasRadiusShown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bHasRadiusShown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bIsMinimap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bIsMinimap_SetBit(void* Obj)
	{
		((UMapSystem_MinimapElementBase*)Obj)->bIsMinimap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bIsMinimap = { "bIsMinimap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystem_MinimapElementBase), &Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bIsMinimap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bIsMinimap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bIsMinimap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ElementOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ElementOffset = { "ElementOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapElementBase, ElementOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ElementOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ElementOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bFixedRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bFixedRotation_SetBit(void* Obj)
	{
		((UMapSystem_MinimapElementBase*)Obj)->bFixedRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bFixedRotation = { "bFixedRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystem_MinimapElementBase), &Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bFixedRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bFixedRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bFixedRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bAllowRotationChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bAllowRotationChange_SetBit(void* Obj)
	{
		((UMapSystem_MinimapElementBase*)Obj)->bAllowRotationChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bAllowRotationChange = { "bAllowRotationChange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystem_MinimapElementBase), &Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bAllowRotationChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bAllowRotationChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bAllowRotationChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bAllowPointerRotationChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bAllowPointerRotationChange_SetBit(void* Obj)
	{
		((UMapSystem_MinimapElementBase*)Obj)->bAllowPointerRotationChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bAllowPointerRotationChange = { "bAllowPointerRotationChange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystem_MinimapElementBase), &Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bAllowPointerRotationChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bAllowPointerRotationChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bAllowPointerRotationChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bAlwaysVisibleInRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bAlwaysVisibleInRange_SetBit(void* Obj)
	{
		((UMapSystem_MinimapElementBase*)Obj)->bAlwaysVisibleInRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bAlwaysVisibleInRange = { "bAlwaysVisibleInRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystem_MinimapElementBase), &Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bAlwaysVisibleInRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bAlwaysVisibleInRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bAlwaysVisibleInRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_VisibilityRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_VisibilityRadius = { "VisibilityRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapElementBase, VisibilityRadius), METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_VisibilityRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_VisibilityRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ElementImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapElementBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ElementImage = { "ElementImage", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapElementBase, ElementImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ElementImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ElementImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_CanvasSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bIsSizeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_MapManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ObserverPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_MinimapActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_CachedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bIsStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_MinBound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_MaxBound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bCentralizedPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ImageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ElementIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ElementPointerIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bShowIconOnMinimap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_RangeIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_RangeTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bShowRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bHasRadiusShown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bIsMinimap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ElementOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bFixedRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bAllowRotationChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bAllowPointerRotationChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_bAlwaysVisibleInRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_VisibilityRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::NewProp_ElementImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapSystem_MinimapElementBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::ClassParams = {
		&UMapSystem_MinimapElementBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapSystem_MinimapElementBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMapSystem_MinimapElementBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMapSystem_MinimapElementBase, 1276036207);
	template<> SOLSTICEMINIMAP_API UClass* StaticClass<UMapSystem_MinimapElementBase>()
	{
		return UMapSystem_MinimapElementBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapSystem_MinimapElementBase(Z_Construct_UClass_UMapSystem_MinimapElementBase, &UMapSystem_MinimapElementBase::StaticClass, TEXT("/Script/SolsticeMinimap"), TEXT("UMapSystem_MinimapElementBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapSystem_MinimapElementBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
