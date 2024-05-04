// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolsticeMinimap/Public/MapDynamicActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapDynamicActorComponent() {}
// Cross Module References
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapDynamicActorComponent_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapDynamicActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SolsticeMinimap();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SOLSTICEMINIMAP_API UScriptStruct* Z_Construct_UScriptStruct_FMinimapElementInfo();
	SOLSTICEMINIMAP_API UScriptStruct* Z_Construct_UScriptStruct_FMapElementInfo();
// End Cross Module References
	DEFINE_FUNCTION(UMapDynamicActorComponent::execAddToMapSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToMapSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapDynamicActorComponent::execPingLocation)
	{
		P_GET_STRUCT(FVector2D,Z_Param_NewPingLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PingLocation(Z_Param_NewPingLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapDynamicActorComponent::execRemoveIcon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveIcon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapDynamicActorComponent::execRemoveMapLeaderPoint)
	{
		P_GET_UBOOL(Z_Param_bAllPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMapLeaderPoint(Z_Param_bAllPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapDynamicActorComponent::execServerPingLocation)
	{
		P_GET_STRUCT(FVector2D,Z_Param_NewPingLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerPingLocation_Implementation(Z_Param_NewPingLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapDynamicActorComponent::execServerRemoveMapLeaderPoint)
	{
		P_GET_UBOOL(Z_Param_bAllPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRemoveMapLeaderPoint_Implementation(Z_Param_bAllPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapDynamicActorComponent::execServerSetMapLeaderPoint)
	{
		P_GET_STRUCT(FVector2D,Z_Param_MapLeaderPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetMapLeaderPoint_Implementation(Z_Param_MapLeaderPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapDynamicActorComponent::execSetIconRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIconRadius(Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapDynamicActorComponent::execSetIconTexture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_InTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIconTexture(Z_Param_InTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapDynamicActorComponent::execSetIconTint)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InTint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIconTint(Z_Param_InTint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapDynamicActorComponent::execSetMapLeaderPoint)
	{
		P_GET_STRUCT(FVector2D,Z_Param_MapLeaderPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMapLeaderPoint(Z_Param_MapLeaderPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapDynamicActorComponent::execSetMinimapIconAlwaysVisible)
	{
		P_GET_UBOOL(Z_Param_bAlwaysVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinimapIconAlwaysVisible(Z_Param_bAlwaysVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapDynamicActorComponent::execTryAddToMapSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryAddToMapSystem();
		P_NATIVE_END;
	}
	static FName NAME_UMapDynamicActorComponent_ServerPingLocation = FName(TEXT("ServerPingLocation"));
	void UMapDynamicActorComponent::ServerPingLocation(FVector2D NewPingLocation)
	{
		MapDynamicActorComponent_eventServerPingLocation_Parms Parms;
		Parms.NewPingLocation=NewPingLocation;
		ProcessEvent(FindFunctionChecked(NAME_UMapDynamicActorComponent_ServerPingLocation),&Parms);
	}
	static FName NAME_UMapDynamicActorComponent_ServerRemoveMapLeaderPoint = FName(TEXT("ServerRemoveMapLeaderPoint"));
	void UMapDynamicActorComponent::ServerRemoveMapLeaderPoint(bool bAllPoints)
	{
		MapDynamicActorComponent_eventServerRemoveMapLeaderPoint_Parms Parms;
		Parms.bAllPoints=bAllPoints ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UMapDynamicActorComponent_ServerRemoveMapLeaderPoint),&Parms);
	}
	static FName NAME_UMapDynamicActorComponent_ServerSetMapLeaderPoint = FName(TEXT("ServerSetMapLeaderPoint"));
	void UMapDynamicActorComponent::ServerSetMapLeaderPoint(FVector2D MapLeaderPoint)
	{
		MapDynamicActorComponent_eventServerSetMapLeaderPoint_Parms Parms;
		Parms.MapLeaderPoint=MapLeaderPoint;
		ProcessEvent(FindFunctionChecked(NAME_UMapDynamicActorComponent_ServerSetMapLeaderPoint),&Parms);
	}
	void UMapDynamicActorComponent::StaticRegisterNativesUMapDynamicActorComponent()
	{
		UClass* Class = UMapDynamicActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToMapSystem", &UMapDynamicActorComponent::execAddToMapSystem },
			{ "PingLocation", &UMapDynamicActorComponent::execPingLocation },
			{ "RemoveIcon", &UMapDynamicActorComponent::execRemoveIcon },
			{ "RemoveMapLeaderPoint", &UMapDynamicActorComponent::execRemoveMapLeaderPoint },
			{ "ServerPingLocation", &UMapDynamicActorComponent::execServerPingLocation },
			{ "ServerRemoveMapLeaderPoint", &UMapDynamicActorComponent::execServerRemoveMapLeaderPoint },
			{ "ServerSetMapLeaderPoint", &UMapDynamicActorComponent::execServerSetMapLeaderPoint },
			{ "SetIconRadius", &UMapDynamicActorComponent::execSetIconRadius },
			{ "SetIconTexture", &UMapDynamicActorComponent::execSetIconTexture },
			{ "SetIconTint", &UMapDynamicActorComponent::execSetIconTint },
			{ "SetMapLeaderPoint", &UMapDynamicActorComponent::execSetMapLeaderPoint },
			{ "SetMinimapIconAlwaysVisible", &UMapDynamicActorComponent::execSetMinimapIconAlwaysVisible },
			{ "TryAddToMapSystem", &UMapDynamicActorComponent::execTryAddToMapSystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapDynamicActorComponent_AddToMapSystem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapDynamicActorComponent_AddToMapSystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapDynamicActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapDynamicActorComponent_AddToMapSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapDynamicActorComponent, nullptr, "AddToMapSystem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapDynamicActorComponent_AddToMapSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_AddToMapSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapDynamicActorComponent_AddToMapSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapDynamicActorComponent_AddToMapSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapDynamicActorComponent_PingLocation_Statics
	{
		struct MapDynamicActorComponent_eventPingLocation_Parms
		{
			FVector2D NewPingLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPingLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapDynamicActorComponent_PingLocation_Statics::NewProp_NewPingLocation = { "NewPingLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapDynamicActorComponent_eventPingLocation_Parms, NewPingLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapDynamicActorComponent_PingLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapDynamicActorComponent_PingLocation_Statics::NewProp_NewPingLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapDynamicActorComponent_PingLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapDynamicActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapDynamicActorComponent_PingLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapDynamicActorComponent, nullptr, "PingLocation", nullptr, nullptr, sizeof(MapDynamicActorComponent_eventPingLocation_Parms), Z_Construct_UFunction_UMapDynamicActorComponent_PingLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_PingLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapDynamicActorComponent_PingLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_PingLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapDynamicActorComponent_PingLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapDynamicActorComponent_PingLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapDynamicActorComponent_RemoveIcon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapDynamicActorComponent_RemoveIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapDynamicActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapDynamicActorComponent_RemoveIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapDynamicActorComponent, nullptr, "RemoveIcon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapDynamicActorComponent_RemoveIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_RemoveIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapDynamicActorComponent_RemoveIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapDynamicActorComponent_RemoveIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapDynamicActorComponent_RemoveMapLeaderPoint_Statics
	{
		struct MapDynamicActorComponent_eventRemoveMapLeaderPoint_Parms
		{
			bool bAllPoints;
		};
		static void NewProp_bAllPoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMapDynamicActorComponent_RemoveMapLeaderPoint_Statics::NewProp_bAllPoints_SetBit(void* Obj)
	{
		((MapDynamicActorComponent_eventRemoveMapLeaderPoint_Parms*)Obj)->bAllPoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapDynamicActorComponent_RemoveMapLeaderPoint_Statics::NewProp_bAllPoints = { "bAllPoints", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapDynamicActorComponent_eventRemoveMapLeaderPoint_Parms), &Z_Construct_UFunction_UMapDynamicActorComponent_RemoveMapLeaderPoint_Statics::NewProp_bAllPoints_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapDynamicActorComponent_RemoveMapLeaderPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapDynamicActorComponent_RemoveMapLeaderPoint_Statics::NewProp_bAllPoints,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapDynamicActorComponent_RemoveMapLeaderPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapDynamicActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapDynamicActorComponent_RemoveMapLeaderPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapDynamicActorComponent, nullptr, "RemoveMapLeaderPoint", nullptr, nullptr, sizeof(MapDynamicActorComponent_eventRemoveMapLeaderPoint_Parms), Z_Construct_UFunction_UMapDynamicActorComponent_RemoveMapLeaderPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_RemoveMapLeaderPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapDynamicActorComponent_RemoveMapLeaderPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_RemoveMapLeaderPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapDynamicActorComponent_RemoveMapLeaderPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapDynamicActorComponent_RemoveMapLeaderPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapDynamicActorComponent_ServerPingLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPingLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapDynamicActorComponent_ServerPingLocation_Statics::NewProp_NewPingLocation = { "NewPingLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapDynamicActorComponent_eventServerPingLocation_Parms, NewPingLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapDynamicActorComponent_ServerPingLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapDynamicActorComponent_ServerPingLocation_Statics::NewProp_NewPingLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapDynamicActorComponent_ServerPingLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapDynamicActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapDynamicActorComponent_ServerPingLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapDynamicActorComponent, nullptr, "ServerPingLocation", nullptr, nullptr, sizeof(MapDynamicActorComponent_eventServerPingLocation_Parms), Z_Construct_UFunction_UMapDynamicActorComponent_ServerPingLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_ServerPingLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapDynamicActorComponent_ServerPingLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_ServerPingLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapDynamicActorComponent_ServerPingLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapDynamicActorComponent_ServerPingLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapDynamicActorComponent_ServerRemoveMapLeaderPoint_Statics
	{
		static void NewProp_bAllPoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMapDynamicActorComponent_ServerRemoveMapLeaderPoint_Statics::NewProp_bAllPoints_SetBit(void* Obj)
	{
		((MapDynamicActorComponent_eventServerRemoveMapLeaderPoint_Parms*)Obj)->bAllPoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapDynamicActorComponent_ServerRemoveMapLeaderPoint_Statics::NewProp_bAllPoints = { "bAllPoints", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapDynamicActorComponent_eventServerRemoveMapLeaderPoint_Parms), &Z_Construct_UFunction_UMapDynamicActorComponent_ServerRemoveMapLeaderPoint_Statics::NewProp_bAllPoints_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapDynamicActorComponent_ServerRemoveMapLeaderPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapDynamicActorComponent_ServerRemoveMapLeaderPoint_Statics::NewProp_bAllPoints,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapDynamicActorComponent_ServerRemoveMapLeaderPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapDynamicActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapDynamicActorComponent_ServerRemoveMapLeaderPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapDynamicActorComponent, nullptr, "ServerRemoveMapLeaderPoint", nullptr, nullptr, sizeof(MapDynamicActorComponent_eventServerRemoveMapLeaderPoint_Parms), Z_Construct_UFunction_UMapDynamicActorComponent_ServerRemoveMapLeaderPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_ServerRemoveMapLeaderPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapDynamicActorComponent_ServerRemoveMapLeaderPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_ServerRemoveMapLeaderPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapDynamicActorComponent_ServerRemoveMapLeaderPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapDynamicActorComponent_ServerRemoveMapLeaderPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapDynamicActorComponent_ServerSetMapLeaderPoint_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapLeaderPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapDynamicActorComponent_ServerSetMapLeaderPoint_Statics::NewProp_MapLeaderPoint = { "MapLeaderPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapDynamicActorComponent_eventServerSetMapLeaderPoint_Parms, MapLeaderPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapDynamicActorComponent_ServerSetMapLeaderPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapDynamicActorComponent_ServerSetMapLeaderPoint_Statics::NewProp_MapLeaderPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapDynamicActorComponent_ServerSetMapLeaderPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapDynamicActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapDynamicActorComponent_ServerSetMapLeaderPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapDynamicActorComponent, nullptr, "ServerSetMapLeaderPoint", nullptr, nullptr, sizeof(MapDynamicActorComponent_eventServerSetMapLeaderPoint_Parms), Z_Construct_UFunction_UMapDynamicActorComponent_ServerSetMapLeaderPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_ServerSetMapLeaderPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapDynamicActorComponent_ServerSetMapLeaderPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_ServerSetMapLeaderPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapDynamicActorComponent_ServerSetMapLeaderPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapDynamicActorComponent_ServerSetMapLeaderPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapDynamicActorComponent_SetIconRadius_Statics
	{
		struct MapDynamicActorComponent_eventSetIconRadius_Parms
		{
			float Radius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapDynamicActorComponent_SetIconRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapDynamicActorComponent_eventSetIconRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapDynamicActorComponent_SetIconRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapDynamicActorComponent_SetIconRadius_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapDynamicActorComponent_SetIconRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapDynamicActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapDynamicActorComponent_SetIconRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapDynamicActorComponent, nullptr, "SetIconRadius", nullptr, nullptr, sizeof(MapDynamicActorComponent_eventSetIconRadius_Parms), Z_Construct_UFunction_UMapDynamicActorComponent_SetIconRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_SetIconRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapDynamicActorComponent_SetIconRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_SetIconRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapDynamicActorComponent_SetIconRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapDynamicActorComponent_SetIconRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTexture_Statics
	{
		struct MapDynamicActorComponent_eventSetIconTexture_Parms
		{
			UTexture2D* InTexture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTexture_Statics::NewProp_InTexture = { "InTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapDynamicActorComponent_eventSetIconTexture_Parms, InTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTexture_Statics::NewProp_InTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapDynamicActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapDynamicActorComponent, nullptr, "SetIconTexture", nullptr, nullptr, sizeof(MapDynamicActorComponent_eventSetIconTexture_Parms), Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTint_Statics
	{
		struct MapDynamicActorComponent_eventSetIconTint_Parms
		{
			FLinearColor InTint;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTint_Statics::NewProp_InTint = { "InTint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapDynamicActorComponent_eventSetIconTint_Parms, InTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTint_Statics::NewProp_InTint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapDynamicActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapDynamicActorComponent, nullptr, "SetIconTint", nullptr, nullptr, sizeof(MapDynamicActorComponent_eventSetIconTint_Parms), Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapDynamicActorComponent_SetMapLeaderPoint_Statics
	{
		struct MapDynamicActorComponent_eventSetMapLeaderPoint_Parms
		{
			FVector2D MapLeaderPoint;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapLeaderPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapDynamicActorComponent_SetMapLeaderPoint_Statics::NewProp_MapLeaderPoint = { "MapLeaderPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapDynamicActorComponent_eventSetMapLeaderPoint_Parms, MapLeaderPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapDynamicActorComponent_SetMapLeaderPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapDynamicActorComponent_SetMapLeaderPoint_Statics::NewProp_MapLeaderPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapDynamicActorComponent_SetMapLeaderPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapDynamicActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapDynamicActorComponent_SetMapLeaderPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapDynamicActorComponent, nullptr, "SetMapLeaderPoint", nullptr, nullptr, sizeof(MapDynamicActorComponent_eventSetMapLeaderPoint_Parms), Z_Construct_UFunction_UMapDynamicActorComponent_SetMapLeaderPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_SetMapLeaderPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapDynamicActorComponent_SetMapLeaderPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_SetMapLeaderPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapDynamicActorComponent_SetMapLeaderPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapDynamicActorComponent_SetMapLeaderPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapDynamicActorComponent_SetMinimapIconAlwaysVisible_Statics
	{
		struct MapDynamicActorComponent_eventSetMinimapIconAlwaysVisible_Parms
		{
			bool bAlwaysVisible;
		};
		static void NewProp_bAlwaysVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMapDynamicActorComponent_SetMinimapIconAlwaysVisible_Statics::NewProp_bAlwaysVisible_SetBit(void* Obj)
	{
		((MapDynamicActorComponent_eventSetMinimapIconAlwaysVisible_Parms*)Obj)->bAlwaysVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapDynamicActorComponent_SetMinimapIconAlwaysVisible_Statics::NewProp_bAlwaysVisible = { "bAlwaysVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapDynamicActorComponent_eventSetMinimapIconAlwaysVisible_Parms), &Z_Construct_UFunction_UMapDynamicActorComponent_SetMinimapIconAlwaysVisible_Statics::NewProp_bAlwaysVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapDynamicActorComponent_SetMinimapIconAlwaysVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapDynamicActorComponent_SetMinimapIconAlwaysVisible_Statics::NewProp_bAlwaysVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapDynamicActorComponent_SetMinimapIconAlwaysVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapDynamicActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapDynamicActorComponent_SetMinimapIconAlwaysVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapDynamicActorComponent, nullptr, "SetMinimapIconAlwaysVisible", nullptr, nullptr, sizeof(MapDynamicActorComponent_eventSetMinimapIconAlwaysVisible_Parms), Z_Construct_UFunction_UMapDynamicActorComponent_SetMinimapIconAlwaysVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_SetMinimapIconAlwaysVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapDynamicActorComponent_SetMinimapIconAlwaysVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_SetMinimapIconAlwaysVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapDynamicActorComponent_SetMinimapIconAlwaysVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapDynamicActorComponent_SetMinimapIconAlwaysVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapDynamicActorComponent_TryAddToMapSystem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapDynamicActorComponent_TryAddToMapSystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapDynamicActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapDynamicActorComponent_TryAddToMapSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapDynamicActorComponent, nullptr, "TryAddToMapSystem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapDynamicActorComponent_TryAddToMapSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapDynamicActorComponent_TryAddToMapSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapDynamicActorComponent_TryAddToMapSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapDynamicActorComponent_TryAddToMapSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMapDynamicActorComponent_NoRegister()
	{
		return UMapDynamicActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMapDynamicActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDelayAddIcon_MetaData[];
#endif
		static void NewProp_bDelayAddIcon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDelayAddIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManualAdd_MetaData[];
#endif
		static void NewProp_bManualAdd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManualAdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapElementInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinimapElementInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapElementInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapElementInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowInBigMap_MetaData[];
#endif
		static void NewProp_bShowInBigMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowInBigMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowInMinimap_MetaData[];
#endif
		static void NewProp_bShowInMinimap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowInMinimap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManualRemoved_MetaData[];
#endif
		static void NewProp_bManualRemoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManualRemoved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapDynamicActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SolsticeMinimap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapDynamicActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapDynamicActorComponent_AddToMapSystem, "AddToMapSystem" }, // 2153314831
		{ &Z_Construct_UFunction_UMapDynamicActorComponent_PingLocation, "PingLocation" }, // 4242200993
		{ &Z_Construct_UFunction_UMapDynamicActorComponent_RemoveIcon, "RemoveIcon" }, // 1861271936
		{ &Z_Construct_UFunction_UMapDynamicActorComponent_RemoveMapLeaderPoint, "RemoveMapLeaderPoint" }, // 1166640779
		{ &Z_Construct_UFunction_UMapDynamicActorComponent_ServerPingLocation, "ServerPingLocation" }, // 1145862975
		{ &Z_Construct_UFunction_UMapDynamicActorComponent_ServerRemoveMapLeaderPoint, "ServerRemoveMapLeaderPoint" }, // 2196507412
		{ &Z_Construct_UFunction_UMapDynamicActorComponent_ServerSetMapLeaderPoint, "ServerSetMapLeaderPoint" }, // 1641872527
		{ &Z_Construct_UFunction_UMapDynamicActorComponent_SetIconRadius, "SetIconRadius" }, // 3856337679
		{ &Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTexture, "SetIconTexture" }, // 1017692405
		{ &Z_Construct_UFunction_UMapDynamicActorComponent_SetIconTint, "SetIconTint" }, // 3151183424
		{ &Z_Construct_UFunction_UMapDynamicActorComponent_SetMapLeaderPoint, "SetMapLeaderPoint" }, // 1049915136
		{ &Z_Construct_UFunction_UMapDynamicActorComponent_SetMinimapIconAlwaysVisible, "SetMinimapIconAlwaysVisible" }, // 1608182693
		{ &Z_Construct_UFunction_UMapDynamicActorComponent_TryAddToMapSystem, "TryAddToMapSystem" }, // 955108486
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapDynamicActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MapDynamicActorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MapDynamicActorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bDelayAddIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapDynamicActorComponent" },
		{ "ModuleRelativePath", "Public/MapDynamicActorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bDelayAddIcon_SetBit(void* Obj)
	{
		((UMapDynamicActorComponent*)Obj)->bDelayAddIcon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bDelayAddIcon = { "bDelayAddIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapDynamicActorComponent), &Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bDelayAddIcon_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bDelayAddIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bDelayAddIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_DelayTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapDynamicActorComponent" },
		{ "ModuleRelativePath", "Public/MapDynamicActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapDynamicActorComponent, DelayTime), METADATA_PARAMS(Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_DelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_DelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bManualAdd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapDynamicActorComponent" },
		{ "ModuleRelativePath", "Public/MapDynamicActorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bManualAdd_SetBit(void* Obj)
	{
		((UMapDynamicActorComponent*)Obj)->bManualAdd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bManualAdd = { "bManualAdd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapDynamicActorComponent), &Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bManualAdd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bManualAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bManualAdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_MinimapElementInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapDynamicActorComponent" },
		{ "ModuleRelativePath", "Public/MapDynamicActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_MinimapElementInfo = { "MinimapElementInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapDynamicActorComponent, MinimapElementInfo), Z_Construct_UScriptStruct_FMinimapElementInfo, METADATA_PARAMS(Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_MinimapElementInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_MinimapElementInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_MapElementInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapDynamicActorComponent" },
		{ "ModuleRelativePath", "Public/MapDynamicActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_MapElementInfo = { "MapElementInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapDynamicActorComponent, MapElementInfo), Z_Construct_UScriptStruct_FMapElementInfo, METADATA_PARAMS(Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_MapElementInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_MapElementInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bShowInBigMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapDynamicActorComponent" },
		{ "ModuleRelativePath", "Public/MapDynamicActorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bShowInBigMap_SetBit(void* Obj)
	{
		((UMapDynamicActorComponent*)Obj)->bShowInBigMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bShowInBigMap = { "bShowInBigMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapDynamicActorComponent), &Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bShowInBigMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bShowInBigMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bShowInBigMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bShowInMinimap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapDynamicActorComponent" },
		{ "ModuleRelativePath", "Public/MapDynamicActorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bShowInMinimap_SetBit(void* Obj)
	{
		((UMapDynamicActorComponent*)Obj)->bShowInMinimap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bShowInMinimap = { "bShowInMinimap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapDynamicActorComponent), &Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bShowInMinimap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bShowInMinimap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bShowInMinimap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bManualRemoved_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapDynamicActorComponent" },
		{ "ModuleRelativePath", "Public/MapDynamicActorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bManualRemoved_SetBit(void* Obj)
	{
		((UMapDynamicActorComponent*)Obj)->bManualRemoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bManualRemoved = { "bManualRemoved", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapDynamicActorComponent), &Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bManualRemoved_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bManualRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bManualRemoved_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapDynamicActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bDelayAddIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_DelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bManualAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_MinimapElementInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_MapElementInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bShowInBigMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bShowInMinimap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapDynamicActorComponent_Statics::NewProp_bManualRemoved,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapDynamicActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapDynamicActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMapDynamicActorComponent_Statics::ClassParams = {
		&UMapDynamicActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMapDynamicActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapDynamicActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMapDynamicActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapDynamicActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapDynamicActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMapDynamicActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMapDynamicActorComponent, 3750690558);
	template<> SOLSTICEMINIMAP_API UClass* StaticClass<UMapDynamicActorComponent>()
	{
		return UMapDynamicActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapDynamicActorComponent(Z_Construct_UClass_UMapDynamicActorComponent, &UMapDynamicActorComponent::StaticClass, TEXT("/Script/SolsticeMinimap"), TEXT("UMapDynamicActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapDynamicActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
