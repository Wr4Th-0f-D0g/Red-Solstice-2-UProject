// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConstructionSystemRuntime/Public/ConstructionSystemSavePlayerInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructionSystemSavePlayerInfo() {}
// Cross Module References
	CONSTRUCTIONSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo();
	UPackage* Z_Construct_UPackage__Script_ConstructionSystemRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
class UScriptStruct* FConstructionSystemSavePlayerInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CONSTRUCTIONSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo, Z_Construct_UPackage__Script_ConstructionSystemRuntime(), TEXT("ConstructionSystemSavePlayerInfo"), sizeof(FConstructionSystemSavePlayerInfo), Get_Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Hash());
	}
	return Singleton;
}
template<> CONSTRUCTIONSYSTEMRUNTIME_API UScriptStruct* StaticStruct<FConstructionSystemSavePlayerInfo>()
{
	return FConstructionSystemSavePlayerInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstructionSystemSavePlayerInfo(FConstructionSystemSavePlayerInfo::StaticStruct, TEXT("/Script/ConstructionSystemRuntime"), TEXT("ConstructionSystemSavePlayerInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ConstructionSystemRuntime_StaticRegisterNativesFConstructionSystemSavePlayerInfo
{
	FScriptStruct_ConstructionSystemRuntime_StaticRegisterNativesFConstructionSystemSavePlayerInfo()
	{
		UScriptStruct::DeferCppStructOps<FConstructionSystemSavePlayerInfo>(FName(TEXT("ConstructionSystemSavePlayerInfo")));
	}
} ScriptStruct_ConstructionSystemRuntime_StaticRegisterNativesFConstructionSystemSavePlayerInfo;
	struct Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRestorePlayerInfo_MetaData[];
#endif
		static void NewProp_bRestorePlayerInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestorePlayerInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ConstructionSystemSavePlayerInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstructionSystemSavePlayerInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::NewProp_bRestorePlayerInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemSavePlayerInfo" },
		{ "ModuleRelativePath", "Public/ConstructionSystemSavePlayerInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::NewProp_bRestorePlayerInfo_SetBit(void* Obj)
	{
		((FConstructionSystemSavePlayerInfo*)Obj)->bRestorePlayerInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::NewProp_bRestorePlayerInfo = { "bRestorePlayerInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConstructionSystemSavePlayerInfo), &Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::NewProp_bRestorePlayerInfo_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::NewProp_bRestorePlayerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::NewProp_bRestorePlayerInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::NewProp_Transform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemSavePlayerInfo" },
		{ "ModuleRelativePath", "Public/ConstructionSystemSavePlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstructionSystemSavePlayerInfo, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::NewProp_ControlRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstructionSystemSavePlayerInfo" },
		{ "ModuleRelativePath", "Public/ConstructionSystemSavePlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstructionSystemSavePlayerInfo, ControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::NewProp_ControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::NewProp_ControlRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::NewProp_bRestorePlayerInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::NewProp_ControlRotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConstructionSystemRuntime,
		nullptr,
		&NewStructOps,
		"ConstructionSystemSavePlayerInfo",
		sizeof(FConstructionSystemSavePlayerInfo),
		alignof(FConstructionSystemSavePlayerInfo),
		Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ConstructionSystemRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstructionSystemSavePlayerInfo"), sizeof(FConstructionSystemSavePlayerInfo), Get_Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstructionSystemSavePlayerInfo_Hash() { return 1840652336U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
