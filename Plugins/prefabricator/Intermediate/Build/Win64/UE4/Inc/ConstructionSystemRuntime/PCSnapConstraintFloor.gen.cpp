// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConstructionSystemRuntime/Public/PCSnapConstraintFloor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCSnapConstraintFloor() {}
// Cross Module References
	CONSTRUCTIONSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPCSnapConstraintFloor();
	UPackage* Z_Construct_UPackage__Script_ConstructionSystemRuntime();
// End Cross Module References
class UScriptStruct* FPCSnapConstraintFloor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CONSTRUCTIONSYSTEMRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCSnapConstraintFloor, Z_Construct_UPackage__Script_ConstructionSystemRuntime(), TEXT("PCSnapConstraintFloor"), sizeof(FPCSnapConstraintFloor), Get_Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Hash());
	}
	return Singleton;
}
template<> CONSTRUCTIONSYSTEMRUNTIME_API UScriptStruct* StaticStruct<FPCSnapConstraintFloor>()
{
	return FPCSnapConstraintFloor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPCSnapConstraintFloor(FPCSnapConstraintFloor::StaticStruct, TEXT("/Script/ConstructionSystemRuntime"), TEXT("PCSnapConstraintFloor"), false, nullptr, nullptr);
static struct FScriptStruct_ConstructionSystemRuntime_StaticRegisterNativesFPCSnapConstraintFloor
{
	FScriptStruct_ConstructionSystemRuntime_StaticRegisterNativesFPCSnapConstraintFloor()
	{
		UScriptStruct::DeferCppStructOps<FPCSnapConstraintFloor>(FName(TEXT("PCSnapConstraintFloor")));
	}
} ScriptStruct_ConstructionSystemRuntime_StaticRegisterNativesFPCSnapConstraintFloor;
	struct Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachX_MetaData[];
#endif
		static void NewProp_AttachX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AttachX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachXNegative_MetaData[];
#endif
		static void NewProp_AttachXNegative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AttachXNegative;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachY_MetaData[];
#endif
		static void NewProp_AttachY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AttachY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachYNegative_MetaData[];
#endif
		static void NewProp_AttachYNegative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AttachYNegative;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachZ_MetaData[];
#endif
		static void NewProp_AttachZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AttachZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachZNegative_MetaData[];
#endif
		static void NewProp_AttachZNegative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AttachZNegative;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCSnapConstraintFloor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCSnapConstraintFloor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PCSnapConstraintFloor" },
		{ "ModuleRelativePath", "Public/PCSnapConstraintFloor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachX_SetBit(void* Obj)
	{
		((FPCSnapConstraintFloor*)Obj)->AttachX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachX = { "AttachX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPCSnapConstraintFloor), &Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachXNegative_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PCSnapConstraintFloor" },
		{ "ModuleRelativePath", "Public/PCSnapConstraintFloor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachXNegative_SetBit(void* Obj)
	{
		((FPCSnapConstraintFloor*)Obj)->AttachXNegative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachXNegative = { "AttachXNegative", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPCSnapConstraintFloor), &Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachXNegative_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachXNegative_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachXNegative_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PCSnapConstraintFloor" },
		{ "ModuleRelativePath", "Public/PCSnapConstraintFloor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachY_SetBit(void* Obj)
	{
		((FPCSnapConstraintFloor*)Obj)->AttachY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachY = { "AttachY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPCSnapConstraintFloor), &Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachYNegative_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PCSnapConstraintFloor" },
		{ "ModuleRelativePath", "Public/PCSnapConstraintFloor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachYNegative_SetBit(void* Obj)
	{
		((FPCSnapConstraintFloor*)Obj)->AttachYNegative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachYNegative = { "AttachYNegative", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPCSnapConstraintFloor), &Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachYNegative_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachYNegative_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachYNegative_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PCSnapConstraintFloor" },
		{ "ModuleRelativePath", "Public/PCSnapConstraintFloor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachZ_SetBit(void* Obj)
	{
		((FPCSnapConstraintFloor*)Obj)->AttachZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachZ = { "AttachZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPCSnapConstraintFloor), &Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachZNegative_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PCSnapConstraintFloor" },
		{ "ModuleRelativePath", "Public/PCSnapConstraintFloor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachZNegative_SetBit(void* Obj)
	{
		((FPCSnapConstraintFloor*)Obj)->AttachZNegative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachZNegative = { "AttachZNegative", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPCSnapConstraintFloor), &Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachZNegative_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachZNegative_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachZNegative_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachXNegative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachYNegative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::NewProp_AttachZNegative,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConstructionSystemRuntime,
		nullptr,
		&NewStructOps,
		"PCSnapConstraintFloor",
		sizeof(FPCSnapConstraintFloor),
		alignof(FPCSnapConstraintFloor),
		Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCSnapConstraintFloor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ConstructionSystemRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PCSnapConstraintFloor"), sizeof(FPCSnapConstraintFloor), Get_Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPCSnapConstraintFloor_Hash() { return 710389442U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
