// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Public/FMODLocalizedBankTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODLocalizedBankTable() {}
// Cross Module References
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODLocalizedBankTable();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FFMODLocalizedBankTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFMODLocalizedBankTable cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FFMODLocalizedBankTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODLocalizedBankTable, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODLocalizedBankTable"), sizeof(FFMODLocalizedBankTable), Get_Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Hash());
	}
	return Singleton;
}
template<> FMODSTUDIO_API UScriptStruct* StaticStruct<FFMODLocalizedBankTable>()
{
	return FFMODLocalizedBankTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODLocalizedBankTable(FFMODLocalizedBankTable::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("FMODLocalizedBankTable"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFFMODLocalizedBankTable
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFFMODLocalizedBankTable()
	{
		UScriptStruct::DeferCppStructOps<FFMODLocalizedBankTable>(FName(TEXT("FMODLocalizedBankTable")));
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFFMODLocalizedBankTable;
	struct Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Banks_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Banks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FMODLocalizedBankTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODLocalizedBankTable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::NewProp_Banks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FMODLocalizedBankTable" },
		{ "ModuleRelativePath", "Public/FMODLocalizedBankTable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::NewProp_Banks = { "Banks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODLocalizedBankTable, Banks), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::NewProp_Banks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::NewProp_Banks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::NewProp_Banks,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"FMODLocalizedBankTable",
		sizeof(FFMODLocalizedBankTable),
		alignof(FFMODLocalizedBankTable),
		Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFMODLocalizedBankTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODLocalizedBankTable"), sizeof(FFMODLocalizedBankTable), Get_Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Hash() { return 630617108U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
