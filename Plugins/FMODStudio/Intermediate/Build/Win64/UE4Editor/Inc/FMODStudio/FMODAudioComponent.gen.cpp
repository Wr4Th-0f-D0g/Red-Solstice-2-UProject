// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Public/FMODAudioComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODAudioComponent() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventProperty();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
	FMODSTUDIO_API UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature();
	FMODSTUDIO_API UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature();
	FMODSTUDIO_API UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature();
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODAttenuationDetails();
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODOcclusionDetails();
// End Cross Module References
	DEFINE_FUNCTION(UFMODAudioComponent::execGetLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFMODAudioComponent::execGetParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetParameter(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFMODAudioComponent::execGetParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_UserValue);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_FinalValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetParameterValue(Z_Param_Name,Z_Param_Out_UserValue,Z_Param_Out_FinalValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFMODAudioComponent::execGetProperty)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProperty(EFMODEventProperty::Type(Z_Param_Property));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFMODAudioComponent::execGetTimelinePosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTimelinePosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFMODAudioComponent::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFMODAudioComponent::execKeyOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KeyOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFMODAudioComponent::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFMODAudioComponent::execRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Release();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFMODAudioComponent::execSetEvent)
	{
		P_GET_OBJECT(UFMODEvent,Z_Param_NewEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEvent(Z_Param_NewEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFMODAudioComponent::execSetParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParameter(Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFMODAudioComponent::execSetPaused)
	{
		P_GET_UBOOL(Z_Param_Paused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPaused(Z_Param_Paused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFMODAudioComponent::execSetPitch)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPitch(Z_Param_Pitch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFMODAudioComponent::execSetProgrammerSoundName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProgrammerSoundName(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFMODAudioComponent::execSetProperty)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Property);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProperty(EFMODEventProperty::Type(Z_Param_Property),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFMODAudioComponent::execSetTimelinePosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimelinePosition(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFMODAudioComponent::execSetVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolume(Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFMODAudioComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	void UFMODAudioComponent::StaticRegisterNativesUFMODAudioComponent()
	{
		UClass* Class = UFMODAudioComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLength", &UFMODAudioComponent::execGetLength },
			{ "GetParameter", &UFMODAudioComponent::execGetParameter },
			{ "GetParameterValue", &UFMODAudioComponent::execGetParameterValue },
			{ "GetProperty", &UFMODAudioComponent::execGetProperty },
			{ "GetTimelinePosition", &UFMODAudioComponent::execGetTimelinePosition },
			{ "IsPlaying", &UFMODAudioComponent::execIsPlaying },
			{ "KeyOff", &UFMODAudioComponent::execKeyOff },
			{ "Play", &UFMODAudioComponent::execPlay },
			{ "Release", &UFMODAudioComponent::execRelease },
			{ "SetEvent", &UFMODAudioComponent::execSetEvent },
			{ "SetParameter", &UFMODAudioComponent::execSetParameter },
			{ "SetPaused", &UFMODAudioComponent::execSetPaused },
			{ "SetPitch", &UFMODAudioComponent::execSetPitch },
			{ "SetProgrammerSoundName", &UFMODAudioComponent::execSetProgrammerSoundName },
			{ "SetProperty", &UFMODAudioComponent::execSetProperty },
			{ "SetTimelinePosition", &UFMODAudioComponent::execSetTimelinePosition },
			{ "SetVolume", &UFMODAudioComponent::execSetVolume },
			{ "Stop", &UFMODAudioComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics
	{
		struct FMODAudioComponent_eventGetLength_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMODAudioComponent_eventGetLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, nullptr, "GetLength", nullptr, nullptr, sizeof(FMODAudioComponent_eventGetLength_Parms), Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics
	{
		struct FMODAudioComponent_eventGetParameter_Parms
		{
			FName Name;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMODAudioComponent_eventGetParameter_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMODAudioComponent_eventGetParameter_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, nullptr, "GetParameter", nullptr, nullptr, sizeof(FMODAudioComponent_eventGetParameter_Parms), Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_GetParameterValue_Statics
	{
		struct FMODAudioComponent_eventGetParameterValue_Parms
		{
			FName Name;
			float UserValue;
			float FinalValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UserValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FinalValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFMODAudioComponent_GetParameterValue_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMODAudioComponent_eventGetParameterValue_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFMODAudioComponent_GetParameterValue_Statics::NewProp_UserValue = { "UserValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMODAudioComponent_eventGetParameterValue_Parms, UserValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFMODAudioComponent_GetParameterValue_Statics::NewProp_FinalValue = { "FinalValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMODAudioComponent_eventGetParameterValue_Parms, FinalValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_GetParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_GetParameterValue_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_GetParameterValue_Statics::NewProp_UserValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_GetParameterValue_Statics::NewProp_FinalValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_GetParameterValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_GetParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, nullptr, "GetParameterValue", nullptr, nullptr, sizeof(FMODAudioComponent_eventGetParameterValue_Parms), Z_Construct_UFunction_UFMODAudioComponent_GetParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_GetParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_GetParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_GetParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_GetParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics
	{
		struct FMODAudioComponent_eventGetProperty_Parms
		{
			TEnumAsByte<EFMODEventProperty::Type> Property;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Property;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMODAudioComponent_eventGetProperty_Parms, Property), Z_Construct_UEnum_FMODStudio_EFMODEventProperty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMODAudioComponent_eventGetProperty_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::NewProp_Property,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, nullptr, "GetProperty", nullptr, nullptr, sizeof(FMODAudioComponent_eventGetProperty_Parms), Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics
	{
		struct FMODAudioComponent_eventGetTimelinePosition_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMODAudioComponent_eventGetTimelinePosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, nullptr, "GetTimelinePosition", nullptr, nullptr, sizeof(FMODAudioComponent_eventGetTimelinePosition_Parms), Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics
	{
		struct FMODAudioComponent_eventIsPlaying_Parms
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
	void Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FMODAudioComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMODAudioComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, nullptr, "IsPlaying", nullptr, nullptr, sizeof(FMODAudioComponent_eventIsPlaying_Parms), Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_KeyOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_KeyOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_KeyOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, nullptr, "KeyOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_KeyOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_KeyOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_KeyOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_KeyOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_Play_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_Play_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, nullptr, "Play", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_Release_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_Release_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, nullptr, "Release", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_Release_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics
	{
		struct FMODAudioComponent_eventSetEvent_Parms
		{
			UFMODEvent* NewEvent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics::NewProp_NewEvent = { "NewEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMODAudioComponent_eventSetEvent_Parms, NewEvent), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics::NewProp_NewEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, nullptr, "SetEvent", nullptr, nullptr, sizeof(FMODAudioComponent_eventSetEvent_Parms), Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics
	{
		struct FMODAudioComponent_eventSetParameter_Parms
		{
			FName Name;
			float Value;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMODAudioComponent_eventSetParameter_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMODAudioComponent_eventSetParameter_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, nullptr, "SetParameter", nullptr, nullptr, sizeof(FMODAudioComponent_eventSetParameter_Parms), Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics
	{
		struct FMODAudioComponent_eventSetPaused_Parms
		{
			bool Paused;
		};
		static void NewProp_Paused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Paused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::NewProp_Paused_SetBit(void* Obj)
	{
		((FMODAudioComponent_eventSetPaused_Parms*)Obj)->Paused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::NewProp_Paused = { "Paused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMODAudioComponent_eventSetPaused_Parms), &Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::NewProp_Paused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::NewProp_Paused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, nullptr, "SetPaused", nullptr, nullptr, sizeof(FMODAudioComponent_eventSetPaused_Parms), Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics
	{
		struct FMODAudioComponent_eventSetPitch_Parms
		{
			float Pitch;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMODAudioComponent_eventSetPitch_Parms, Pitch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics::NewProp_Pitch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, nullptr, "SetPitch", nullptr, nullptr, sizeof(FMODAudioComponent_eventSetPitch_Parms), Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics
	{
		struct FMODAudioComponent_eventSetProgrammerSoundName_Parms
		{
			FString Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMODAudioComponent_eventSetProgrammerSoundName_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, nullptr, "SetProgrammerSoundName", nullptr, nullptr, sizeof(FMODAudioComponent_eventSetProgrammerSoundName_Parms), Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics
	{
		struct FMODAudioComponent_eventSetProperty_Parms
		{
			TEnumAsByte<EFMODEventProperty::Type> Property;
			float Value;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Property;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMODAudioComponent_eventSetProperty_Parms, Property), Z_Construct_UEnum_FMODStudio_EFMODEventProperty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMODAudioComponent_eventSetProperty_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::NewProp_Property,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, nullptr, "SetProperty", nullptr, nullptr, sizeof(FMODAudioComponent_eventSetProperty_Parms), Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics
	{
		struct FMODAudioComponent_eventSetTimelinePosition_Parms
		{
			int32 Time;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMODAudioComponent_eventSetTimelinePosition_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, nullptr, "SetTimelinePosition", nullptr, nullptr, sizeof(FMODAudioComponent_eventSetTimelinePosition_Parms), Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics
	{
		struct FMODAudioComponent_eventSetVolume_Parms
		{
			float Volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMODAudioComponent_eventSetVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, nullptr, "SetVolume", nullptr, nullptr, sizeof(FMODAudioComponent_eventSetVolume_Parms), Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFMODAudioComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFMODAudioComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFMODAudioComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFMODAudioComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFMODAudioComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFMODAudioComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFMODAudioComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFMODAudioComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFMODAudioComponent_NoRegister()
	{
		return UFMODAudioComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFMODAudioComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParameterCache_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterCache_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ParameterCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgrammerSoundName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProgrammerSoundName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableTimelineCallbacks_MetaData[];
#endif
		static void NewProp_bEnableTimelineCallbacks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTimelineCallbacks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[];
#endif
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopWhenOwnerDestroyed_MetaData[];
#endif
		static void NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEventStopped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEventStopped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTimelineMarker_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimelineMarker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTimelineBeat_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimelineBeat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttenuationDetails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OcclusionDetails;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFMODAudioComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFMODAudioComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFMODAudioComponent_GetLength, "GetLength" }, // 3995355567
		{ &Z_Construct_UFunction_UFMODAudioComponent_GetParameter, "GetParameter" }, // 2243111824
		{ &Z_Construct_UFunction_UFMODAudioComponent_GetParameterValue, "GetParameterValue" }, // 4036590450
		{ &Z_Construct_UFunction_UFMODAudioComponent_GetProperty, "GetProperty" }, // 3296642133
		{ &Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition, "GetTimelinePosition" }, // 1422778793
		{ &Z_Construct_UFunction_UFMODAudioComponent_IsPlaying, "IsPlaying" }, // 3676736814
		{ &Z_Construct_UFunction_UFMODAudioComponent_KeyOff, "KeyOff" }, // 1691387509
		{ &Z_Construct_UFunction_UFMODAudioComponent_Play, "Play" }, // 3570414410
		{ &Z_Construct_UFunction_UFMODAudioComponent_Release, "Release" }, // 2738204112
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetEvent, "SetEvent" }, // 4177419378
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetParameter, "SetParameter" }, // 3636020848
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetPaused, "SetPaused" }, // 4233362038
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetPitch, "SetPitch" }, // 3789094576
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName, "SetProgrammerSoundName" }, // 1834808594
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetProperty, "SetProperty" }, // 4255479702
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition, "SetTimelinePosition" }, // 132929037
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetVolume, "SetVolume" }, // 2941081515
		{ &Z_Construct_UFunction_UFMODAudioComponent_Stop, "Stop" }, // 3625711742
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FMODAudioComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_Event_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODAudioComponent" },
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODAudioComponent, Event), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_Event_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ParameterCache_ValueProp = { "ParameterCache", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ParameterCache_Key_KeyProp = { "ParameterCache_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ParameterCache_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODAudioComponent" },
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ParameterCache = { "ParameterCache", nullptr, (EPropertyFlags)0x0010020000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODAudioComponent, ParameterCache), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ParameterCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ParameterCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ProgrammerSoundName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODAudioComponent" },
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ProgrammerSoundName = { "ProgrammerSoundName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODAudioComponent, ProgrammerSoundName), METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ProgrammerSoundName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ProgrammerSoundName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bEnableTimelineCallbacks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODAudioComponent" },
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bEnableTimelineCallbacks_SetBit(void* Obj)
	{
		((UFMODAudioComponent*)Obj)->bEnableTimelineCallbacks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bEnableTimelineCallbacks = { "bEnableTimelineCallbacks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFMODAudioComponent), &Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bEnableTimelineCallbacks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bEnableTimelineCallbacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bEnableTimelineCallbacks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bAutoDestroy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODAudioComponent" },
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((UFMODAudioComponent*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFMODAudioComponent), &Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bAutoDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bAutoDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODAudioComponent" },
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((UFMODAudioComponent*)Obj)->bStopWhenOwnerDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed = { "bStopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFMODAudioComponent), &Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnEventStopped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODAudioComponent" },
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnEventStopped = { "OnEventStopped", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODAudioComponent, OnEventStopped), Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnEventStopped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnEventStopped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnTimelineMarker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODAudioComponent" },
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnTimelineMarker = { "OnTimelineMarker", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODAudioComponent, OnTimelineMarker), Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnTimelineMarker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnTimelineMarker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnTimelineBeat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODAudioComponent" },
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnTimelineBeat = { "OnTimelineBeat", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODAudioComponent, OnTimelineBeat), Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnTimelineBeat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnTimelineBeat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_AttenuationDetails_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODAudioComponent" },
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_AttenuationDetails = { "AttenuationDetails", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODAudioComponent, AttenuationDetails), Z_Construct_UScriptStruct_FFMODAttenuationDetails, METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_AttenuationDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_AttenuationDetails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OcclusionDetails_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODAudioComponent" },
		{ "ModuleRelativePath", "Public/FMODAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OcclusionDetails = { "OcclusionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODAudioComponent, OcclusionDetails), Z_Construct_UScriptStruct_FFMODOcclusionDetails, METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OcclusionDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OcclusionDetails_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFMODAudioComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ParameterCache_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ParameterCache_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ParameterCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_ProgrammerSoundName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bEnableTimelineCallbacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnEventStopped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnTimelineMarker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OnTimelineBeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_AttenuationDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioComponent_Statics::NewProp_OcclusionDetails,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODAudioComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODAudioComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFMODAudioComponent_Statics::ClassParams = {
		&UFMODAudioComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFMODAudioComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFMODAudioComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFMODAudioComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFMODAudioComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODAudioComponent, 3519291166);
	template<> FMODSTUDIO_API UClass* StaticClass<UFMODAudioComponent>()
	{
		return UFMODAudioComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODAudioComponent(Z_Construct_UClass_UFMODAudioComponent, &UFMODAudioComponent::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODAudioComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODAudioComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
