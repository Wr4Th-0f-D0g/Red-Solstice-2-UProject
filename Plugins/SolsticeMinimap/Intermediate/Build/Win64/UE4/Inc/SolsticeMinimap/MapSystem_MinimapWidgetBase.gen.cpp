// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolsticeMinimap/Public/MapSystem_MinimapWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapSystem_MinimapWidgetBase() {}
// Cross Module References
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_MinimapWidgetBase_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_MinimapWidgetBase();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystemWidgetBase();
	UPackage* Z_Construct_UPackage__Script_SolsticeMinimap();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystemWidget_PingElementBase_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMapSystem_MinimapWidgetBase::execAddMinimapRotation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMinimapRotation(Z_Param_Yaw);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystem_MinimapWidgetBase::execCreatePingElement)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreatePingElement(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystem_MinimapWidgetBase::execGetMinimapPan)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetMinimapPan();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystem_MinimapWidgetBase::execRemovePingElement)
	{
		P_GET_OBJECT(UMapSystemWidget_PingElementBase,Z_Param_Element);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePingElement(Z_Param_Element);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystem_MinimapWidgetBase::execUpdateElements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateElements();
		P_NATIVE_END;
	}
	static FName NAME_UMapSystem_MinimapWidgetBase_ClearMinimapLocationTag = FName(TEXT("ClearMinimapLocationTag"));
	void UMapSystem_MinimapWidgetBase::ClearMinimapLocationTag(FGameplayTag const& InTag)
	{
		MapSystem_MinimapWidgetBase_eventClearMinimapLocationTag_Parms Parms;
		Parms.InTag=InTag;
		ProcessEvent(FindFunctionChecked(NAME_UMapSystem_MinimapWidgetBase_ClearMinimapLocationTag),&Parms);
	}
	static FName NAME_UMapSystem_MinimapWidgetBase_OnMinimapInitialized = FName(TEXT("OnMinimapInitialized"));
	void UMapSystem_MinimapWidgetBase::OnMinimapInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMapSystem_MinimapWidgetBase_OnMinimapInitialized),NULL);
	}
	static FName NAME_UMapSystem_MinimapWidgetBase_OnMinimapUpdated = FName(TEXT("OnMinimapUpdated"));
	void UMapSystem_MinimapWidgetBase::OnMinimapUpdated(UMaterialInstanceDynamic* Material)
	{
		MapSystem_MinimapWidgetBase_eventOnMinimapUpdated_Parms Parms;
		Parms.Material=Material;
		ProcessEvent(FindFunctionChecked(NAME_UMapSystem_MinimapWidgetBase_OnMinimapUpdated),&Parms);
	}
	static FName NAME_UMapSystem_MinimapWidgetBase_SetMinimapLocationTag = FName(TEXT("SetMinimapLocationTag"));
	void UMapSystem_MinimapWidgetBase::SetMinimapLocationTag(FGameplayTag const& InTag)
	{
		MapSystem_MinimapWidgetBase_eventSetMinimapLocationTag_Parms Parms;
		Parms.InTag=InTag;
		ProcessEvent(FindFunctionChecked(NAME_UMapSystem_MinimapWidgetBase_SetMinimapLocationTag),&Parms);
	}
	void UMapSystem_MinimapWidgetBase::StaticRegisterNativesUMapSystem_MinimapWidgetBase()
	{
		UClass* Class = UMapSystem_MinimapWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMinimapRotation", &UMapSystem_MinimapWidgetBase::execAddMinimapRotation },
			{ "CreatePingElement", &UMapSystem_MinimapWidgetBase::execCreatePingElement },
			{ "GetMinimapPan", &UMapSystem_MinimapWidgetBase::execGetMinimapPan },
			{ "RemovePingElement", &UMapSystem_MinimapWidgetBase::execRemovePingElement },
			{ "UpdateElements", &UMapSystem_MinimapWidgetBase::execUpdateElements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_AddMinimapRotation_Statics
	{
		struct MapSystem_MinimapWidgetBase_eventAddMinimapRotation_Parms
		{
			float Yaw;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Yaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_AddMinimapRotation_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MinimapWidgetBase_eventAddMinimapRotation_Parms, Yaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_AddMinimapRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_AddMinimapRotation_Statics::NewProp_Yaw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_AddMinimapRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_AddMinimapRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MinimapWidgetBase, nullptr, "AddMinimapRotation", nullptr, nullptr, sizeof(MapSystem_MinimapWidgetBase_eventAddMinimapRotation_Parms), Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_AddMinimapRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_AddMinimapRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_AddMinimapRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_AddMinimapRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_AddMinimapRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_AddMinimapRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_ClearMinimapLocationTag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_ClearMinimapLocationTag_Statics::NewProp_InTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_ClearMinimapLocationTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MinimapWidgetBase_eventClearMinimapLocationTag_Parms, InTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_ClearMinimapLocationTag_Statics::NewProp_InTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_ClearMinimapLocationTag_Statics::NewProp_InTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_ClearMinimapLocationTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_ClearMinimapLocationTag_Statics::NewProp_InTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_ClearMinimapLocationTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_ClearMinimapLocationTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MinimapWidgetBase, nullptr, "ClearMinimapLocationTag", nullptr, nullptr, sizeof(MapSystem_MinimapWidgetBase_eventClearMinimapLocationTag_Parms), Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_ClearMinimapLocationTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_ClearMinimapLocationTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_ClearMinimapLocationTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_ClearMinimapLocationTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_ClearMinimapLocationTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_ClearMinimapLocationTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_CreatePingElement_Statics
	{
		struct MapSystem_MinimapWidgetBase_eventCreatePingElement_Parms
		{
			FVector2D Location;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_CreatePingElement_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MinimapWidgetBase_eventCreatePingElement_Parms, Location), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_CreatePingElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_CreatePingElement_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_CreatePingElement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_CreatePingElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MinimapWidgetBase, nullptr, "CreatePingElement", nullptr, nullptr, sizeof(MapSystem_MinimapWidgetBase_eventCreatePingElement_Parms), Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_CreatePingElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_CreatePingElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_CreatePingElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_CreatePingElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_CreatePingElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_CreatePingElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_GetMinimapPan_Statics
	{
		struct MapSystem_MinimapWidgetBase_eventGetMinimapPan_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_GetMinimapPan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MinimapWidgetBase_eventGetMinimapPan_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_GetMinimapPan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_GetMinimapPan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_GetMinimapPan_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_GetMinimapPan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MinimapWidgetBase, nullptr, "GetMinimapPan", nullptr, nullptr, sizeof(MapSystem_MinimapWidgetBase_eventGetMinimapPan_Parms), Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_GetMinimapPan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_GetMinimapPan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_GetMinimapPan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_GetMinimapPan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_GetMinimapPan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_GetMinimapPan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_OnMinimapInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_OnMinimapInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_OnMinimapInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MinimapWidgetBase, nullptr, "OnMinimapInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_OnMinimapInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_OnMinimapInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_OnMinimapInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_OnMinimapInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_OnMinimapUpdated_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_OnMinimapUpdated_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MinimapWidgetBase_eventOnMinimapUpdated_Parms, Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_OnMinimapUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_OnMinimapUpdated_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_OnMinimapUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_OnMinimapUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MinimapWidgetBase, nullptr, "OnMinimapUpdated", nullptr, nullptr, sizeof(MapSystem_MinimapWidgetBase_eventOnMinimapUpdated_Parms), Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_OnMinimapUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_OnMinimapUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_OnMinimapUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_OnMinimapUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_OnMinimapUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_OnMinimapUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_RemovePingElement_Statics
	{
		struct MapSystem_MinimapWidgetBase_eventRemovePingElement_Parms
		{
			UMapSystemWidget_PingElementBase* Element;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Element;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_RemovePingElement_Statics::NewProp_Element_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_RemovePingElement_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MinimapWidgetBase_eventRemovePingElement_Parms, Element), Z_Construct_UClass_UMapSystemWidget_PingElementBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_RemovePingElement_Statics::NewProp_Element_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_RemovePingElement_Statics::NewProp_Element_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_RemovePingElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_RemovePingElement_Statics::NewProp_Element,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_RemovePingElement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_RemovePingElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MinimapWidgetBase, nullptr, "RemovePingElement", nullptr, nullptr, sizeof(MapSystem_MinimapWidgetBase_eventRemovePingElement_Parms), Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_RemovePingElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_RemovePingElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_RemovePingElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_RemovePingElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_RemovePingElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_RemovePingElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_SetMinimapLocationTag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_SetMinimapLocationTag_Statics::NewProp_InTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_SetMinimapLocationTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystem_MinimapWidgetBase_eventSetMinimapLocationTag_Parms, InTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_SetMinimapLocationTag_Statics::NewProp_InTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_SetMinimapLocationTag_Statics::NewProp_InTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_SetMinimapLocationTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_SetMinimapLocationTag_Statics::NewProp_InTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_SetMinimapLocationTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_SetMinimapLocationTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MinimapWidgetBase, nullptr, "SetMinimapLocationTag", nullptr, nullptr, sizeof(MapSystem_MinimapWidgetBase_eventSetMinimapLocationTag_Parms), Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_SetMinimapLocationTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_SetMinimapLocationTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_SetMinimapLocationTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_SetMinimapLocationTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_SetMinimapLocationTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_SetMinimapLocationTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_UpdateElements_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_UpdateElements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_UpdateElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystem_MinimapWidgetBase, nullptr, "UpdateElements", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_UpdateElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_UpdateElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_UpdateElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_UpdateElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMapSystem_MinimapWidgetBase_NoRegister()
	{
		return UMapSystem_MinimapWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UpdateCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawingCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DrawingCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapPings_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MinimapPings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapPings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MinimapPings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxUnusedPingElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxUnusedPingElements;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnusedMinimapPingElements_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnusedMinimapPingElements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnusedMinimapPingElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnusedMinimapPingElements;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapPingWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MinimapPingWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPanOffset_MetaData[];
#endif
		static void NewProp_bPanOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPanOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPanOffsetA_MetaData[];
#endif
		static void NewProp_bPanOffsetA_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPanOffsetA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdatedRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoRotateMap_MetaData[];
#endif
		static void NewProp_bAutoRotateMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoRotateMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MinimapMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapCircleMaskedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MinimapCircleMaskedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMinimapEnabled_MetaData[];
#endif
		static void NewProp_bIsMinimapEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMinimapEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMapSystemWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SolsticeMinimap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_AddMinimapRotation, "AddMinimapRotation" }, // 569602856
		{ &Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_ClearMinimapLocationTag, "ClearMinimapLocationTag" }, // 453706504
		{ &Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_CreatePingElement, "CreatePingElement" }, // 3650942051
		{ &Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_GetMinimapPan, "GetMinimapPan" }, // 2283673542
		{ &Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_OnMinimapInitialized, "OnMinimapInitialized" }, // 1531410062
		{ &Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_OnMinimapUpdated, "OnMinimapUpdated" }, // 1390521040
		{ &Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_RemovePingElement, "RemovePingElement" }, // 2730638073
		{ &Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_SetMinimapLocationTag, "SetMinimapLocationTag" }, // 444678713
		{ &Z_Construct_UFunction_UMapSystem_MinimapWidgetBase_UpdateElements, "UpdateElements" }, // 2382732475
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MapSystem_MinimapWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_UpdateCounter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_UpdateCounter = { "UpdateCounter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapWidgetBase, UpdateCounter), METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_UpdateCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_UpdateCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_DrawingCanvas_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_DrawingCanvas = { "DrawingCanvas", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapWidgetBase, DrawingCanvas), Z_Construct_UClass_UMapSystem_MinimapDrawCanvas_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_DrawingCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_DrawingCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapPings_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapPings_Inner = { "MinimapPings", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMapSystemWidget_PingElementBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapPings_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapPings_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapPings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapPings = { "MinimapPings", nullptr, (EPropertyFlags)0x001000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapWidgetBase, MinimapPings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapPings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapPings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MaxUnusedPingElements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MaxUnusedPingElements = { "MaxUnusedPingElements", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapWidgetBase, MaxUnusedPingElements), METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MaxUnusedPingElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MaxUnusedPingElements_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_UnusedMinimapPingElements_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_UnusedMinimapPingElements_Inner = { "UnusedMinimapPingElements", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMapSystemWidget_PingElementBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_UnusedMinimapPingElements_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_UnusedMinimapPingElements_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_UnusedMinimapPingElements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_UnusedMinimapPingElements = { "UnusedMinimapPingElements", nullptr, (EPropertyFlags)0x001000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapWidgetBase, UnusedMinimapPingElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_UnusedMinimapPingElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_UnusedMinimapPingElements_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapPingWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapPingWidgetClass = { "MinimapPingWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapWidgetBase, MinimapPingWidgetClass), Z_Construct_UClass_UMapSystemWidget_PingElementBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapPingWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapPingWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bPanOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bPanOffset_SetBit(void* Obj)
	{
		((UMapSystem_MinimapWidgetBase*)Obj)->bPanOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bPanOffset = { "bPanOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystem_MinimapWidgetBase), &Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bPanOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bPanOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bPanOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bPanOffsetA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bPanOffsetA_SetBit(void* Obj)
	{
		((UMapSystem_MinimapWidgetBase*)Obj)->bPanOffsetA = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bPanOffsetA = { "bPanOffsetA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystem_MinimapWidgetBase), &Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bPanOffsetA_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bPanOffsetA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bPanOffsetA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_UpdatedRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_UpdatedRotation = { "UpdatedRotation", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapWidgetBase, UpdatedRotation), METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_UpdatedRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_UpdatedRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_InitialRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_InitialRotation = { "InitialRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapWidgetBase, InitialRotation), METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_InitialRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_InitialRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bAutoRotateMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bAutoRotateMap_SetBit(void* Obj)
	{
		((UMapSystem_MinimapWidgetBase*)Obj)->bAutoRotateMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bAutoRotateMap = { "bAutoRotateMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystem_MinimapWidgetBase), &Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bAutoRotateMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bAutoRotateMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bAutoRotateMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapMaterial = { "MinimapMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapWidgetBase, MinimapMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapCircleMaskedMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapCircleMaskedMaterial = { "MinimapCircleMaskedMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapSystem_MinimapWidgetBase, MinimapCircleMaskedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapCircleMaskedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapCircleMaskedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bIsMinimapEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapSystem_MinimapWidgetBase" },
		{ "ModuleRelativePath", "Public/MapSystem_MinimapWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bIsMinimapEnabled_SetBit(void* Obj)
	{
		((UMapSystem_MinimapWidgetBase*)Obj)->bIsMinimapEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bIsMinimapEnabled = { "bIsMinimapEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapSystem_MinimapWidgetBase), &Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bIsMinimapEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bIsMinimapEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bIsMinimapEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_UpdateCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_DrawingCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapPings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapPings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MaxUnusedPingElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_UnusedMinimapPingElements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_UnusedMinimapPingElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapPingWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bPanOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bPanOffsetA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_UpdatedRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_InitialRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bAutoRotateMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_MinimapCircleMaskedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::NewProp_bIsMinimapEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapSystem_MinimapWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::ClassParams = {
		&UMapSystem_MinimapWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapSystem_MinimapWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMapSystem_MinimapWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMapSystem_MinimapWidgetBase, 1174368421);
	template<> SOLSTICEMINIMAP_API UClass* StaticClass<UMapSystem_MinimapWidgetBase>()
	{
		return UMapSystem_MinimapWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapSystem_MinimapWidgetBase(Z_Construct_UClass_UMapSystem_MinimapWidgetBase, &UMapSystem_MinimapWidgetBase::StaticClass, TEXT("/Script/SolsticeMinimap"), TEXT("UMapSystem_MinimapWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapSystem_MinimapWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
