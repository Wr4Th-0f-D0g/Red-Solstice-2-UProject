// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolsticeMinimap/Public/MapSystemWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapSystemWidgetBase() {}
// Cross Module References
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystemWidgetBase_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystemWidgetBase();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
	UPackage* Z_Construct_UPackage__Script_SolsticeMinimap();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	SOLSTICEMINIMAP_API UScriptStruct* Z_Construct_UScriptStruct_FRenderTargetMinimap();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_AMapSystemManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMapSystemWidgetBase::execChangeTexture)
	{
		P_GET_OBJECT(UTexture,Z_Param_NewTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeTexture(Z_Param_NewTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemWidgetBase::execGetCanvasAlignment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetCanvasAlignment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemWidgetBase::execGetCanvasSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetCanvasSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemWidgetBase::execGetMapBounds)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutMinBounds);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutMaxBounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMapBounds(Z_Param_Out_OutMinBounds,Z_Param_Out_OutMaxBounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemWidgetBase::execGetPlayerCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACharacter**)Z_Param__Result=P_THIS->GetPlayerCharacter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemWidgetBase::execGetPlayerPositionDecentralized)
	{
		P_GET_STRUCT(FVector2D,Z_Param_TestCanvasSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetPlayerPositionDecentralized(Z_Param_TestCanvasSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemWidgetBase::execSetCanvasProperties)
	{
		P_GET_OBJECT(UCanvasPanel,Z_Param_Canvas);
		P_GET_OBJECT(UWidget,Z_Param_MapWidget);
		P_GET_OBJECT(UWidget,Z_Param_PlayerWidget);
		P_GET_OBJECT(UWidget,Z_Param_ObserverWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanvasProperties(Z_Param_Canvas,Z_Param_MapWidget,Z_Param_PlayerWidget,Z_Param_ObserverWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemWidgetBase::execSetObserverPositionInCanvas)
	{
		P_GET_UBOOL(Z_Param_bSizeOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObserverPositionInCanvas(Z_Param_bSizeOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemWidgetBase::execSetPlayerPositionInCanvas)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerPositionInCanvas();
		P_NATIVE_END;
	}
	static FName NAME_UMapSystemWidgetBase_ClearRenderTarget = FName(TEXT("ClearRenderTarget"));
	void UMapSystemWidgetBase::ClearRenderTarget()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMapSystemWidgetBase_ClearRenderTarget),NULL);
	}
	static FName NAME_UMapSystemWidgetBase_CreateRenderTarget = FName(TEXT("CreateRenderTarget"));
	void UMapSystemWidgetBase::CreateRenderTarget(TArray<FRenderTargetMinimap>& Targets)
	{
		MapSystemWidgetBase_eventCreateRenderTarget_Parms Parms;
		Parms.Targets=Targets;
		ProcessEvent(FindFunctionChecked(NAME_UMapSystemWidgetBase_CreateRenderTarget),&Parms);
		Targets=Parms.Targets;
	}
	void UMapSystemWidgetBase::StaticRegisterNativesUMapSystemWidgetBase()
	{
		UClass* Class = UMapSystemWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeTexture", &UMapSystemWidgetBase::execChangeTexture },
			{ "GetCanvasAlignment", &UMapSystemWidgetBase::execGetCanvasAlignment },
			{ "GetCanvasSize", &UMapSystemWidgetBase::execGetCanvasSize },
			{ "GetMapBounds", &UMapSystemWidgetBase::execGetMapBounds },
			{ "GetPlayerCharacter", &UMapSystemWidgetBase::execGetPlayerCharacter },
			{ "GetPlayerPositionDecentralized", &UMapSystemWidgetBase::execGetPlayerPositionDecentralized },
			{ "SetCanvasProperties", &UMapSystemWidgetBase::execSetCanvasProperties },
			{ "SetObserverPositionInCanvas", &UMapSystemWidgetBase::execSetObserverPositionInCanvas },
			{ "SetPlayerPositionInCanvas", &UMapSystemWidgetBase::execSetPlayerPositionInCanvas },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapSystemWidgetBase_ChangeTexture_Statics
	{
		struct MapSystemWidgetBase_eventChangeTexture_Parms
		{
			UTexture* NewTexture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSystemWidgetBase_ChangeTexture_Statics::NewProp_NewTexture = { "NewTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemWidgetBase_eventChangeTexture_Parms, NewTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemWidgetBase_ChangeTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemWidgetBase_ChangeTexture_Statics::NewProp_NewTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemWidgetBase_ChangeTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemWidgetBase_ChangeTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemWidgetBase, nullptr, "ChangeTexture", nullptr, nullptr, sizeof(MapSystemWidgetBase_eventChangeTexture_Parms), Z_Construct_UFunction_UMapSystemWidgetBase_ChangeTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_ChangeTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemWidgetBase_ChangeTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_ChangeTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemWidgetBase_ChangeTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemWidgetBase_ChangeTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemWidgetBase_ClearRenderTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemWidgetBase_ClearRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemWidgetBase_ClearRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemWidgetBase, nullptr, "ClearRenderTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemWidgetBase_ClearRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_ClearRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemWidgetBase_ClearRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemWidgetBase_ClearRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemWidgetBase_CreateRenderTarget_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Targets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemWidgetBase_CreateRenderTarget_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRenderTargetMinimap, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMapSystemWidgetBase_CreateRenderTarget_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemWidgetBase_eventCreateRenderTarget_Parms, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemWidgetBase_CreateRenderTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemWidgetBase_CreateRenderTarget_Statics::NewProp_Targets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemWidgetBase_CreateRenderTarget_Statics::NewProp_Targets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemWidgetBase_CreateRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemWidgetBase_CreateRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemWidgetBase, nullptr, "CreateRenderTarget", nullptr, nullptr, sizeof(MapSystemWidgetBase_eventCreateRenderTarget_Parms), Z_Construct_UFunction_UMapSystemWidgetBase_CreateRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_CreateRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemWidgetBase_CreateRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_CreateRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemWidgetBase_CreateRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemWidgetBase_CreateRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasAlignment_Statics
	{
		struct MapSystemWidgetBase_eventGetCanvasAlignment_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasAlignment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemWidgetBase_eventGetCanvasAlignment_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasAlignment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasAlignment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemWidgetBase, nullptr, "GetCanvasAlignment", nullptr, nullptr, sizeof(MapSystemWidgetBase_eventGetCanvasAlignment_Parms), Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasSize_Statics
	{
		struct MapSystemWidgetBase_eventGetCanvasSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemWidgetBase_eventGetCanvasSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemWidgetBase, nullptr, "GetCanvasSize", nullptr, nullptr, sizeof(MapSystemWidgetBase_eventGetCanvasSize_Parms), Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemWidgetBase_GetMapBounds_Statics
	{
		struct MapSystemWidgetBase_eventGetMapBounds_Parms
		{
			FVector2D OutMinBounds;
			FVector2D OutMaxBounds;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutMinBounds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutMaxBounds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemWidgetBase_GetMapBounds_Statics::NewProp_OutMinBounds = { "OutMinBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemWidgetBase_eventGetMapBounds_Parms, OutMinBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemWidgetBase_GetMapBounds_Statics::NewProp_OutMaxBounds = { "OutMaxBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemWidgetBase_eventGetMapBounds_Parms, OutMaxBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemWidgetBase_GetMapBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemWidgetBase_GetMapBounds_Statics::NewProp_OutMinBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemWidgetBase_GetMapBounds_Statics::NewProp_OutMaxBounds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemWidgetBase_GetMapBounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemWidgetBase_GetMapBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemWidgetBase, nullptr, "GetMapBounds", nullptr, nullptr, sizeof(MapSystemWidgetBase_eventGetMapBounds_Parms), Z_Construct_UFunction_UMapSystemWidgetBase_GetMapBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_GetMapBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemWidgetBase_GetMapBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_GetMapBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemWidgetBase_GetMapBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemWidgetBase_GetMapBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerCharacter_Statics
	{
		struct MapSystemWidgetBase_eventGetPlayerCharacter_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemWidgetBase_eventGetPlayerCharacter_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemWidgetBase, nullptr, "GetPlayerCharacter", nullptr, nullptr, sizeof(MapSystemWidgetBase_eventGetPlayerCharacter_Parms), Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerPositionDecentralized_Statics
	{
		struct MapSystemWidgetBase_eventGetPlayerPositionDecentralized_Parms
		{
			FVector2D TestCanvasSize;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestCanvasSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerPositionDecentralized_Statics::NewProp_TestCanvasSize = { "TestCanvasSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemWidgetBase_eventGetPlayerPositionDecentralized_Parms, TestCanvasSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerPositionDecentralized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemWidgetBase_eventGetPlayerPositionDecentralized_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerPositionDecentralized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerPositionDecentralized_Statics::NewProp_TestCanvasSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerPositionDecentralized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerPositionDecentralized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerPositionDecentralized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemWidgetBase, nullptr, "GetPlayerPositionDecentralized", nullptr, nullptr, sizeof(MapSystemWidgetBase_eventGetPlayerPositionDecentralized_Parms), Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerPositionDecentralized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerPositionDecentralized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerPositionDecentralized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerPositionDecentralized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerPositionDecentralized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerPositionDecentralized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics
	{
		struct MapSystemWidgetBase_eventSetCanvasProperties_Parms
		{
			UCanvasPanel* Canvas;
			UWidget* MapWidget;
			UWidget* PlayerWidget;
			UWidget* ObserverWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Canvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Canvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObserverWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObserverWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::NewProp_Canvas_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::NewProp_Canvas = { "Canvas", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemWidgetBase_eventSetCanvasProperties_Parms, Canvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::NewProp_Canvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::NewProp_Canvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::NewProp_MapWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::NewProp_MapWidget = { "MapWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemWidgetBase_eventSetCanvasProperties_Parms, MapWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::NewProp_MapWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::NewProp_MapWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::NewProp_PlayerWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::NewProp_PlayerWidget = { "PlayerWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemWidgetBase_eventSetCanvasProperties_Parms, PlayerWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::NewProp_PlayerWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::NewProp_PlayerWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::NewProp_ObserverWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::NewProp_ObserverWidget = { "ObserverWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemWidgetBase_eventSetCanvasProperties_Parms, ObserverWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::NewProp_ObserverWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::NewProp_ObserverWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::NewProp_Canvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::NewProp_MapWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::NewProp_PlayerWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::NewProp_ObserverWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemWidgetBase, nullptr, "SetCanvasProperties", nullptr, nullptr, sizeof(MapSystemWidgetBase_eventSetCanvasProperties_Parms), Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemWidgetBase_SetObserverPositionInCanvas_Statics
	{
		struct MapSystemWidgetBase_eventSetObserverPositionInCanvas_Parms
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
	void Z_Construct_UFunction_UMapSystemWidgetBase_SetObserverPositionInCanvas_Statics::NewProp_bSizeOffset_SetBit(void* Obj)
	{
		((MapSystemWidgetBase_eventSetObserverPositionInCanvas_Parms*)Obj)->bSizeOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapSystemWidgetBase_SetObserverPositionInCanvas_Statics::NewProp_bSizeOffset = { "bSizeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemWidgetBase_eventSetObserverPositionInCanvas_Parms), &Z_Construct_UFunction_UMapSystemWidgetBase_SetObserverPositionInCanvas_Statics::NewProp_bSizeOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemWidgetBase_SetObserverPositionInCanvas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemWidgetBase_SetObserverPositionInCanvas_Statics::NewProp_bSizeOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemWidgetBase_SetObserverPositionInCanvas_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemWidgetBase_SetObserverPositionInCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemWidgetBase, nullptr, "SetObserverPositionInCanvas", nullptr, nullptr, sizeof(MapSystemWidgetBase_eventSetObserverPositionInCanvas_Parms), Z_Construct_UFunction_UMapSystemWidgetBase_SetObserverPositionInCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_SetObserverPositionInCanvas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemWidgetBase_SetObserverPositionInCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_SetObserverPositionInCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemWidgetBase_SetObserverPositionInCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemWidgetBase_SetObserverPositionInCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemWidgetBase_SetPlayerPositionInCanvas_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemWidgetBase_SetPlayerPositionInCanvas_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemWidgetBase_SetPlayerPositionInCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemWidgetBase, nullptr, "SetPlayerPositionInCanvas", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemWidgetBase_SetPlayerPositionInCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemWidgetBase_SetPlayerPositionInCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemWidgetBase_SetPlayerPositionInCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemWidgetBase_SetPlayerPositionInCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMapSystemWidgetBase_NoRegister()
	{
		return UMapSystemWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UMapSystemWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMapMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicMapMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasBorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CanvasBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerWidgetRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerWidgetRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObserverWidgetRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObserverWidgetRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObserverPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObserverPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundSizeRatioX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoundSizeRatioX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundSizeRatioY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoundSizeRatioY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCentralizePlayer_MetaData[];
#endif
		static void NewProp_bCentralizePlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCentralizePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIconOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerIconOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObserverOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObserverOffset;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PanX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PanX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PanY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PanY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowCircleMask_MetaData[];
#endif
		static void NewProp_bAllowCircleMask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowCircleMask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapSystemWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SolsticeMinimap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapSystemWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapSystemWidgetBase_ChangeTexture, "ChangeTexture" }, // 1753735650
		{ &Z_Construct_UFunction_UMapSystemWidgetBase_ClearRenderTarget, "ClearRenderTarget" }, // 212874499
		{ &Z_Construct_UFunction_UMapSystemWidgetBase_CreateRenderTarget, "CreateRenderTarget" }, // 843918465
		{ &Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasAlignment, "GetCanvasAlignment" }, // 4133759386
		{ &Z_Construct_UFunction_UMapSystemWidgetBase_GetCanvasSize, "GetCanvasSize" }, // 1004836609
		{ &Z_Construct_UFunction_UMapSystemWidgetBase_GetMapBounds, "GetMapBounds" }, // 2748454696
		{ &Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerCharacter, "GetPlayerCharacter" }, // 1853866305
		{ &Z_Construct_UFunction_UMapSystemWidgetBase_GetPlayerPositionDecentralized, "GetPlayerPositionDecentralized" }, // 1259475928
		{ &Z_Construct_UFunction_UMapSystemWidgetBase_SetCanvasProperties, "SetCanvasProperties" }, // 4214881305
		{ &Z_Construct_UFunction_UMapSystemWidgetBase_SetObserverPositionInCanvas, "SetObserverPositionInCanvas" }, // 1871409186
		{ &Z_Construct_UFunction_UMapSystemWidgetBase_SetPlayerPositionInCanvas, "SetPlayerPositionInCanvas" }, // 2284229204
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MapSystemWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_DynamicMapMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_DynamicMapMaterial = { "DynamicMapMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidgetBase, DynamicMapMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_DynamicMapMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_DynamicMapMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MapManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MapManager = { "MapManager", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidgetBase, MapManager), Z_Construct_UClass_AMapSystemManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MapManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MapManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MapCanvas_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MapCanvas = { "MapCanvas", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidgetBase, MapCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MapCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MapCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MapTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MapTexture = { "MapTexture", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidgetBase, MapTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MapTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MapTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_CanvasBorder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_CanvasBorder = { "CanvasBorder", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidgetBase, CanvasBorder), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_CanvasBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_CanvasBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PlayerWidgetRef_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PlayerWidgetRef = { "PlayerWidgetRef", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidgetBase, PlayerWidgetRef), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PlayerWidgetRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PlayerWidgetRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ObserverWidgetRef_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ObserverWidgetRef = { "ObserverWidgetRef", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidgetBase, ObserverWidgetRef), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ObserverWidgetRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ObserverWidgetRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PlayerPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PlayerPosition = { "PlayerPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidgetBase, PlayerPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PlayerPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PlayerPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ObserverPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ObserverPosition = { "ObserverPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidgetBase, ObserverPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ObserverPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ObserverPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_BoundSizeRatioX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_BoundSizeRatioX = { "BoundSizeRatioX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidgetBase, BoundSizeRatioX), METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_BoundSizeRatioX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_BoundSizeRatioX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_BoundSizeRatioY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_BoundSizeRatioY = { "BoundSizeRatioY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidgetBase, BoundSizeRatioY), METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_BoundSizeRatioY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_BoundSizeRatioY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_bCentralizePlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_bCentralizePlayer_SetBit(void* Obj)
	{
		((UMapSystemWidgetBase*)Obj)->bCentralizePlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_bCentralizePlayer = { "bCentralizePlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystemWidgetBase), &Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_bCentralizePlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_bCentralizePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_bCentralizePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PlayerIconOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PlayerIconOffset = { "PlayerIconOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidgetBase, PlayerIconOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PlayerIconOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PlayerIconOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ObserverOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ObserverOffset = { "ObserverOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidgetBase, ObserverOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ObserverOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ObserverOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MinBounds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MinBounds = { "MinBounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidgetBase, MinBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MinBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MinBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MaxBounds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MaxBounds = { "MaxBounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidgetBase, MaxBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MaxBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MaxBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_CanvasSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_CanvasSize = { "CanvasSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidgetBase, CanvasSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_CanvasSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_CanvasSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ZoomX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ZoomX = { "ZoomX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidgetBase, ZoomX), METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ZoomX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ZoomX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ZoomY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ZoomY = { "ZoomY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidgetBase, ZoomY), METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ZoomY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ZoomY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PanX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PanX = { "PanX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidgetBase, PanX), METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PanX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PanX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PanY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PanY = { "PanY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystemWidgetBase, PanY), METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PanY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PanY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_bAllowCircleMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystemWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystemWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_bAllowCircleMask_SetBit(void* Obj)
	{
		((UMapSystemWidgetBase*)Obj)->bAllowCircleMask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_bAllowCircleMask = { "bAllowCircleMask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystemWidgetBase), &Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_bAllowCircleMask_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_bAllowCircleMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_bAllowCircleMask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapSystemWidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_DynamicMapMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MapManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MapCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MapTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_CanvasBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PlayerWidgetRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ObserverWidgetRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PlayerPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ObserverPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_BoundSizeRatioX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_BoundSizeRatioY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_bCentralizePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PlayerIconOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ObserverOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MinBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_MaxBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_CanvasSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ZoomX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_ZoomY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PanX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_PanY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystemWidgetBase_Statics::NewProp_bAllowCircleMask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapSystemWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapSystemWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMapSystemWidgetBase_Statics::ClassParams = {
		&UMapSystemWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMapSystemWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMapSystemWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapSystemWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMapSystemWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMapSystemWidgetBase, 2101597847);
	template<> SOLSTICEMINIMAP_API UClass* StaticClass<UMapSystemWidgetBase>()
	{
		return UMapSystemWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapSystemWidgetBase(Z_Construct_UClass_UMapSystemWidgetBase, &UMapSystemWidgetBase::StaticClass, TEXT("/Script/SolsticeMinimap"), TEXT("UMapSystemWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapSystemWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
