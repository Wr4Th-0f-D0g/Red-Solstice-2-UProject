// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleTank.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleTank() {}
// Cross Module References
	DCXVEHICLE_API UClass* Z_Construct_UClass_ADcxVehicleTank_NoRegister();
	DCXVEHICLE_API UClass* Z_Construct_UClass_ADcxVehicleTank();
	DCXVEHICLE_API UClass* Z_Construct_UClass_ADcxVehicle();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveComponentTank_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADcxVehicleTank::execGetVehicleDriveTank)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDcxVehicleDriveComponentTank**)Z_Param__Result=P_THIS->GetVehicleDriveTank();
		P_NATIVE_END;
	}
	void ADcxVehicleTank::StaticRegisterNativesADcxVehicleTank()
	{
		UClass* Class = ADcxVehicleTank::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVehicleDriveTank", &ADcxVehicleTank::execGetVehicleDriveTank },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADcxVehicleTank_GetVehicleDriveTank_Statics
	{
		struct DcxVehicleTank_eventGetVehicleDriveTank_Parms
		{
			UDcxVehicleDriveComponentTank* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADcxVehicleTank_GetVehicleDriveTank_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADcxVehicleTank_GetVehicleDriveTank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleTank_eventGetVehicleDriveTank_Parms, ReturnValue), Z_Construct_UClass_UDcxVehicleDriveComponentTank_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADcxVehicleTank_GetVehicleDriveTank_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADcxVehicleTank_GetVehicleDriveTank_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADcxVehicleTank_GetVehicleDriveTank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADcxVehicleTank_GetVehicleDriveTank_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADcxVehicleTank_GetVehicleDriveTank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADcxVehicleTank_GetVehicleDriveTank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADcxVehicleTank, nullptr, "GetVehicleDriveTank", nullptr, nullptr, sizeof(DcxVehicleTank_eventGetVehicleDriveTank_Parms), Z_Construct_UFunction_ADcxVehicleTank_GetVehicleDriveTank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADcxVehicleTank_GetVehicleDriveTank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADcxVehicleTank_GetVehicleDriveTank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADcxVehicleTank_GetVehicleDriveTank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADcxVehicleTank_GetVehicleDriveTank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADcxVehicleTank_GetVehicleDriveTank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADcxVehicleTank_NoRegister()
	{
		return ADcxVehicleTank::StaticClass();
	}
	struct Z_Construct_UClass_ADcxVehicleTank_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADcxVehicleTank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADcxVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADcxVehicleTank_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADcxVehicleTank_GetVehicleDriveTank, "GetVehicleDriveTank" }, // 3676524013
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADcxVehicleTank_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DcxVehicleTank.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleTank.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADcxVehicleTank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADcxVehicleTank>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADcxVehicleTank_Statics::ClassParams = {
		&ADcxVehicleTank::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADcxVehicleTank_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADcxVehicleTank_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADcxVehicleTank()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADcxVehicleTank_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADcxVehicleTank, 1993311390);
	template<> DCXVEHICLE_API UClass* StaticClass<ADcxVehicleTank>()
	{
		return ADcxVehicleTank::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADcxVehicleTank(Z_Construct_UClass_ADcxVehicleTank, &ADcxVehicleTank::StaticClass, TEXT("/Script/DcxVehicle"), TEXT("ADcxVehicleTank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADcxVehicleTank);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
