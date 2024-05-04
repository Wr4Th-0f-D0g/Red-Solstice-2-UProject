// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleAnimInstanceProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleAnimInstanceProxy() {}
// Cross Module References
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleAnimInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
// End Cross Module References

static_assert(std::is_polymorphic<FDcxVehicleAnimInstanceProxy>() == std::is_polymorphic<FAnimInstanceProxy>(), "USTRUCT FDcxVehicleAnimInstanceProxy cannot be polymorphic unless super FAnimInstanceProxy is polymorphic");

class UScriptStruct* FDcxVehicleAnimInstanceProxy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DCXVEHICLE_API uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleAnimInstanceProxy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDcxVehicleAnimInstanceProxy, Z_Construct_UPackage__Script_DcxVehicle(), TEXT("DcxVehicleAnimInstanceProxy"), sizeof(FDcxVehicleAnimInstanceProxy), Get_Z_Construct_UScriptStruct_FDcxVehicleAnimInstanceProxy_Hash());
	}
	return Singleton;
}
template<> DCXVEHICLE_API UScriptStruct* StaticStruct<FDcxVehicleAnimInstanceProxy>()
{
	return FDcxVehicleAnimInstanceProxy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDcxVehicleAnimInstanceProxy(FDcxVehicleAnimInstanceProxy::StaticStruct, TEXT("/Script/DcxVehicle"), TEXT("DcxVehicleAnimInstanceProxy"), false, nullptr, nullptr);
static struct FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleAnimInstanceProxy
{
	FScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleAnimInstanceProxy()
	{
		UScriptStruct::DeferCppStructOps<FDcxVehicleAnimInstanceProxy>(FName(TEXT("DcxVehicleAnimInstanceProxy")));
	}
} ScriptStruct_DcxVehicle_StaticRegisterNativesFDcxVehicleAnimInstanceProxy;
	struct Z_Construct_UScriptStruct_FDcxVehicleAnimInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDcxVehicleAnimInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleAnimInstanceProxy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDcxVehicleAnimInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDcxVehicleAnimInstanceProxy>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDcxVehicleAnimInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"DcxVehicleAnimInstanceProxy",
		sizeof(FDcxVehicleAnimInstanceProxy),
		alignof(FDcxVehicleAnimInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDcxVehicleAnimInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDcxVehicleAnimInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleAnimInstanceProxy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleAnimInstanceProxy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DcxVehicle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DcxVehicleAnimInstanceProxy"), sizeof(FDcxVehicleAnimInstanceProxy), Get_Z_Construct_UScriptStruct_FDcxVehicleAnimInstanceProxy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDcxVehicleAnimInstanceProxy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDcxVehicleAnimInstanceProxy_Hash() { return 56210508U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
