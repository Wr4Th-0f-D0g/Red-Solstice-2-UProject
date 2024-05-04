// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Public/FMODEventInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODEventInstance() {}
// Cross Module References
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventInstance();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
class UScriptStruct* FFMODEventInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FFMODEventInstance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODEventInstance, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODEventInstance"), sizeof(FFMODEventInstance), Get_Z_Construct_UScriptStruct_FFMODEventInstance_Hash());
	}
	return Singleton;
}
template<> FMODSTUDIO_API UScriptStruct* StaticStruct<FFMODEventInstance>()
{
	return FFMODEventInstance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODEventInstance(FFMODEventInstance::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("FMODEventInstance"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventInstance
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventInstance()
	{
		UScriptStruct::DeferCppStructOps<FFMODEventInstance>(FName(TEXT("FMODEventInstance")));
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFFMODEventInstance;
	struct Z_Construct_UScriptStruct_FFMODEventInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODEventInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FMODEventInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFMODEventInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODEventInstance>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMODEventInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
		nullptr,
		&NewStructOps,
		"FMODEventInstance",
		sizeof(FFMODEventInstance),
		alignof(FFMODEventInstance),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODEventInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODEventInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFMODEventInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODEventInstance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODEventInstance"), sizeof(FFMODEventInstance), Get_Z_Construct_UScriptStruct_FFMODEventInstance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFMODEventInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODEventInstance_Hash() { return 3972003156U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
