// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Public/FMODAttenuationDetails.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODAttenuationDetails() {}
// Cross Module References
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODAttenuationDetails();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
class UScriptStruct* FFMODAttenuationDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FFMODAttenuationDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODAttenuationDetails, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODAttenuationDetails"), sizeof(FFMODAttenuationDetails), Get_Z_Construct_UScriptStruct_FFMODAttenuationDetails_Hash());
	}
	return Singleton;
}
template<> FMODSTUDIO_API UScriptStruct* StaticStruct<FFMODAttenuationDetails>()
{
	return FFMODAttenuationDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODAttenuationDetails(FFMODAttenuationDetails::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("FMODAttenuationDetails"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFFMODAttenuationDetails
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFFMODAttenuationDetails()
	{
		UScriptStruct::DeferCppStructOps<FFMODAttenuationDetails>(FName(TEXT("FMODAttenuationDetails")));
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFFMODAttenuationDetails;
	struct Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[];
#endif
		static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FMODAttenuationDetails.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODAttenuationDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODAttenuationDetails" },
		{ "ModuleRelativePath", "Public/FMODAttenuationDetails.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((FFMODAttenuationDetails*)Obj)->bOverrideAttenuation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFMODAttenuationDetails), &Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_bOverrideAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_MinimumDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODAttenuationDetails" },
		{ "ModuleRelativePath", "Public/FMODAttenuationDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_MinimumDistance = { "MinimumDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODAttenuationDetails, MinimumDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_MinimumDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_MinimumDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_MaximumDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODAttenuationDetails" },
		{ "ModuleRelativePath", "Public/FMODAttenuationDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_MaximumDistance = { "MaximumDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODAttenuationDetails, MaximumDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_MaximumDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_MaximumDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_bOverrideAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_MinimumDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewProp_MaximumDistance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
		nullptr,
		&NewStructOps,
		"FMODAttenuationDetails",
		sizeof(FFMODAttenuationDetails),
		alignof(FFMODAttenuationDetails),
		Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFMODAttenuationDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODAttenuationDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODAttenuationDetails"), sizeof(FFMODAttenuationDetails), Get_Z_Construct_UScriptStruct_FFMODAttenuationDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODAttenuationDetails_Hash() { return 2785581475U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
