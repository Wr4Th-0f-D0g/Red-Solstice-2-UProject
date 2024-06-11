// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolsticeMinimap/Public/MapSystem_MapElementBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapSystem_MapElementBase() {}
// Cross Module References
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_MapElementBase_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_MapElementBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SolsticeMinimap();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SOLSTICEMINIMAP_API UFunction* Z_Construct_UDelegateFunction_SolsticeMinimap_OnLargeMapElementHovered__DelegateSignature();
	SOLSTICEMINIMAP_API UFunction* Z_Construct_UDelegateFunction_SolsticeMinimap_OnLargeMapElementUnHovered__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_TooltipWidgetBase_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_AMapSystemManager_NoRegister();
	SOLSTICEMINIMAP_API UScriptStruct* Z_Construct_UScriptStruct_FMapElementInfo();
// End Cross Module References
	DEFINE_FUNCTION(UMapSystem_MapElementBase::execGetDistanceFromPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDistanceFromPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystem_MapElementBase::execGetPlayerCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACharacter**)Z_Param__Result=P_THIS->GetPlayerCharacter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystem_MapElementBase::execOnHovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystem_MapElementBase::execOnUnHovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnHovered();
		P_NATIVE_END;
	}
	static FName NAME_UMapSystem_MapElementBase_OnDeSelected = FName(TEXT("OnDeSelected"));
	void UMapSystem_MapElementBase::OnDeSelected()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMapSystem_MapElementBase_OnDeSelected),NULL);
	}
	static FName NAME_UMapSystem_MapElementBase_OnElementIconChanged = FName(TEXT("OnElementIconChanged"));
	void UMapSystem_MapElementBase::OnElementIconChanged(UObject* NewElementIcon, FLinearColor Tint)
	{
		MapSystem_MapElementBase_eventOnElementIconChanged_Parms Parms;
		Parms.NewElementIcon=NewElementIcon;
		Parms.Tint=Tint;
		ProcessEvent(FindFunctionChecked(NAME_UMapSystem_MapElementBase_OnElementIconChanged),&Parms);
	}
	static FName NAME_UMapSystem_MapElementBase_OnMapElementInitialized = FName(TEXT("OnMapElementInitialized"));
	void UMapSystem_MapElementBase::OnMapElementInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMapSystem_MapElementBase_OnMapElementInitialized),NULL);
	}
	static FName NAME_UMapSystem_MapElementBase_OnSelected = FName(TEXT("OnSelected"));
	void UMapSystem_MapElementBase::OnSelected()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMapSystem_MapElementBase_OnSelected),NULL);
	}
	static FName NAME_UMapSystem_MapElementBase_OnWidgetInRange = FName(TEXT("OnWidgetInRange"));
	void UMapSystem_MapElementBase::OnWidgetInRange()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMapSystem_MapElementBase_OnWidgetInRange),NULL);
	}
	static FName NAME_UMapSystem_MapElementBase_OnWidgetOutOfRange = FName(TEXT("OnWidgetOutOfRange"));
	void UMapSystem_MapElementBase::OnWidgetOutOfRange()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMapSystem_MapElementBase_OnWidgetOutOfRange),NULL);
	}
	void UMapSystem_MapElementBase::StaticRegisterNativesUMapSystem_MapElementBase()
	{
		UClass* Class = UMapSystem_MapElementBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDistanceFromPlayer", &UMapSystem_MapElementBase::execGetDistanceFromPlayer },
			{ "GetPlayerCharacter", &UMapSystem_MapElementBase::execGetPlayerCharacter },
			{ "OnHovered", &UMapSystem_MapElementBase::execOnHovered },
			{ "OnUnHovered", &UMapSystem_MapElementBase::execOnUnHovered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapSystem_MapElementBase_GetDistanceFromPlayer_Statics
	{
		struct MapSystem_MapElementBase_eventGetDistanceFromPlayer_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapSystem_MapElementBase_GetDistanceFromPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MapElementBase_eventGetDistanceFromPlayer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MapElementBase_GetDistanceFromPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MapElementBase_GetDistanceFromPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapElementBase_GetDistanceFromPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MapElementBase_GetDistanceFromPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MapElementBase, nullptr, "GetDistanceFromPlayer", nullptr, nullptr, sizeof(MapSystem_MapElementBase_eventGetDistanceFromPlayer_Parms), Z_Construct_UFunction_UMapSystem_MapElementBase_GetDistanceFromPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapElementBase_GetDistanceFromPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapElementBase_GetDistanceFromPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapElementBase_GetDistanceFromPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MapElementBase_GetDistanceFromPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MapElementBase_GetDistanceFromPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MapElementBase_GetPlayerCharacter_Statics
	{
		struct MapSystem_MapElementBase_eventGetPlayerCharacter_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSystem_MapElementBase_GetPlayerCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MapElementBase_eventGetPlayerCharacter_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MapElementBase_GetPlayerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MapElementBase_GetPlayerCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapElementBase_GetPlayerCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MapElementBase_GetPlayerCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MapElementBase, nullptr, "GetPlayerCharacter", nullptr, nullptr, sizeof(MapSystem_MapElementBase_eventGetPlayerCharacter_Parms), Z_Construct_UFunction_UMapSystem_MapElementBase_GetPlayerCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapElementBase_GetPlayerCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapElementBase_GetPlayerCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapElementBase_GetPlayerCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MapElementBase_GetPlayerCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MapElementBase_GetPlayerCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MapElementBase_OnDeSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapElementBase_OnDeSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MapElementBase_OnDeSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MapElementBase, nullptr, "OnDeSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapElementBase_OnDeSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapElementBase_OnDeSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MapElementBase_OnDeSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MapElementBase_OnDeSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MapElementBase_OnElementIconChanged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewElementIcon;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSystem_MapElementBase_OnElementIconChanged_Statics::NewProp_NewElementIcon = { "NewElementIcon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MapElementBase_eventOnElementIconChanged_Parms, NewElementIcon), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystem_MapElementBase_OnElementIconChanged_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MapElementBase_eventOnElementIconChanged_Parms, Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MapElementBase_OnElementIconChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MapElementBase_OnElementIconChanged_Statics::NewProp_NewElementIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MapElementBase_OnElementIconChanged_Statics::NewProp_Tint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapElementBase_OnElementIconChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MapElementBase_OnElementIconChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MapElementBase, nullptr, "OnElementIconChanged", nullptr, nullptr, sizeof(MapSystem_MapElementBase_eventOnElementIconChanged_Parms), Z_Construct_UFunction_UMapSystem_MapElementBase_OnElementIconChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapElementBase_OnElementIconChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapElementBase_OnElementIconChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapElementBase_OnElementIconChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MapElementBase_OnElementIconChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MapElementBase_OnElementIconChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MapElementBase_OnHovered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapElementBase_OnHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MapElementBase_OnHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MapElementBase, nullptr, "OnHovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapElementBase_OnHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapElementBase_OnHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MapElementBase_OnHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MapElementBase_OnHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MapElementBase_OnMapElementInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapElementBase_OnMapElementInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MapElementBase_OnMapElementInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MapElementBase, nullptr, "OnMapElementInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapElementBase_OnMapElementInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapElementBase_OnMapElementInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MapElementBase_OnMapElementInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MapElementBase_OnMapElementInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MapElementBase_OnSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapElementBase_OnSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MapElementBase_OnSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MapElementBase, nullptr, "OnSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapElementBase_OnSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapElementBase_OnSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MapElementBase_OnSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MapElementBase_OnSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MapElementBase_OnUnHovered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapElementBase_OnUnHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MapElementBase_OnUnHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MapElementBase, nullptr, "OnUnHovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapElementBase_OnUnHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapElementBase_OnUnHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MapElementBase_OnUnHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MapElementBase_OnUnHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MapElementBase_OnWidgetInRange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapElementBase_OnWidgetInRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MapElementBase_OnWidgetInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MapElementBase, nullptr, "OnWidgetInRange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapElementBase_OnWidgetInRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapElementBase_OnWidgetInRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MapElementBase_OnWidgetInRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MapElementBase_OnWidgetInRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MapElementBase_OnWidgetOutOfRange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MapElementBase_OnWidgetOutOfRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MapElementBase_OnWidgetOutOfRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MapElementBase, nullptr, "OnWidgetOutOfRange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MapElementBase_OnWidgetOutOfRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MapElementBase_OnWidgetOutOfRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MapElementBase_OnWidgetOutOfRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MapElementBase_OnWidgetOutOfRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMapSystem_MapElementBase_NoRegister()
	{
		return UMapSystem_MapElementBase::StaticClass();
	}
	struct Z_Construct_UClass_UMapSystem_MapElementBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMapElementHovered_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapElementHovered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMapElementUnHovered_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapElementUnHovered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysVisible_MetaData[];
#endif
		static void NewProp_bAlwaysVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisibilityRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ElementActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentViewportPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentViewportPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolTipWidgetRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToolTipWidgetRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsElementSelected_MetaData[];
#endif
		static void NewProp_bIsElementSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsElementSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementHoveredIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ElementHoveredIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementSelectedIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ElementSelectedIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowRotationChange_MetaData[];
#endif
		static void NewProp_bAllowRotationChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRotationChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapElementInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapElementInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapSystem_MapElementBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SolsticeMinimap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapSystem_MapElementBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapSystem_MapElementBase_GetDistanceFromPlayer, "GetDistanceFromPlayer" }, // 249246612
		{ &Z_Construct_UFunction_UMapSystem_MapElementBase_GetPlayerCharacter, "GetPlayerCharacter" }, // 3187435945
		{ &Z_Construct_UFunction_UMapSystem_MapElementBase_OnDeSelected, "OnDeSelected" }, // 2675463008
		{ &Z_Construct_UFunction_UMapSystem_MapElementBase_OnElementIconChanged, "OnElementIconChanged" }, // 203971670
		{ &Z_Construct_UFunction_UMapSystem_MapElementBase_OnHovered, "OnHovered" }, // 230836140
		{ &Z_Construct_UFunction_UMapSystem_MapElementBase_OnMapElementInitialized, "OnMapElementInitialized" }, // 403876837
		{ &Z_Construct_UFunction_UMapSystem_MapElementBase_OnSelected, "OnSelected" }, // 345796168
		{ &Z_Construct_UFunction_UMapSystem_MapElementBase_OnUnHovered, "OnUnHovered" }, // 518808534
		{ &Z_Construct_UFunction_UMapSystem_MapElementBase_OnWidgetInRange, "OnWidgetInRange" }, // 1423418758
		{ &Z_Construct_UFunction_UMapSystem_MapElementBase_OnWidgetOutOfRange, "OnWidgetOutOfRange" }, // 908770045
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapElementBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MapSystem_MapElementBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_OnMapElementHovered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_OnMapElementHovered = { "OnMapElementHovered", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapElementBase, OnMapElementHovered), Z_Construct_UDelegateFunction_SolsticeMinimap_OnLargeMapElementHovered__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_OnMapElementHovered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_OnMapElementHovered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_OnMapElementUnHovered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_OnMapElementUnHovered = { "OnMapElementUnHovered", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapElementBase, OnMapElementUnHovered), Z_Construct_UDelegateFunction_SolsticeMinimap_OnLargeMapElementUnHovered__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_OnMapElementUnHovered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_OnMapElementUnHovered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_bAlwaysVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_bAlwaysVisible_SetBit(void* Obj)
	{
		((UMapSystem_MapElementBase*)Obj)->bAlwaysVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_bAlwaysVisible = { "bAlwaysVisible", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystem_MapElementBase), &Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_bAlwaysVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_bAlwaysVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_bAlwaysVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_VisibilityRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_VisibilityRange = { "VisibilityRange", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapElementBase, VisibilityRange), METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_VisibilityRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_VisibilityRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ElementActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ElementActor = { "ElementActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapElementBase, ElementActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ElementActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ElementActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapElementBase, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_CurrentViewportPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_CurrentViewportPosition = { "CurrentViewportPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapElementBase, CurrentViewportPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_CurrentViewportPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_CurrentViewportPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ToolTipWidgetRef_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapElementBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ToolTipWidgetRef = { "ToolTipWidgetRef", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapElementBase, ToolTipWidgetRef), Z_Construct_UClass_UMapSystem_TooltipWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ToolTipWidgetRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ToolTipWidgetRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ParentActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ParentActor = { "ParentActor", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapElementBase, ParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ParentActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ParentActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_MapManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_MapManager = { "MapManager", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapElementBase, MapManager), Z_Construct_UClass_AMapSystemManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_MapManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_MapManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_bIsElementSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_bIsElementSelected_SetBit(void* Obj)
	{
		((UMapSystem_MapElementBase*)Obj)->bIsElementSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_bIsElementSelected = { "bIsElementSelected", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystem_MapElementBase), &Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_bIsElementSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_bIsElementSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_bIsElementSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ElementHoveredIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ElementHoveredIcon = { "ElementHoveredIcon", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapElementBase, ElementHoveredIcon), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ElementHoveredIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ElementHoveredIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ElementSelectedIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ElementSelectedIcon = { "ElementSelectedIcon", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapElementBase, ElementSelectedIcon), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ElementSelectedIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ElementSelectedIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_bAllowRotationChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_bAllowRotationChange_SetBit(void* Obj)
	{
		((UMapSystem_MapElementBase*)Obj)->bAllowRotationChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_bAllowRotationChange = { "bAllowRotationChange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystem_MapElementBase), &Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_bAllowRotationChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_bAllowRotationChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_bAllowRotationChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_MapElementInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MapElementBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MapElementBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_MapElementInfo = { "MapElementInfo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MapElementBase, MapElementInfo), Z_Construct_UScriptStruct_FMapElementInfo, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_MapElementInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_MapElementInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapSystem_MapElementBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_OnMapElementHovered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_OnMapElementUnHovered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_bAlwaysVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_VisibilityRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ElementActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_CurrentViewportPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ToolTipWidgetRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ParentActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_MapManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_bIsElementSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ElementHoveredIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_ElementSelectedIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_bAllowRotationChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MapElementBase_Statics::NewProp_MapElementInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapSystem_MapElementBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapSystem_MapElementBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMapSystem_MapElementBase_Statics::ClassParams = {
		&UMapSystem_MapElementBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMapSystem_MapElementBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MapElementBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapSystem_MapElementBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMapSystem_MapElementBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMapSystem_MapElementBase, 1324822942);
	template<> SOLSTICEMINIMAP_API UClass* StaticClass<UMapSystem_MapElementBase>()
	{
		return UMapSystem_MapElementBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapSystem_MapElementBase(Z_Construct_UClass_UMapSystem_MapElementBase, &UMapSystem_MapElementBase::StaticClass, TEXT("/Script/SolsticeMinimap"), TEXT("UMapSystem_MapElementBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapSystem_MapElementBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
