// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Public/FMODLocalizedBankRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODLocalizedBankRow() {}
// Cross Module References
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODLocalizedBankRow();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FFMODLocalizedBankRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFMODLocalizedBankRow cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FFMODLocalizedBankRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODLocalizedBankRow, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODLocalizedBankRow"), sizeof(FFMODLocalizedBankRow), Get_Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Hash());
	}
	return Singleton;
}
template<> FMODSTUDIO_API UScriptStruct* StaticStruct<FFMODLocalizedBankRow>()
{
	return FFMODLocalizedBankRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODLocalizedBankRow(FFMODLocalizedBankRow::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("FMODLocalizedBankRow"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFFMODLocalizedBankRow
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFFMODLocalizedBankRow()
	{
		UScriptStruct::DeferCppStructOps<FFMODLocalizedBankRow>(FName(TEXT("FMODLocalizedBankRow")));
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFFMODLocalizedBankRow;
	struct Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FMODLocalizedBankRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODLocalizedBankRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::NewProp_Path_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODLocalizedBankRow" },
		{ "ModuleRelativePath", "Public/FMODLocalizedBankRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODLocalizedBankRow, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::NewProp_Path,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"FMODLocalizedBankRow",
		sizeof(FFMODLocalizedBankRow),
		alignof(FFMODLocalizedBankRow),
		Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFMODLocalizedBankRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODLocalizedBankRow"), sizeof(FFMODLocalizedBankRow), Get_Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Hash() { return 1582801274U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
