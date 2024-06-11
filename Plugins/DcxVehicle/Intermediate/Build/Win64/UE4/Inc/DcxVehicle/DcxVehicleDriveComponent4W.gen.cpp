// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleDriveComponent4W.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleDriveComponent4W() {}
// Cross Module References
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveComponent4W_NoRegister();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveComponent4W();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveComponent();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
	DCXVEHICLE_API UScriptStruct* Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveRawInput4W_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDcxVehicleDriveComponent4W::execGetDifferentialData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDcxVehicleDifferentialData4W*)Z_Param__Result=P_THIS->GetDifferentialData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveComponent4W::execGetRawInput4W)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDcxVehicleDriveRawInput4W**)Z_Param__Result=P_THIS->GetRawInput4W();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveComponent4W::execSetDifferentialData)
	{
		P_GET_STRUCT(FDcxVehicleDifferentialData4W,Z_Param_NewDifferentialData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDifferentialData(Z_Param_NewDifferentialData);
		P_NATIVE_END;
	}
	void UDcxVehicleDriveComponent4W::StaticRegisterNativesUDcxVehicleDriveComponent4W()
	{
		UClass* Class = UDcxVehicleDriveComponent4W::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDifferentialData", &UDcxVehicleDriveComponent4W::execGetDifferentialData },
			{ "GetRawInput4W", &UDcxVehicleDriveComponent4W::execGetRawInput4W },
			{ "SetDifferentialData", &UDcxVehicleDriveComponent4W::execSetDifferentialData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetDifferentialData_Statics
	{
		struct DcxVehicleDriveComponent4W_eventGetDifferentialData_Parms
		{
			FDcxVehicleDifferentialData4W ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetDifferentialData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveComponent4W_eventGetDifferentialData_Parms, ReturnValue), Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetDifferentialData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetDifferentialData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetDifferentialData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent4W.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetDifferentialData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveComponent4W, nullptr, "GetDifferentialData", nullptr, nullptr, sizeof(DcxVehicleDriveComponent4W_eventGetDifferentialData_Parms), Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetDifferentialData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetDifferentialData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetDifferentialData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetDifferentialData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetDifferentialData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetDifferentialData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetRawInput4W_Statics
	{
		struct DcxVehicleDriveComponent4W_eventGetRawInput4W_Parms
		{
			UDcxVehicleDriveRawInput4W* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetRawInput4W_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveComponent4W_eventGetRawInput4W_Parms, ReturnValue), Z_Construct_UClass_UDcxVehicleDriveRawInput4W_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetRawInput4W_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetRawInput4W_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetRawInput4W_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent4W.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetRawInput4W_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveComponent4W, nullptr, "GetRawInput4W", nullptr, nullptr, sizeof(DcxVehicleDriveComponent4W_eventGetRawInput4W_Parms), Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetRawInput4W_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetRawInput4W_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetRawInput4W_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetRawInput4W_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetRawInput4W()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetRawInput4W_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveComponent4W_SetDifferentialData_Statics
	{
		struct DcxVehicleDriveComponent4W_eventSetDifferentialData_Parms
		{
			FDcxVehicleDifferentialData4W NewDifferentialData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewDifferentialData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponent4W_SetDifferentialData_Statics::NewProp_NewDifferentialData = { "NewDifferentialData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveComponent4W_eventSetDifferentialData_Parms, NewDifferentialData), Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveComponent4W_SetDifferentialData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponent4W_SetDifferentialData_Statics::NewProp_NewDifferentialData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveComponent4W_SetDifferentialData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent4W.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveComponent4W_SetDifferentialData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveComponent4W, nullptr, "SetDifferentialData", nullptr, nullptr, sizeof(DcxVehicleDriveComponent4W_eventSetDifferentialData_Parms), Z_Construct_UFunction_UDcxVehicleDriveComponent4W_SetDifferentialData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent4W_SetDifferentialData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveComponent4W_SetDifferentialData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponent4W_SetDifferentialData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveComponent4W_SetDifferentialData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveComponent4W_SetDifferentialData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDcxVehicleDriveComponent4W_NoRegister()
	{
		return UDcxVehicleDriveComponent4W::StaticClass();
	}
	struct Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifferentialData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DifferentialData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AckermannGeometryAccuracy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AckermannGeometryAccuracy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDcxVehicleDriveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetDifferentialData, "GetDifferentialData" }, // 2755215972
		{ &Z_Construct_UFunction_UDcxVehicleDriveComponent4W_GetRawInput4W, "GetRawInput4W" }, // 3820326651
		{ &Z_Construct_UFunction_UDcxVehicleDriveComponent4W_SetDifferentialData, "SetDifferentialData" }, // 2355845457
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DcxVehicleDriveComponent4W.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent4W.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics::NewProp_DifferentialData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDriveComponent4W" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent4W.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics::NewProp_DifferentialData = { "DifferentialData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleDriveComponent4W, DifferentialData), Z_Construct_UScriptStruct_FDcxVehicleDifferentialData4W, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics::NewProp_DifferentialData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics::NewProp_DifferentialData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics::NewProp_AckermannGeometryAccuracy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDriveComponent4W" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponent4W.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics::NewProp_AckermannGeometryAccuracy = { "AckermannGeometryAccuracy", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleDriveComponent4W, AckermannGeometryAccuracy), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics::NewProp_AckermannGeometryAccuracy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics::NewProp_AckermannGeometryAccuracy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics::NewProp_DifferentialData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics::NewProp_AckermannGeometryAccuracy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDcxVehicleDriveComponent4W>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics::ClassParams = {
		&UDcxVehicleDriveComponent4W::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDcxVehicleDriveComponent4W()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDcxVehicleDriveComponent4W_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDcxVehicleDriveComponent4W, 1067209617);
	template<> DCXVEHICLE_API UClass* StaticClass<UDcxVehicleDriveComponent4W>()
	{
		return UDcxVehicleDriveComponent4W::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDcxVehicleDriveComponent4W(Z_Construct_UClass_UDcxVehicleDriveComponent4W, &UDcxVehicleDriveComponent4W::StaticClass, TEXT("/Script/DcxVehicle"), TEXT("UDcxVehicleDriveComponent4W"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDcxVehicleDriveComponent4W);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
