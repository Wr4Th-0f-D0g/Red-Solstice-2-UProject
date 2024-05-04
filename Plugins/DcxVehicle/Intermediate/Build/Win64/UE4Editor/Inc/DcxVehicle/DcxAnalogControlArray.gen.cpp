// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxAnalogControlArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxAnalogControlArray() {}
// Cross Module References
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxAnalogControlArray();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
// End Cross Module References
class UScriptStruct* FDcxAnalogControlArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DCXVEHICLE_API uint32 Get_Z_Construct_UScriptStruct_FDcxAnalogControlArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDcxAnalogControlArray, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("DcxAnalogControlArray"), sizeof(FDcxAnalogControlArray), Get_Z_Construct_UScriptStruct_FDcxAnalogControlArray_Hash());
	}
	return Singleton;
}
template<> DCXVEHICLE_API UScriptStruct* StaticStruct<FDcxAnalogControlArray>()
{
	return FDcxAnalogControlArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDcxAnalogControlArray(FDcxAnalogControlArray::StaticStruct, TEXT("/Script/DcxVehicle"), TEXT("DcxAnalogControlArray"), false, nullptr, nullptr);
static struct FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxAnalogControlArray
{
	FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxAnalogControlArray()
	{
		UScriptStruct::DeferCppStructOps<FDcxAnalogControlArray>(FName(TEXT("DcxAnalogControlArray")));
	}
} ScriptStruct_DcxVehicle_StaticRegisterNativesFDcxAnalogControlArray;
	struct Z_Construct_UScriptStruct_FDcxAnalogControlArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxAnalogControlArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DcxAnalogControlArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDcxAnalogControlArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDcxAnalogControlArray>();
	}
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDcxAnalogControlArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxAnalogControlArray_Statics::NewProp_Items_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxAnalogControlArray" },
		{ "ModuleRelativePath", "Public/DcxAnalogControlArray.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDcxAnalogControlArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDcxAnalogControlArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxAnalogControlArray_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxAnalogControlArray_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDcxAnalogControlArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxAnalogControlArray_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDcxAnalogControlArray_Statics::NewProp_Items,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDcxAnalogControlArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
		nullptr,
		&NewStructOps,
		"DcxAnalogControlArray",
		sizeof(FDcxAnalogControlArray),
		alignof(FDcxAnalogControlArray),
		Z_Construct_UScriptStruct_FDcxAnalogControlArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxAnalogControlArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxAnalogControlArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxAnalogControlArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDcxAnalogControlArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDcxAnalogControlArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DcxAnalogControlArray"), sizeof(FDcxAnalogControlArray), Get_Z_Construct_UScriptStruct_FDcxAnalogControlArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDcxAnalogControlArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDcxAnalogControlArray_Hash() { return 3404794705U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
