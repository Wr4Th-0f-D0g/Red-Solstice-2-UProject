// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Public/FMODProjectLocale.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODProjectLocale() {}
// Cross Module References
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODProjectLocale();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
class UScriptStruct* FFMODProjectLocale::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FFMODProjectLocale_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODProjectLocale, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODProjectLocale"), sizeof(FFMODProjectLocale), Get_Z_Construct_UScriptStruct_FFMODProjectLocale_Hash());
	}
	return Singleton;
}
template<> FMODSTUDIO_API UScriptStruct* StaticStruct<FFMODProjectLocale>()
{
	return FFMODProjectLocale::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODProjectLocale(FFMODProjectLocale::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("FMODProjectLocale"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFFMODProjectLocale
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFFMODProjectLocale()
	{
		UScriptStruct::DeferCppStructOps<FFMODProjectLocale>(FName(TEXT("FMODProjectLocale")));
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFFMODProjectLocale;
	struct Z_Construct_UScriptStruct_FFMODProjectLocale_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocaleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocaleName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocaleCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocaleCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefault_MetaData[];
#endif
		static void NewProp_bDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefault;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FMODProjectLocale.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODProjectLocale>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_LocaleName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODProjectLocale" },
		{ "ModuleRelativePath", "Public/FMODProjectLocale.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_LocaleName = { "LocaleName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODProjectLocale, LocaleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_LocaleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_LocaleName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_LocaleCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODProjectLocale" },
		{ "ModuleRelativePath", "Public/FMODProjectLocale.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_LocaleCode = { "LocaleCode", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODProjectLocale, LocaleCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_LocaleCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_LocaleCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_bDefault_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODProjectLocale" },
		{ "ModuleRelativePath", "Public/FMODProjectLocale.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_bDefault_SetBit(void* Obj)
	{
		((FFMODProjectLocale*)Obj)->bDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_bDefault = { "bDefault", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFMODProjectLocale), &Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_bDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_bDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_bDefault_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_LocaleName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_LocaleCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewProp_bDefault,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
		nullptr,
		&NewStructOps,
		"FMODProjectLocale",
		sizeof(FFMODProjectLocale),
		alignof(FFMODProjectLocale),
		Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFMODProjectLocale()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODProjectLocale_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODProjectLocale"), sizeof(FFMODProjectLocale), Get_Z_Construct_UScriptStruct_FFMODProjectLocale_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODProjectLocale_Hash() { return 847866652U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
