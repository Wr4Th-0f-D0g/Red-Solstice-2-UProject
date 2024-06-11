// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleNW.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleNW() {}
// Cross Module References
	DCXVEHICLE_API UClass* Z_Construct_UClass_ADcxVehicleNW_NoRegister();
	DCXVEHICLE_API UClass* Z_Construct_UClass_ADcxVehicleNW();
	DCXVEHICLE_API UClass* Z_Construct_UClass_ADcxVehicle();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveComponentNW_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADcxVehicleNW::execGetVehicleDriveNW)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDcxVehicleDriveComponentNW**)Z_Param__Result=P_THIS->GetVehicleDriveNW();
		P_NATIVE_END;
	}
	void ADcxVehicleNW::StaticRegisterNativesADcxVehicleNW()
	{
		UClass* Class = ADcxVehicleNW::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVehicleDriveNW", &ADcxVehicleNW::execGetVehicleDriveNW },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADcxVehicleNW_GetVehicleDriveNW_Statics
	{
		struct DcxVehicleNW_eventGetVehicleDriveNW_Parms
		{
			UDcxVehicleDriveComponentNW* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADcxVehicleNW_GetVehicleDriveNW_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADcxVehicleNW_GetVehicleDriveNW_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleNW_eventGetVehicleDriveNW_Parms, ReturnValue), Z_Construct_UClass_UDcxVehicleDriveComponentNW_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADcxVehicleNW_GetVehicleDriveNW_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADcxVehicleNW_GetVehicleDriveNW_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADcxVehicleNW_GetVehicleDriveNW_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADcxVehicleNW_GetVehicleDriveNW_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADcxVehicleNW_GetVehicleDriveNW_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleNW.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADcxVehicleNW_GetVehicleDriveNW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADcxVehicleNW, nullptr, "GetVehicleDriveNW", nullptr, nullptr, sizeof(DcxVehicleNW_eventGetVehicleDriveNW_Parms), Z_Construct_UFunction_ADcxVehicleNW_GetVehicleDriveNW_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADcxVehicleNW_GetVehicleDriveNW_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADcxVehicleNW_GetVehicleDriveNW_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADcxVehicleNW_GetVehicleDriveNW_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADcxVehicleNW_GetVehicleDriveNW()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADcxVehicleNW_GetVehicleDriveNW_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADcxVehicleNW_NoRegister()
	{
		return ADcxVehicleNW::StaticClass();
	}
	struct Z_Construct_UClass_ADcxVehicleNW_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADcxVehicleNW_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADcxVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADcxVehicleNW_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADcxVehicleNW_GetVehicleDriveNW, "GetVehicleDriveNW" }, // 1519930099
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADcxVehicleNW_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DcxVehicleNW.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleNW.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADcxVehicleNW_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADcxVehicleNW>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADcxVehicleNW_Statics::ClassParams = {
		&ADcxVehicleNW::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ADcxVehicleNW_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADcxVehicleNW_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADcxVehicleNW()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADcxVehicleNW_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADcxVehicleNW, 2284778285);
	template<> DCXVEHICLE_API UClass* StaticClass<ADcxVehicleNW>()
	{
		return ADcxVehicleNW::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADcxVehicleNW(Z_Construct_UClass_ADcxVehicleNW, &ADcxVehicleNW::StaticClass, TEXT("/Script/DcxVehicle"), TEXT("ADcxVehicleNW"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADcxVehicleNW);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
