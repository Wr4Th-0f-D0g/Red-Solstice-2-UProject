// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleNoDrive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleNoDrive() {}
// Cross Module References
	DCXVEHICLE_API UClass* Z_Construct_UClass_ADcxVehicleNoDrive_NoRegister();
	DCXVEHICLE_API UClass* Z_Construct_UClass_ADcxVehicleNoDrive();
	DCXVEHICLE_API UClass* Z_Construct_UClass_ADcxVehicle();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleNoDriveComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADcxVehicleNoDrive::execGetVehicleNoDrive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDcxVehicleNoDriveComponent**)Z_Param__Result=P_THIS->GetVehicleNoDrive();
		P_NATIVE_END;
	}
	void ADcxVehicleNoDrive::StaticRegisterNativesADcxVehicleNoDrive()
	{
		UClass* Class = ADcxVehicleNoDrive::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVehicleNoDrive", &ADcxVehicleNoDrive::execGetVehicleNoDrive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADcxVehicleNoDrive_GetVehicleNoDrive_Statics
	{
		struct DcxVehicleNoDrive_eventGetVehicleNoDrive_Parms
		{
			UDcxVehicleNoDriveComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADcxVehicleNoDrive_GetVehicleNoDrive_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADcxVehicleNoDrive_GetVehicleNoDrive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleNoDrive_eventGetVehicleNoDrive_Parms, ReturnValue), Z_Construct_UClass_UDcxVehicleNoDriveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADcxVehicleNoDrive_GetVehicleNoDrive_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADcxVehicleNoDrive_GetVehicleNoDrive_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADcxVehicleNoDrive_GetVehicleNoDrive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADcxVehicleNoDrive_GetVehicleNoDrive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADcxVehicleNoDrive_GetVehicleNoDrive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleNoDrive.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADcxVehicleNoDrive_GetVehicleNoDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADcxVehicleNoDrive, nullptr, "GetVehicleNoDrive", nullptr, nullptr, sizeof(DcxVehicleNoDrive_eventGetVehicleNoDrive_Parms), Z_Construct_UFunction_ADcxVehicleNoDrive_GetVehicleNoDrive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADcxVehicleNoDrive_GetVehicleNoDrive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADcxVehicleNoDrive_GetVehicleNoDrive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADcxVehicleNoDrive_GetVehicleNoDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADcxVehicleNoDrive_GetVehicleNoDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADcxVehicleNoDrive_GetVehicleNoDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADcxVehicleNoDrive_NoRegister()
	{
		return ADcxVehicleNoDrive::StaticClass();
	}
	struct Z_Construct_UClass_ADcxVehicleNoDrive_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADcxVehicleNoDrive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADcxVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADcxVehicleNoDrive_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADcxVehicleNoDrive_GetVehicleNoDrive, "GetVehicleNoDrive" }, // 2657557155
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADcxVehicleNoDrive_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DcxVehicleNoDrive.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleNoDrive.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADcxVehicleNoDrive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADcxVehicleNoDrive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADcxVehicleNoDrive_Statics::ClassParams = {
		&ADcxVehicleNoDrive::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADcxVehicleNoDrive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADcxVehicleNoDrive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADcxVehicleNoDrive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADcxVehicleNoDrive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADcxVehicleNoDrive, 3770949073);
	template<> DCXVEHICLE_API UClass* StaticClass<ADcxVehicleNoDrive>()
	{
		return ADcxVehicleNoDrive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADcxVehicleNoDrive(Z_Construct_UClass_ADcxVehicleNoDrive, &ADcxVehicleNoDrive::StaticClass, TEXT("/Script/DcxVehicle"), TEXT("ADcxVehicleNoDrive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADcxVehicleNoDrive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
