// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CgSDK/Public/CgSDKBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCgSDKBlueprint() {}
// Cross Module References
	CGSDK_API UClass* Z_Construct_UClass_UCgSDKBlueprint_NoRegister();
	CGSDK_API UClass* Z_Construct_UClass_UCgSDKBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CgSDK();
	CGSDK_API UEnum* Z_Construct_UEnum_CgSDK_FCgSdkLedId();
// End Cross Module References
	DEFINE_FUNCTION(UCgSDKBlueprint::execClearAllEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCgSDKBlueprint::ClearAllEvents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCgSDKBlueprint::execClearAllStates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCgSDKBlueprint::ClearAllStates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCgSDKBlueprint::execClearState)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCgSDKBlueprint::ClearState(Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCgSDKBlueprint::execClearStateWithKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StateName);
		P_GET_PROPERTY(FByteProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCgSDKBlueprint::ClearStateWithKey(Z_Param_StateName,FCgSdkLedId(Z_Param_Key));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCgSDKBlueprint::execHideProgressBar)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_progressBarName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCgSDKBlueprint::HideProgressBar(Z_Param_progressBarName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCgSDKBlueprint::execPerformProtocolHandshake)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UCgSDKBlueprint::PerformProtocolHandshake();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCgSDKBlueprint::execReleaseControl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCgSDKBlueprint::ReleaseControl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCgSDKBlueprint::execRequestControl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCgSDKBlueprint::RequestControl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCgSDKBlueprint::execSetEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCgSDKBlueprint::SetEvent(Z_Param_EventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCgSDKBlueprint::execSetEventWithKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_PROPERTY(FByteProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCgSDKBlueprint::SetEventWithKey(Z_Param_EventName,FCgSdkLedId(Z_Param_Key));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCgSDKBlueprint::execSetGame)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCgSDKBlueprint::SetGame(Z_Param_GameName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCgSDKBlueprint::execSetProgressBarValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_progressBarName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCgSDKBlueprint::SetProgressBarValue(Z_Param_progressBarName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCgSDKBlueprint::execSetState)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCgSDKBlueprint::SetState(Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCgSDKBlueprint::execSetStateWithKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StateName);
		P_GET_PROPERTY(FByteProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCgSDKBlueprint::SetStateWithKey(Z_Param_StateName,FCgSdkLedId(Z_Param_Key));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCgSDKBlueprint::execShowProgressBar)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_progressBarName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCgSDKBlueprint::ShowProgressBar(Z_Param_progressBarName);
		P_NATIVE_END;
	}
	void UCgSDKBlueprint::StaticRegisterNativesUCgSDKBlueprint()
	{
		UClass* Class = UCgSDKBlueprint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAllEvents", &UCgSDKBlueprint::execClearAllEvents },
			{ "ClearAllStates", &UCgSDKBlueprint::execClearAllStates },
			{ "ClearState", &UCgSDKBlueprint::execClearState },
			{ "ClearStateWithKey", &UCgSDKBlueprint::execClearStateWithKey },
			{ "HideProgressBar", &UCgSDKBlueprint::execHideProgressBar },
			{ "PerformProtocolHandshake", &UCgSDKBlueprint::execPerformProtocolHandshake },
			{ "ReleaseControl", &UCgSDKBlueprint::execReleaseControl },
			{ "RequestControl", &UCgSDKBlueprint::execRequestControl },
			{ "SetEvent", &UCgSDKBlueprint::execSetEvent },
			{ "SetEventWithKey", &UCgSDKBlueprint::execSetEventWithKey },
			{ "SetGame", &UCgSDKBlueprint::execSetGame },
			{ "SetProgressBarValue", &UCgSDKBlueprint::execSetProgressBarValue },
			{ "SetState", &UCgSDKBlueprint::execSetState },
			{ "SetStateWithKey", &UCgSDKBlueprint::execSetStateWithKey },
			{ "ShowProgressBar", &UCgSDKBlueprint::execShowProgressBar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCgSDKBlueprint_ClearAllEvents_Statics
	{
		struct CgSDKBlueprint_eventClearAllEvents_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCgSDKBlueprint_ClearAllEvents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CgSDKBlueprint_eventClearAllEvents_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_ClearAllEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CgSDKBlueprint_eventClearAllEvents_Parms), &Z_Construct_UFunction_UCgSDKBlueprint_ClearAllEvents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCgSDKBlueprint_ClearAllEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_ClearAllEvents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_ClearAllEvents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CgSDKBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCgSDKBlueprint_ClearAllEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCgSDKBlueprint, nullptr, "ClearAllEvents", nullptr, nullptr, sizeof(CgSDKBlueprint_eventClearAllEvents_Parms), Z_Construct_UFunction_UCgSDKBlueprint_ClearAllEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_ClearAllEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_ClearAllEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_ClearAllEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCgSDKBlueprint_ClearAllEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCgSDKBlueprint_ClearAllEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCgSDKBlueprint_ClearAllStates_Statics
	{
		struct CgSDKBlueprint_eventClearAllStates_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCgSDKBlueprint_ClearAllStates_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CgSDKBlueprint_eventClearAllStates_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_ClearAllStates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CgSDKBlueprint_eventClearAllStates_Parms), &Z_Construct_UFunction_UCgSDKBlueprint_ClearAllStates_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCgSDKBlueprint_ClearAllStates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_ClearAllStates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_ClearAllStates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CgSDKBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCgSDKBlueprint_ClearAllStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCgSDKBlueprint, nullptr, "ClearAllStates", nullptr, nullptr, sizeof(CgSDKBlueprint_eventClearAllStates_Parms), Z_Construct_UFunction_UCgSDKBlueprint_ClearAllStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_ClearAllStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_ClearAllStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_ClearAllStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCgSDKBlueprint_ClearAllStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCgSDKBlueprint_ClearAllStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCgSDKBlueprint_ClearState_Statics
	{
		struct CgSDKBlueprint_eventClearState_Parms
		{
			FString StateName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StateName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_ClearState_Statics::NewProp_StateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_ClearState_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CgSDKBlueprint_eventClearState_Parms, StateName), METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_ClearState_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_ClearState_Statics::NewProp_StateName_MetaData)) };
	void Z_Construct_UFunction_UCgSDKBlueprint_ClearState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CgSDKBlueprint_eventClearState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_ClearState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CgSDKBlueprint_eventClearState_Parms), &Z_Construct_UFunction_UCgSDKBlueprint_ClearState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCgSDKBlueprint_ClearState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_ClearState_Statics::NewProp_StateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_ClearState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_ClearState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CgSDKBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCgSDKBlueprint_ClearState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCgSDKBlueprint, nullptr, "ClearState", nullptr, nullptr, sizeof(CgSDKBlueprint_eventClearState_Parms), Z_Construct_UFunction_UCgSDKBlueprint_ClearState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_ClearState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_ClearState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_ClearState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCgSDKBlueprint_ClearState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCgSDKBlueprint_ClearState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCgSDKBlueprint_ClearStateWithKey_Statics
	{
		struct CgSDKBlueprint_eventClearStateWithKey_Parms
		{
			FString StateName;
			TEnumAsByte<FCgSdkLedId> Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StateName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_ClearStateWithKey_Statics::NewProp_StateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_ClearStateWithKey_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CgSDKBlueprint_eventClearStateWithKey_Parms, StateName), METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_ClearStateWithKey_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_ClearStateWithKey_Statics::NewProp_StateName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCgSDKBlueprint_ClearStateWithKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CgSDKBlueprint_eventClearStateWithKey_Parms, Key), Z_Construct_UEnum_CgSDK_FCgSdkLedId, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCgSDKBlueprint_ClearStateWithKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CgSDKBlueprint_eventClearStateWithKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_ClearStateWithKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CgSDKBlueprint_eventClearStateWithKey_Parms), &Z_Construct_UFunction_UCgSDKBlueprint_ClearStateWithKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCgSDKBlueprint_ClearStateWithKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_ClearStateWithKey_Statics::NewProp_StateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_ClearStateWithKey_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_ClearStateWithKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_ClearStateWithKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CgSDKBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCgSDKBlueprint_ClearStateWithKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCgSDKBlueprint, nullptr, "ClearStateWithKey", nullptr, nullptr, sizeof(CgSDKBlueprint_eventClearStateWithKey_Parms), Z_Construct_UFunction_UCgSDKBlueprint_ClearStateWithKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_ClearStateWithKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_ClearStateWithKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_ClearStateWithKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCgSDKBlueprint_ClearStateWithKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCgSDKBlueprint_ClearStateWithKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCgSDKBlueprint_HideProgressBar_Statics
	{
		struct CgSDKBlueprint_eventHideProgressBar_Parms
		{
			FString progressBarName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_progressBarName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_progressBarName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_HideProgressBar_Statics::NewProp_progressBarName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_HideProgressBar_Statics::NewProp_progressBarName = { "progressBarName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CgSDKBlueprint_eventHideProgressBar_Parms, progressBarName), METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_HideProgressBar_Statics::NewProp_progressBarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_HideProgressBar_Statics::NewProp_progressBarName_MetaData)) };
	void Z_Construct_UFunction_UCgSDKBlueprint_HideProgressBar_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CgSDKBlueprint_eventHideProgressBar_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_HideProgressBar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CgSDKBlueprint_eventHideProgressBar_Parms), &Z_Construct_UFunction_UCgSDKBlueprint_HideProgressBar_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCgSDKBlueprint_HideProgressBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_HideProgressBar_Statics::NewProp_progressBarName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_HideProgressBar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_HideProgressBar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CgSDKBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCgSDKBlueprint_HideProgressBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCgSDKBlueprint, nullptr, "HideProgressBar", nullptr, nullptr, sizeof(CgSDKBlueprint_eventHideProgressBar_Parms), Z_Construct_UFunction_UCgSDKBlueprint_HideProgressBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_HideProgressBar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_HideProgressBar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_HideProgressBar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCgSDKBlueprint_HideProgressBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCgSDKBlueprint_HideProgressBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCgSDKBlueprint_PerformProtocolHandshake_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_PerformProtocolHandshake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CgSDKBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCgSDKBlueprint_PerformProtocolHandshake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCgSDKBlueprint, nullptr, "PerformProtocolHandshake", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_PerformProtocolHandshake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_PerformProtocolHandshake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCgSDKBlueprint_PerformProtocolHandshake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCgSDKBlueprint_PerformProtocolHandshake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCgSDKBlueprint_ReleaseControl_Statics
	{
		struct CgSDKBlueprint_eventReleaseControl_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCgSDKBlueprint_ReleaseControl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CgSDKBlueprint_eventReleaseControl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_ReleaseControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CgSDKBlueprint_eventReleaseControl_Parms), &Z_Construct_UFunction_UCgSDKBlueprint_ReleaseControl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCgSDKBlueprint_ReleaseControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_ReleaseControl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_ReleaseControl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CgSDKBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCgSDKBlueprint_ReleaseControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCgSDKBlueprint, nullptr, "ReleaseControl", nullptr, nullptr, sizeof(CgSDKBlueprint_eventReleaseControl_Parms), Z_Construct_UFunction_UCgSDKBlueprint_ReleaseControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_ReleaseControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_ReleaseControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_ReleaseControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCgSDKBlueprint_ReleaseControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCgSDKBlueprint_ReleaseControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCgSDKBlueprint_RequestControl_Statics
	{
		struct CgSDKBlueprint_eventRequestControl_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCgSDKBlueprint_RequestControl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CgSDKBlueprint_eventRequestControl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_RequestControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CgSDKBlueprint_eventRequestControl_Parms), &Z_Construct_UFunction_UCgSDKBlueprint_RequestControl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCgSDKBlueprint_RequestControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_RequestControl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_RequestControl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CgSDKBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCgSDKBlueprint_RequestControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCgSDKBlueprint, nullptr, "RequestControl", nullptr, nullptr, sizeof(CgSDKBlueprint_eventRequestControl_Parms), Z_Construct_UFunction_UCgSDKBlueprint_RequestControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_RequestControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_RequestControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_RequestControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCgSDKBlueprint_RequestControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCgSDKBlueprint_RequestControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCgSDKBlueprint_SetEvent_Statics
	{
		struct CgSDKBlueprint_eventSetEvent_Parms
		{
			FString EventName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_SetEvent_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_SetEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CgSDKBlueprint_eventSetEvent_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_SetEvent_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_SetEvent_Statics::NewProp_EventName_MetaData)) };
	void Z_Construct_UFunction_UCgSDKBlueprint_SetEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CgSDKBlueprint_eventSetEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_SetEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CgSDKBlueprint_eventSetEvent_Parms), &Z_Construct_UFunction_UCgSDKBlueprint_SetEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCgSDKBlueprint_SetEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_SetEvent_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_SetEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_SetEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CgSDKBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCgSDKBlueprint_SetEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCgSDKBlueprint, nullptr, "SetEvent", nullptr, nullptr, sizeof(CgSDKBlueprint_eventSetEvent_Parms), Z_Construct_UFunction_UCgSDKBlueprint_SetEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_SetEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_SetEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_SetEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCgSDKBlueprint_SetEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCgSDKBlueprint_SetEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCgSDKBlueprint_SetEventWithKey_Statics
	{
		struct CgSDKBlueprint_eventSetEventWithKey_Parms
		{
			FString EventName;
			TEnumAsByte<FCgSdkLedId> Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_SetEventWithKey_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_SetEventWithKey_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CgSDKBlueprint_eventSetEventWithKey_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_SetEventWithKey_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_SetEventWithKey_Statics::NewProp_EventName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCgSDKBlueprint_SetEventWithKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CgSDKBlueprint_eventSetEventWithKey_Parms, Key), Z_Construct_UEnum_CgSDK_FCgSdkLedId, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCgSDKBlueprint_SetEventWithKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CgSDKBlueprint_eventSetEventWithKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_SetEventWithKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CgSDKBlueprint_eventSetEventWithKey_Parms), &Z_Construct_UFunction_UCgSDKBlueprint_SetEventWithKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCgSDKBlueprint_SetEventWithKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_SetEventWithKey_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_SetEventWithKey_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_SetEventWithKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_SetEventWithKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CgSDKBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCgSDKBlueprint_SetEventWithKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCgSDKBlueprint, nullptr, "SetEventWithKey", nullptr, nullptr, sizeof(CgSDKBlueprint_eventSetEventWithKey_Parms), Z_Construct_UFunction_UCgSDKBlueprint_SetEventWithKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_SetEventWithKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_SetEventWithKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_SetEventWithKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCgSDKBlueprint_SetEventWithKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCgSDKBlueprint_SetEventWithKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCgSDKBlueprint_SetGame_Statics
	{
		struct CgSDKBlueprint_eventSetGame_Parms
		{
			FString GameName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_SetGame_Statics::NewProp_GameName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_SetGame_Statics::NewProp_GameName = { "GameName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CgSDKBlueprint_eventSetGame_Parms, GameName), METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_SetGame_Statics::NewProp_GameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_SetGame_Statics::NewProp_GameName_MetaData)) };
	void Z_Construct_UFunction_UCgSDKBlueprint_SetGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CgSDKBlueprint_eventSetGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_SetGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CgSDKBlueprint_eventSetGame_Parms), &Z_Construct_UFunction_UCgSDKBlueprint_SetGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCgSDKBlueprint_SetGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_SetGame_Statics::NewProp_GameName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_SetGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_SetGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CgSDKBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCgSDKBlueprint_SetGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCgSDKBlueprint, nullptr, "SetGame", nullptr, nullptr, sizeof(CgSDKBlueprint_eventSetGame_Parms), Z_Construct_UFunction_UCgSDKBlueprint_SetGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_SetGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_SetGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_SetGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCgSDKBlueprint_SetGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCgSDKBlueprint_SetGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCgSDKBlueprint_SetProgressBarValue_Statics
	{
		struct CgSDKBlueprint_eventSetProgressBarValue_Parms
		{
			FString progressBarName;
			int32 Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_progressBarName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_progressBarName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_SetProgressBarValue_Statics::NewProp_progressBarName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_SetProgressBarValue_Statics::NewProp_progressBarName = { "progressBarName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CgSDKBlueprint_eventSetProgressBarValue_Parms, progressBarName), METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_SetProgressBarValue_Statics::NewProp_progressBarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_SetProgressBarValue_Statics::NewProp_progressBarName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_SetProgressBarValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CgSDKBlueprint_eventSetProgressBarValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCgSDKBlueprint_SetProgressBarValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CgSDKBlueprint_eventSetProgressBarValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_SetProgressBarValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CgSDKBlueprint_eventSetProgressBarValue_Parms), &Z_Construct_UFunction_UCgSDKBlueprint_SetProgressBarValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCgSDKBlueprint_SetProgressBarValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_SetProgressBarValue_Statics::NewProp_progressBarName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_SetProgressBarValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_SetProgressBarValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_SetProgressBarValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CgSDKBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCgSDKBlueprint_SetProgressBarValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCgSDKBlueprint, nullptr, "SetProgressBarValue", nullptr, nullptr, sizeof(CgSDKBlueprint_eventSetProgressBarValue_Parms), Z_Construct_UFunction_UCgSDKBlueprint_SetProgressBarValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_SetProgressBarValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_SetProgressBarValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_SetProgressBarValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCgSDKBlueprint_SetProgressBarValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCgSDKBlueprint_SetProgressBarValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCgSDKBlueprint_SetState_Statics
	{
		struct CgSDKBlueprint_eventSetState_Parms
		{
			FString StateName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StateName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_SetState_Statics::NewProp_StateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_SetState_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CgSDKBlueprint_eventSetState_Parms, StateName), METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_SetState_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_SetState_Statics::NewProp_StateName_MetaData)) };
	void Z_Construct_UFunction_UCgSDKBlueprint_SetState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CgSDKBlueprint_eventSetState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_SetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CgSDKBlueprint_eventSetState_Parms), &Z_Construct_UFunction_UCgSDKBlueprint_SetState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCgSDKBlueprint_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_SetState_Statics::NewProp_StateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_SetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CgSDKBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCgSDKBlueprint_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCgSDKBlueprint, nullptr, "SetState", nullptr, nullptr, sizeof(CgSDKBlueprint_eventSetState_Parms), Z_Construct_UFunction_UCgSDKBlueprint_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCgSDKBlueprint_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCgSDKBlueprint_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCgSDKBlueprint_SetStateWithKey_Statics
	{
		struct CgSDKBlueprint_eventSetStateWithKey_Parms
		{
			FString StateName;
			TEnumAsByte<FCgSdkLedId> Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StateName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_SetStateWithKey_Statics::NewProp_StateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_SetStateWithKey_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CgSDKBlueprint_eventSetStateWithKey_Parms, StateName), METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_SetStateWithKey_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_SetStateWithKey_Statics::NewProp_StateName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCgSDKBlueprint_SetStateWithKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CgSDKBlueprint_eventSetStateWithKey_Parms, Key), Z_Construct_UEnum_CgSDK_FCgSdkLedId, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCgSDKBlueprint_SetStateWithKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CgSDKBlueprint_eventSetStateWithKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_SetStateWithKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CgSDKBlueprint_eventSetStateWithKey_Parms), &Z_Construct_UFunction_UCgSDKBlueprint_SetStateWithKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCgSDKBlueprint_SetStateWithKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_SetStateWithKey_Statics::NewProp_StateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_SetStateWithKey_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_SetStateWithKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_SetStateWithKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CgSDKBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCgSDKBlueprint_SetStateWithKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCgSDKBlueprint, nullptr, "SetStateWithKey", nullptr, nullptr, sizeof(CgSDKBlueprint_eventSetStateWithKey_Parms), Z_Construct_UFunction_UCgSDKBlueprint_SetStateWithKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_SetStateWithKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_SetStateWithKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_SetStateWithKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCgSDKBlueprint_SetStateWithKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCgSDKBlueprint_SetStateWithKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCgSDKBlueprint_ShowProgressBar_Statics
	{
		struct CgSDKBlueprint_eventShowProgressBar_Parms
		{
			FString progressBarName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_progressBarName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_progressBarName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_ShowProgressBar_Statics::NewProp_progressBarName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_ShowProgressBar_Statics::NewProp_progressBarName = { "progressBarName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CgSDKBlueprint_eventShowProgressBar_Parms, progressBarName), METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_ShowProgressBar_Statics::NewProp_progressBarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_ShowProgressBar_Statics::NewProp_progressBarName_MetaData)) };
	void Z_Construct_UFunction_UCgSDKBlueprint_ShowProgressBar_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CgSDKBlueprint_eventShowProgressBar_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCgSDKBlueprint_ShowProgressBar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CgSDKBlueprint_eventShowProgressBar_Parms), &Z_Construct_UFunction_UCgSDKBlueprint_ShowProgressBar_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCgSDKBlueprint_ShowProgressBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_ShowProgressBar_Statics::NewProp_progressBarName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCgSDKBlueprint_ShowProgressBar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCgSDKBlueprint_ShowProgressBar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CgSDKBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCgSDKBlueprint_ShowProgressBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCgSDKBlueprint, nullptr, "ShowProgressBar", nullptr, nullptr, sizeof(CgSDKBlueprint_eventShowProgressBar_Parms), Z_Construct_UFunction_UCgSDKBlueprint_ShowProgressBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_ShowProgressBar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCgSDKBlueprint_ShowProgressBar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCgSDKBlueprint_ShowProgressBar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCgSDKBlueprint_ShowProgressBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCgSDKBlueprint_ShowProgressBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCgSDKBlueprint_NoRegister()
	{
		return UCgSDKBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UCgSDKBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCgSDKBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CgSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCgSDKBlueprint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCgSDKBlueprint_ClearAllEvents, "ClearAllEvents" }, // 248250512
		{ &Z_Construct_UFunction_UCgSDKBlueprint_ClearAllStates, "ClearAllStates" }, // 3260188602
		{ &Z_Construct_UFunction_UCgSDKBlueprint_ClearState, "ClearState" }, // 2422148570
		{ &Z_Construct_UFunction_UCgSDKBlueprint_ClearStateWithKey, "ClearStateWithKey" }, // 1522280184
		{ &Z_Construct_UFunction_UCgSDKBlueprint_HideProgressBar, "HideProgressBar" }, // 2678074674
		{ &Z_Construct_UFunction_UCgSDKBlueprint_PerformProtocolHandshake, "PerformProtocolHandshake" }, // 3573484489
		{ &Z_Construct_UFunction_UCgSDKBlueprint_ReleaseControl, "ReleaseControl" }, // 2988633121
		{ &Z_Construct_UFunction_UCgSDKBlueprint_RequestControl, "RequestControl" }, // 1716150648
		{ &Z_Construct_UFunction_UCgSDKBlueprint_SetEvent, "SetEvent" }, // 1757153889
		{ &Z_Construct_UFunction_UCgSDKBlueprint_SetEventWithKey, "SetEventWithKey" }, // 1592639680
		{ &Z_Construct_UFunction_UCgSDKBlueprint_SetGame, "SetGame" }, // 601387042
		{ &Z_Construct_UFunction_UCgSDKBlueprint_SetProgressBarValue, "SetProgressBarValue" }, // 1355814953
		{ &Z_Construct_UFunction_UCgSDKBlueprint_SetState, "SetState" }, // 2334431696
		{ &Z_Construct_UFunction_UCgSDKBlueprint_SetStateWithKey, "SetStateWithKey" }, // 1247774529
		{ &Z_Construct_UFunction_UCgSDKBlueprint_ShowProgressBar, "ShowProgressBar" }, // 1802137118
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCgSDKBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CgSDKBlueprint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CgSDKBlueprint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCgSDKBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCgSDKBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCgSDKBlueprint_Statics::ClassParams = {
		&UCgSDKBlueprint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCgSDKBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCgSDKBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCgSDKBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCgSDKBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCgSDKBlueprint, 3799601077);
	template<> CGSDK_API UClass* StaticClass<UCgSDKBlueprint>()
	{
		return UCgSDKBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCgSDKBlueprint(Z_Construct_UClass_UCgSDKBlueprint, &UCgSDKBlueprint::StaticClass, TEXT("/Script/CgSDK"), TEXT("UCgSDKBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCgSDKBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
