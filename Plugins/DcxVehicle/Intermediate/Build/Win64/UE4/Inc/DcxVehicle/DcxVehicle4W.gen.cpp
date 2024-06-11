// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicle4W.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicle4W() {}
// Cross Module References
	DCXVEHICLE_API UClass* Z_Construct_UClass_ADcxVehicle4W_NoRegister();
	DCXVEHICLE_API UClass* Z_Construct_UClass_ADcxVehicle4W();
	DCXVEHICLE_API UClass* Z_Construct_UClass_ADcxVehicle();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveComponent4W_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADcxVehicle4W::execGetVehicleDrive4W)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDcxVehicleDriveComponent4W**)Z_Param__Result=P_THIS->GetVehicleDrive4W();
		P_NATIVE_END;
	}
	void ADcxVehicle4W::StaticRegisterNativesADcxVehicle4W()
	{
		UClass* Class = ADcxVehicle4W::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVehicleDrive4W", &ADcxVehicle4W::execGetVehicleDrive4W },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADcxVehicle4W_GetVehicleDrive4W_Statics
	{
		struct DcxVehicle4W_eventGetVehicleDrive4W_Parms
		{
			UDcxVehicleDriveComponent4W* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADcxVehicle4W_GetVehicleDrive4W_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADcxVehicle4W_GetVehicleDrive4W_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicle4W_eventGetVehicleDrive4W_Parms, ReturnValue), Z_Construct_UClass_UDcxVehicleDriveComponent4W_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADcxVehicle4W_GetVehicleDrive4W_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADcxVehicle4W_GetVehicleDrive4W_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADcxVehicle4W_GetVehicleDrive4W_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADcxVehicle4W_GetVehicleDrive4W_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADcxVehicle4W_GetVehicleDrive4W_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicle4W.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADcxVehicle4W_GetVehicleDrive4W_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADcxVehicle4W, nullptr, "GetVehicleDrive4W", nullptr, nullptr, sizeof(DcxVehicle4W_eventGetVehicleDrive4W_Parms), Z_Construct_UFunction_ADcxVehicle4W_GetVehicleDrive4W_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADcxVehicle4W_GetVehicleDrive4W_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADcxVehicle4W_GetVehicleDrive4W_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADcxVehicle4W_GetVehicleDrive4W_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADcxVehicle4W_GetVehicleDrive4W()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADcxVehicle4W_GetVehicleDrive4W_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADcxVehicle4W_NoRegister()
	{
		return ADcxVehicle4W::StaticClass();
	}
	struct Z_Construct_UClass_ADcxVehicle4W_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADcxVehicle4W_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADcxVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADcxVehicle4W_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADcxVehicle4W_GetVehicleDrive4W, "GetVehicleDrive4W" }, // 2415006396
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADcxVehicle4W_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DcxVehicle4W.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicle4W.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADcxVehicle4W_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADcxVehicle4W>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADcxVehicle4W_Statics::ClassParams = {
		&ADcxVehicle4W::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADcxVehicle4W_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADcxVehicle4W_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADcxVehicle4W()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADcxVehicle4W_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADcxVehicle4W, 2637152179);
	template<> DCXVEHICLE_API UClass* StaticClass<ADcxVehicle4W>()
	{
		return ADcxVehicle4W::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADcxVehicle4W(Z_Construct_UClass_ADcxVehicle4W, &ADcxVehicle4W::StaticClass, TEXT("/Script/DcxVehicle"), TEXT("ADcxVehicle4W"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADcxVehicle4W);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
