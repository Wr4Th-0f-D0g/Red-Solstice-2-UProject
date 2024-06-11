// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConstructionSystemRuntime/Public/PCSnapConstraintWall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCSnapConstraintWall() {}
// Cross Module References
	CONSTRUCTIONSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPCSnapConstraintWall();
	UPackage* Z_Construct_UPackage__Script_ConstructionSystemRuntime();
// End Cross Module References
class UScriptStruct* FPCSnapConstraintWall::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CONSTRUCTIONSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPCSnapConstraintWall_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCSnapConstraintWall, Z_Construct_UPackage__Script_ConstructionSystemRuntime(), TEXT("PCSnapConstraintWall"), sizeof(FPCSnapConstraintWall), Get_Z_Construct_UScriptStruct_FPCSnapConstraintWall_Hash());
	}
	return Singleton;
}
template<> CONSTRUCTIONSYSTEMRUNTIME_API UScriptStruct* StaticStruct<FPCSnapConstraintWall>()
{
	return FPCSnapConstraintWall::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPCSnapConstraintWall(FPCSnapConstraintWall::StaticStruct, TEXT("/Script/ConstructionSystemRuntime"), TEXT("PCSnapConstraintWall"), false, nullptr, nullptr);
static struct FScriptStruct_ConstructionSystemRuntime_StaticRegisterNativesFPCSnapConstraintWall
{
	FScriptStruct_ConstructionSystemRuntime_StaticRegisterNativesFPCSnapConstraintWall()
	{
		UScriptStruct::DeferCppStructOps<FPCSnapConstraintWall>(FName(TEXT("PCSnapConstraintWall")));
	}
} ScriptStruct_ConstructionSystemRuntime_StaticRegisterNativesFPCSnapConstraintWall;
	struct Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachTop_MetaData[];
#endif
		static void NewProp_AttachTop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AttachTop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachBottom_MetaData[];
#endif
		static void NewProp_AttachBottom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AttachBottom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachLeft_MetaData[];
#endif
		static void NewProp_AttachLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AttachLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachRight_MetaData[];
#endif
		static void NewProp_AttachRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AttachRight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCSnapConstraintWall.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCSnapConstraintWall>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachTop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PCSnapConstraintWall" },
		{ "ModuleRelativePath", "Public/PCSnapConstraintWall.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachTop_SetBit(void* Obj)
	{
		((FPCSnapConstraintWall*)Obj)->AttachTop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachTop = { "AttachTop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPCSnapConstraintWall), &Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachTop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachTop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachTop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachBottom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PCSnapConstraintWall" },
		{ "ModuleRelativePath", "Public/PCSnapConstraintWall.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachBottom_SetBit(void* Obj)
	{
		((FPCSnapConstraintWall*)Obj)->AttachBottom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachBottom = { "AttachBottom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPCSnapConstraintWall), &Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachBottom_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachBottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachBottom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PCSnapConstraintWall" },
		{ "ModuleRelativePath", "Public/PCSnapConstraintWall.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachLeft_SetBit(void* Obj)
	{
		((FPCSnapConstraintWall*)Obj)->AttachLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachLeft = { "AttachLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPCSnapConstraintWall), &Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachLeft_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PCSnapConstraintWall" },
		{ "ModuleRelativePath", "Public/PCSnapConstraintWall.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachRight_SetBit(void* Obj)
	{
		((FPCSnapConstraintWall*)Obj)->AttachRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachRight = { "AttachRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPCSnapConstraintWall), &Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachRight_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachRight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachBottom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::NewProp_AttachRight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConstructionSystemRuntime,
		nullptr,
		&NewStructOps,
		"PCSnapConstraintWall",
		sizeof(FPCSnapConstraintWall),
		alignof(FPCSnapConstraintWall),
		Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCSnapConstraintWall()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPCSnapConstraintWall_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ConstructionSystemRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PCSnapConstraintWall"), sizeof(FPCSnapConstraintWall), Get_Z_Construct_UScriptStruct_FPCSnapConstraintWall_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPCSnapConstraintWall_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPCSnapConstraintWall_Hash() { return 2016241800U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
