// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Public/FMODOcclusionDetails.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODOcclusionDetails() {}
// Cross Module References
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODOcclusionDetails();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
class UScriptStruct* FFMODOcclusionDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FFMODOcclusionDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODOcclusionDetails, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODOcclusionDetails"), sizeof(FFMODOcclusionDetails), Get_Z_Construct_UScriptStruct_FFMODOcclusionDetails_Hash());
	}
	return Singleton;
}
template<> FMODSTUDIO_API UScriptStruct* StaticStruct<FFMODOcclusionDetails>()
{
	return FFMODOcclusionDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODOcclusionDetails(FFMODOcclusionDetails::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("FMODOcclusionDetails"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFFMODOcclusionDetails
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFFMODOcclusionDetails()
	{
		UScriptStruct::DeferCppStructOps<FFMODOcclusionDetails>(FName(TEXT("FMODOcclusionDetails")));
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFFMODOcclusionDetails;
	struct Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableOcclusion_MetaData[];
#endif
		static void NewProp_bEnableOcclusion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableOcclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionTraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OcclusionTraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseComplexCollisionForOcclusion_MetaData[];
#endif
		static void NewProp_bUseComplexCollisionForOcclusion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseComplexCollisionForOcclusion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FMODOcclusionDetails.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODOcclusionDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bEnableOcclusion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODOcclusionDetails" },
		{ "ModuleRelativePath", "Public/FMODOcclusionDetails.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bEnableOcclusion_SetBit(void* Obj)
	{
		((FFMODOcclusionDetails*)Obj)->bEnableOcclusion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bEnableOcclusion = { "bEnableOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFMODOcclusionDetails), &Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bEnableOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bEnableOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bEnableOcclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionTraceChannel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODOcclusionDetails" },
		{ "ModuleRelativePath", "Public/FMODOcclusionDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionTraceChannel = { "OcclusionTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODOcclusionDetails, OcclusionTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionTraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionTraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bUseComplexCollisionForOcclusion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODOcclusionDetails" },
		{ "ModuleRelativePath", "Public/FMODOcclusionDetails.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bUseComplexCollisionForOcclusion_SetBit(void* Obj)
	{
		((FFMODOcclusionDetails*)Obj)->bUseComplexCollisionForOcclusion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bUseComplexCollisionForOcclusion = { "bUseComplexCollisionForOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFMODOcclusionDetails), &Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bUseComplexCollisionForOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bUseComplexCollisionForOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bUseComplexCollisionForOcclusion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bEnableOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_OcclusionTraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewProp_bUseComplexCollisionForOcclusion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
		nullptr,
		&NewStructOps,
		"FMODOcclusionDetails",
		sizeof(FFMODOcclusionDetails),
		alignof(FFMODOcclusionDetails),
		Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFMODOcclusionDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODOcclusionDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODOcclusionDetails"), sizeof(FFMODOcclusionDetails), Get_Z_Construct_UScriptStruct_FFMODOcclusionDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODOcclusionDetails_Hash() { return 3078730737U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
