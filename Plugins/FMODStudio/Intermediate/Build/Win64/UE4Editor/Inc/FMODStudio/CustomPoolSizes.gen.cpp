// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Public/CustomPoolSizes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomPoolSizes() {}
// Cross Module References
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FCustomPoolSizes();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
class UScriptStruct* FCustomPoolSizes::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIO_API uint32 Get_Z_Construct_UScriptStruct_FCustomPoolSizes_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomPoolSizes, Z_Construct_UPackage__Script_FMODStudio(), TEXT("CustomPoolSizes"), sizeof(FCustomPoolSizes), Get_Z_Construct_UScriptStruct_FCustomPoolSizes_Hash());
	}
	return Singleton;
}
template<> FMODSTUDIO_API UScriptStruct* StaticStruct<FCustomPoolSizes>()
{
	return FCustomPoolSizes::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomPoolSizes(FCustomPoolSizes::StaticStruct, TEXT("/Script/FMODStudio"), TEXT("CustomPoolSizes"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudio_StaticRegisterNativesFCustomPoolSizes
{
	FScriptStruct_FMODStudio_StaticRegisterNativesFCustomPoolSizes()
	{
		UScriptStruct::DeferCppStructOps<FCustomPoolSizes>(FName(TEXT("CustomPoolSizes")));
	}
} ScriptStruct_FMODStudio_StaticRegisterNativesFCustomPoolSizes;
	struct Z_Construct_UScriptStruct_FCustomPoolSizes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Desktop_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Desktop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mobile_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mobile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS4_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PS4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Switch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Switch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XboxOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_XboxOne;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomPoolSizes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomPoolSizes>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Desktop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomPoolSizes" },
		{ "ModuleRelativePath", "Public/CustomPoolSizes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Desktop = { "Desktop", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomPoolSizes, Desktop), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Desktop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Desktop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Mobile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomPoolSizes" },
		{ "ModuleRelativePath", "Public/CustomPoolSizes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Mobile = { "Mobile", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomPoolSizes, Mobile), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Mobile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Mobile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_PS4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomPoolSizes" },
		{ "ModuleRelativePath", "Public/CustomPoolSizes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_PS4 = { "PS4", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomPoolSizes, PS4), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_PS4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_PS4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Switch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomPoolSizes" },
		{ "ModuleRelativePath", "Public/CustomPoolSizes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Switch = { "Switch", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomPoolSizes, Switch), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Switch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Switch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_XboxOne_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomPoolSizes" },
		{ "ModuleRelativePath", "Public/CustomPoolSizes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_XboxOne = { "XboxOne", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomPoolSizes, XboxOne), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_XboxOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_XboxOne_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Desktop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Mobile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_PS4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_Switch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::NewProp_XboxOne,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
		nullptr,
		&NewStructOps,
		"CustomPoolSizes",
		sizeof(FCustomPoolSizes),
		alignof(FCustomPoolSizes),
		Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomPoolSizes()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomPoolSizes_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomPoolSizes"), sizeof(FCustomPoolSizes), Get_Z_Construct_UScriptStruct_FCustomPoolSizes_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomPoolSizes_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomPoolSizes_Hash() { return 3259520805U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
