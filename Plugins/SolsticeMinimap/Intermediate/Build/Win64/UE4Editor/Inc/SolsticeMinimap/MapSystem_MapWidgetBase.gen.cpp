// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolsticeMinimap/Public/MapSystem_MapWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapSystem_MapWidgetBase() {}
// Cross Module References
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_MapWidgetBase_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_MapWidgetBase();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystemWidgetBase();
	UPackage* Z_Construct_UPackage__Script_SolsticeMinimap();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_MapElementBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMapSystem_MapWidgetBase::execGetScreenLocationFromWorld)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldLoc);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetScreenLocationFromWorld(Z_Param_WorldLoc);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystem_MapWidgetBase::execGetWorldLocationFromMousePosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWorldLocationFromMousePosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystem_MapWidgetBase::execPanForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ForwardPanAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PanForward(Z_Param_ForwardPanAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystem_MapWidgetBase::execPanRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RightPanAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PanRight(Z_Param_RightPanAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystem_MapWidgetBase::execResetDefaultZoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetDefaultZoom();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystem_MapWidgetBase::execSetElementPosition)
	{
		P_GET_OBJECT(ACharacter,Z_Param_PlayerCharacter);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RotationYaw);
		P_GET_OBJECT(UMapSystem_MapElementBase,Z_Param_ElementWidget);
		P_GET_UBOOL(Z_Param_bSizeOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetElementPosition(Z_Param_PlayerCharacter,Z_Param_Out_Location,Z_Param_RotationYaw,Z_Param_ElementWidget,Z_Param_bSizeOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystem_MapWidgetBase::execUpdateElements)
	{
		P_GET_UBOOL(Z_Param_bSizeOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateElements(Z_Param_bSizeOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystem_MapWidgetBase::execZoomAtCanvasPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ZoomValue);
		P_GET_STRUCT(FVector2D,Z_Param_CanvasPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomAtCanvasPosition(Z_Param_ZoomValue,Z_Param_CanvasPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystem_MapWidgetBase::execZoomInOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ZoomValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomInOut(Z_Param_ZoomValue);
		P_NATIVE_END;
	}
	static FName NAME_UMapSystem_MapWidgetBase_OnMapInitialized = FName(TEXT("OnMapInitialized"));
	void UMapSystem_MapWidgetBase::OnMapInitialized(UMaterialInterface* Material)
	{
		MapSystem_MapWidgetBase_eventOnMapInitialized_Parms Parms;
		Parms.Material=Material;
		ProcessEvent(FindFunctionChecked(NAME_UMapSystem_MapWidgetBase_OnMapInitialized),&Parms);
	}
	static FName NAME_UMapSystem_MapWidgetBase_SetRenderTargets = FName(TEXT("SetRenderTargets"));
	void UMapSystem_MapWidgetBase::SetRenderTargets()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMapSystem_MapWidgetBase_SetRenderTargets),NULL);
	}
	void UMapSystem_MapWidgetBase::StaticRegisterNativesUMapSystem_MapWidgetBase()
	{
		UClass* Class = UMapSystem_MapWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScreenLocationFromWorld", &UMapSystem_MapWidgetBase::execGetScreenLocationFromWorld },
			{ "GetWorldLocationFromMousePosition", &UMapSystem_MapWidgetBase::execGetWorldLocationFromMousePosition },
			{ "PanForward", &UMapSystem_MapWidgetBase::execPanForward },
			{ "PanRight", &UMapSystem_MapWidgetBase::execPanRight },
			{ "ResetDefaultZoom", &UMapSystem_MapWidgetBase::execResetDefaultZoom },
			{ "SetElementPosition", &UMapSystem_MapWidgetBase::execSetElementPosition },
			{ "UpdateElements", &UMapSystem_MapWidgetBase::execUpdateElements },
			{ "ZoomAtCanvasPosition", &UMapSystem_MapWidgetBase::execZoomAtCanvasPosition },
			{ "ZoomInOut", &UMapSystem_MapWidgetBase::execZoomInOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetScreenLocationFromWorld_Statics
	{
		struct MapSystem_MapWidgetBase_eventGetScreenLocationFromWorld_Parms
		{
			FVector WorldLoc;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLoc;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetScreenLocationFromWorld_Statics::NewProp_WorldLoc = { "WorldLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MapWidgetBase_eventGetScreenLocationFromWorld_Parms, WorldLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetScreenLocationFromWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MapWidgetBase_eventGetScreenLocationFromWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetScreenLocationFromWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetScreenLocationFromWorld_Statics::NewProp_WorldLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetScreenLocationFromWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetScreenLocationFromWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetScreenLocationFromWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MapWidgetBase, nullptr, "GetScreenLocationFromWorld", nullptr, nullptr, sizeof(MapSystem_MapWidgetBase_eventGetScreenLocationFromWorld_Parms), Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetScreenLocationFromWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetScreenLocationFromWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetScreenLocationFromWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetScreenLocationFromWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetScreenLocationFromWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetScreenLocationFromWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetWorldLocationFromMousePosition_Statics
	{
		struct MapSystem_MapWidgetBase_eventGetWorldLocationFromMousePosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetWorldLocationFromMousePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MapWidgetBase_eventGetWorldLocationFromMousePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetWorldLocationFromMousePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetWorldLocationFromMousePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetWorldLocationFromMousePosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetWorldLocationFromMousePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MapWidgetBase, nullptr, "GetWorldLocationFromMousePosition", nullptr, nullptr, sizeof(MapSystem_MapWidgetBase_eventGetWorldLocationFromMousePosition_Parms), Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetWorldLocationFromMousePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetWorldLocationFromMousePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetWorldLocationFromMousePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetWorldLocationFromMousePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetWorldLocationFromMousePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetWorldLocationFromMousePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MapWidgetBase_OnMapInitialized_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_OnMapInitialized_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MapWidgetBase_eventOnMapInitialized_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MapWidgetBase_OnMapInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MapWidgetBase_OnMapInitialized_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapWidgetBase_OnMapInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_OnMapInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MapWidgetBase, nullptr, "OnMapInitialized", nullptr, nullptr, sizeof(MapSystem_MapWidgetBase_eventOnMapInitialized_Parms), Z_Construct_UFunction_UMapSystem_MapWidgetBase_OnMapInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapWidgetBase_OnMapInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapWidgetBase_OnMapInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapWidgetBase_OnMapInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MapWidgetBase_OnMapInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MapWidgetBase_OnMapInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanForward_Statics
	{
		struct MapSystem_MapWidgetBase_eventPanForward_Parms
		{
			float ForwardPanAxis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardPanAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanForward_Statics::NewProp_ForwardPanAxis = { "ForwardPanAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MapWidgetBase_eventPanForward_Parms, ForwardPanAxis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanForward_Statics::NewProp_ForwardPanAxis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MapWidgetBase, nullptr, "PanForward", nullptr, nullptr, sizeof(MapSystem_MapWidgetBase_eventPanForward_Parms), Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanRight_Statics
	{
		struct MapSystem_MapWidgetBase_eventPanRight_Parms
		{
			float RightPanAxis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightPanAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanRight_Statics::NewProp_RightPanAxis = { "RightPanAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MapWidgetBase_eventPanRight_Parms, RightPanAxis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanRight_Statics::NewProp_RightPanAxis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MapWidgetBase, nullptr, "PanRight", nullptr, nullptr, sizeof(MapSystem_MapWidgetBase_eventPanRight_Parms), Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MapWidgetBase_ResetDefaultZoom_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapWidgetBase_ResetDefaultZoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_ResetDefaultZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MapWidgetBase, nullptr, "ResetDefaultZoom", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapWidgetBase_ResetDefaultZoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapWidgetBase_ResetDefaultZoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MapWidgetBase_ResetDefaultZoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MapWidgetBase_ResetDefaultZoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics
	{
		struct MapSystem_MapWidgetBase_eventSetElementPosition_Parms
		{
			ACharacter* PlayerCharacter;
			FVector Location;
			float RotationYaw;
			UMapSystem_MapElementBase* ElementWidget;
			bool bSizeOffset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ElementWidget;
		static void NewProp_bSizeOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSizeOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MapWidgetBase_eventSetElementPosition_Parms, PlayerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MapWidgetBase_eventSetElementPosition_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::NewProp_RotationYaw = { "RotationYaw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MapWidgetBase_eventSetElementPosition_Parms, RotationYaw), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::NewProp_ElementWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::NewProp_ElementWidget = { "ElementWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MapWidgetBase_eventSetElementPosition_Parms, ElementWidget), Z_Construct_UClass_UMapSystem_MapElementBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::NewProp_ElementWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::NewProp_ElementWidget_MetaData)) };
	void Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::NewProp_bSizeOffset_SetBit(void* Obj)
	{
		((MapSystem_MapWidgetBase_eventSetElementPosition_Parms*)Obj)->bSizeOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::NewProp_bSizeOffset = { "bSizeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystem_MapWidgetBase_eventSetElementPosition_Parms), &Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::NewProp_bSizeOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::NewProp_PlayerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::NewProp_RotationYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::NewProp_ElementWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::NewProp_bSizeOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MapWidgetBase, nullptr, "SetElementPosition", nullptr, nullptr, sizeof(MapSystem_MapWidgetBase_eventSetElementPosition_Parms), Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetRenderTargets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetRenderTargets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetRenderTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MapWidgetBase, nullptr, "SetRenderTargets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetRenderTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetRenderTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetRenderTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetRenderTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MapWidgetBase_UpdateElements_Statics
	{
		struct MapSystem_MapWidgetBase_eventUpdateElements_Parms
		{
			bool bSizeOffset;
		};
		static void NewProp_bSizeOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSizeOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMapSystem_MapWidgetBase_UpdateElements_Statics::NewProp_bSizeOffset_SetBit(void* Obj)
	{
		((MapSystem_MapWidgetBase_eventUpdateElements_Parms*)Obj)->bSizeOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_UpdateElements_Statics::NewProp_bSizeOffset = { "bSizeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystem_MapWidgetBase_eventUpdateElements_Parms), &Z_Construct_UFunction_UMapSystem_MapWidgetBase_UpdateElements_Statics::NewProp_bSizeOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MapWidgetBase_UpdateElements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MapWidgetBase_UpdateElements_Statics::NewProp_bSizeOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapWidgetBase_UpdateElements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_UpdateElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MapWidgetBase, nullptr, "UpdateElements", nullptr, nullptr, sizeof(MapSystem_MapWidgetBase_eventUpdateElements_Parms), Z_Construct_UFunction_UMapSystem_MapWidgetBase_UpdateElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapWidgetBase_UpdateElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapWidgetBase_UpdateElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapWidgetBase_UpdateElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MapWidgetBase_UpdateElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MapWidgetBase_UpdateElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomAtCanvasPosition_Statics
	{
		struct MapSystem_MapWidgetBase_eventZoomAtCanvasPosition_Parms
		{
			float ZoomValue;
			FVector2D CanvasPosition;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomAtCanvasPosition_Statics::NewProp_ZoomValue = { "ZoomValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MapWidgetBase_eventZoomAtCanvasPosition_Parms, ZoomValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomAtCanvasPosition_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MapWidgetBase_eventZoomAtCanvasPosition_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomAtCanvasPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomAtCanvasPosition_Statics::NewProp_ZoomValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomAtCanvasPosition_Statics::NewProp_CanvasPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomAtCanvasPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomAtCanvasPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MapWidgetBase, nullptr, "ZoomAtCanvasPosition", nullptr, nullptr, sizeof(MapSystem_MapWidgetBase_eventZoomAtCanvasPosition_Parms), Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomAtCanvasPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomAtCanvasPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomAtCanvasPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomAtCanvasPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomAtCanvasPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomAtCanvasPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomInOut_Statics
	{
		struct MapSystem_MapWidgetBase_eventZoomInOut_Parms
		{
			float ZoomValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomInOut_Statics::NewProp_ZoomValue = { "ZoomValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MapWidgetBase_eventZoomInOut_Parms, ZoomValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomInOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomInOut_Statics::NewProp_ZoomValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomInOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomInOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MapWidgetBase, nullptr, "ZoomInOut", nullptr, nullptr, sizeof(MapSystem_MapWidgetBase_eventZoomInOut_Parms), Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomInOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomInOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomInOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomInOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomInOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomInOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMapSystem_MapWidgetBase_NoRegister()
	{
		return UMapSystem_MapWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialCanvasSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialCanvasSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialCanvasPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialCanvasPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCanvasInitialParametersSet_MetaData[];
#endif
		static void NewProp_bIsCanvasInitialParametersSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCanvasInitialParametersSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentZoomLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentZoomLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PanSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PanSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumZoomLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumZoomLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumZoomLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumZoomLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultZoomLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultZoomLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ZoomSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSaveCurrentZoomLevel_MetaData[];
#endif
		static void NewProp_bSaveCurrentZoomLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveCurrentZoomLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMousePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentMousePosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMapSystemWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SolsticeMinimap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetScreenLocationFromWorld, "GetScreenLocationFromWorld" }, // 1876946182
		{ &Z_Construct_UFunction_UMapSystem_MapWidgetBase_GetWorldLocationFromMousePosition, "GetWorldLocationFromMousePosition" }, // 2439152213
		{ &Z_Construct_UFunction_UMapSystem_MapWidgetBase_OnMapInitialized, "OnMapInitialized" }, // 2736799958
		{ &Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanForward, "PanForward" }, // 1115286185
		{ &Z_Construct_UFunction_UMapSystem_MapWidgetBase_PanRight, "PanRight" }, // 534621655
		{ &Z_Construct_UFunction_UMapSystem_MapWidgetBase_ResetDefaultZoom, "ResetDefaultZoom" }, // 2905934206
		{ &Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetElementPosition, "SetElementPosition" }, // 785499869
		{ &Z_Construct_UFunction_UMapSystem_MapWidgetBase_SetRenderTargets, "SetRenderTargets" }, // 4281625217
		{ &Z_Construct_UFunction_UMapSystem_MapWidgetBase_UpdateElements, "UpdateElements" }, // 3763244237
		{ &Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomAtCanvasPosition, "ZoomAtCanvasPosition" }, // 1985475259
		{ &Z_Construct_UFunction_UMapSystem_MapWidgetBase_ZoomInOut, "ZoomInOut" }, // 3080411511
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MapSystem_MapWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_MapMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_MapMaterial = { "MapMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapWidgetBase, MapMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_MapMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_MapMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_InitialAlignment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_InitialAlignment = { "InitialAlignment", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapWidgetBase, InitialAlignment), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_InitialAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_InitialAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_InitialCanvasSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_InitialCanvasSize = { "InitialCanvasSize", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapWidgetBase, InitialCanvasSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_InitialCanvasSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_InitialCanvasSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_InitialCanvasPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_InitialCanvasPosition = { "InitialCanvasPosition", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapWidgetBase, InitialCanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_InitialCanvasPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_InitialCanvasPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_bIsCanvasInitialParametersSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_bIsCanvasInitialParametersSet_SetBit(void* Obj)
	{
		((UMapSystem_MapWidgetBase*)Obj)->bIsCanvasInitialParametersSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_bIsCanvasInitialParametersSet = { "bIsCanvasInitialParametersSet", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystem_MapWidgetBase), &Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_bIsCanvasInitialParametersSet_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_bIsCanvasInitialParametersSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_bIsCanvasInitialParametersSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_CurrentZoomLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_CurrentZoomLevel = { "CurrentZoomLevel", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapWidgetBase, CurrentZoomLevel), METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_CurrentZoomLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_CurrentZoomLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_PanSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_PanSpeed = { "PanSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapWidgetBase, PanSpeed), METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_PanSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_PanSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_MinimumZoomLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_MinimumZoomLevel = { "MinimumZoomLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapWidgetBase, MinimumZoomLevel), METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_MinimumZoomLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_MinimumZoomLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_MaximumZoomLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_MaximumZoomLevel = { "MaximumZoomLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapWidgetBase, MaximumZoomLevel), METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_MaximumZoomLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_MaximumZoomLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_DefaultZoomLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_DefaultZoomLevel = { "DefaultZoomLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapWidgetBase, DefaultZoomLevel), METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_DefaultZoomLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_DefaultZoomLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_ZoomSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapWidgetBase, ZoomSpeed), METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_ZoomSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_ZoomSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_bSaveCurrentZoomLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_bSaveCurrentZoomLevel_SetBit(void* Obj)
	{
		((UMapSystem_MapWidgetBase*)Obj)->bSaveCurrentZoomLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_bSaveCurrentZoomLevel = { "bSaveCurrentZoomLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystem_MapWidgetBase), &Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_bSaveCurrentZoomLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_bSaveCurrentZoomLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_bSaveCurrentZoomLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_CurrentMousePosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_CurrentMousePosition = { "CurrentMousePosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapWidgetBase, CurrentMousePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_CurrentMousePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_CurrentMousePosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_MapMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_InitialAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_InitialCanvasSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_InitialCanvasPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_bIsCanvasInitialParametersSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_CurrentZoomLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_PanSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_MinimumZoomLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_MaximumZoomLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_DefaultZoomLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_ZoomSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_bSaveCurrentZoomLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::NewProp_CurrentMousePosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapSystem_MapWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::ClassParams = {
		&UMapSystem_MapWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapSystem_MapWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMapSystem_MapWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMapSystem_MapWidgetBase, 2026336519);
	template<> SOLSTICEMINIMAP_API UClass* StaticClass<UMapSystem_MapWidgetBase>()
	{
		return UMapSystem_MapWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapSystem_MapWidgetBase(Z_Construct_UClass_UMapSystem_MapWidgetBase, &UMapSystem_MapWidgetBase::StaticClass, TEXT("/Script/SolsticeMinimap"), TEXT("UMapSystem_MapWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapSystem_MapWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
