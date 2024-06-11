// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleDriveComponentTank.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleDriveComponentTank() {}
// Cross Module References
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveComponentTank_NoRegister();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveComponentTank();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveComponent();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
	DCXVEHICLE_API UEnum* Z_Construct_UEnum_DcxVehicle_EDcxVehicleDriveControlModelTank();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveRawInputTank_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDcxVehicleDriveComponentTank::execGetDriveModel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EDcxVehicleDriveControlModelTank::Type>*)Z_Param__Result=P_THIS->GetDriveModel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveComponentTank::execGetRawInputTank)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDcxVehicleDriveRawInputTank**)Z_Param__Result=P_THIS->GetRawInputTank();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveComponentTank::execSetDriveModel)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_ControlModel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDriveModel(EDcxVehicleDriveControlModelTank::Type(Z_Param_ControlModel));
		P_NATIVE_END;
	}
	void UDcxVehicleDriveComponentTank::StaticRegisterNativesUDcxVehicleDriveComponentTank()
	{
		UClass* Class = UDcxVehicleDriveComponentTank::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDriveModel", &UDcxVehicleDriveComponentTank::execGetDriveModel },
			{ "GetRawInputTank", &UDcxVehicleDriveComponentTank::execGetRawInputTank },
			{ "SetDriveModel", &UDcxVehicleDriveComponentTank::execSetDriveModel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetDriveModel_Statics
	{
		struct DcxVehicleDriveComponentTank_eventGetDriveModel_Parms
		{
			TEnumAsByte<EDcxVehicleDriveControlModelTank::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetDriveModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveComponentTank_eventGetDriveModel_Parms, ReturnValue), Z_Construct_UEnum_DcxVehicle_EDcxVehicleDriveControlModelTank, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetDriveModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetDriveModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetDriveModel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponentTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetDriveModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveComponentTank, nullptr, "GetDriveModel", nullptr, nullptr, sizeof(DcxVehicleDriveComponentTank_eventGetDriveModel_Parms), Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetDriveModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetDriveModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetDriveModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetDriveModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetDriveModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetDriveModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetRawInputTank_Statics
	{
		struct DcxVehicleDriveComponentTank_eventGetRawInputTank_Parms
		{
			UDcxVehicleDriveRawInputTank* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetRawInputTank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveComponentTank_eventGetRawInputTank_Parms, ReturnValue), Z_Construct_UClass_UDcxVehicleDriveRawInputTank_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetRawInputTank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetRawInputTank_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetRawInputTank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponentTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetRawInputTank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveComponentTank, nullptr, "GetRawInputTank", nullptr, nullptr, sizeof(DcxVehicleDriveComponentTank_eventGetRawInputTank_Parms), Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetRawInputTank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetRawInputTank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetRawInputTank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetRawInputTank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetRawInputTank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetRawInputTank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveComponentTank_SetDriveModel_Statics
	{
		struct DcxVehicleDriveComponentTank_eventSetDriveModel_Parms
		{
			TEnumAsByte<EDcxVehicleDriveControlModelTank::Type> ControlModel;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControlModel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponentTank_SetDriveModel_Statics::NewProp_ControlModel = { "ControlModel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveComponentTank_eventSetDriveModel_Parms, ControlModel), Z_Construct_UEnum_DcxVehicle_EDcxVehicleDriveControlModelTank, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveComponentTank_SetDriveModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponentTank_SetDriveModel_Statics::NewProp_ControlModel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveComponentTank_SetDriveModel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponentTank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveComponentTank_SetDriveModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveComponentTank, nullptr, "SetDriveModel", nullptr, nullptr, sizeof(DcxVehicleDriveComponentTank_eventSetDriveModel_Parms), Z_Construct_UFunction_UDcxVehicleDriveComponentTank_SetDriveModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponentTank_SetDriveModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveComponentTank_SetDriveModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponentTank_SetDriveModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveComponentTank_SetDriveModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveComponentTank_SetDriveModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDcxVehicleDriveComponentTank_NoRegister()
	{
		return UDcxVehicleDriveComponentTank::StaticClass();
	}
	struct Z_Construct_UClass_UDcxVehicleDriveComponentTank_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DriveModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DriveModel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDcxVehicleDriveComponentTank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDcxVehicleDriveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDcxVehicleDriveComponentTank_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetDriveModel, "GetDriveModel" }, // 1884181242
		{ &Z_Construct_UFunction_UDcxVehicleDriveComponentTank_GetRawInputTank, "GetRawInputTank" }, // 844591818
		{ &Z_Construct_UFunction_UDcxVehicleDriveComponentTank_SetDriveModel, "SetDriveModel" }, // 3534865354
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleDriveComponentTank_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DcxVehicleDriveComponentTank.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponentTank.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleDriveComponentTank_Statics::NewProp_DriveModel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleDriveComponentTank" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponentTank.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDcxVehicleDriveComponentTank_Statics::NewProp_DriveModel = { "DriveModel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleDriveComponentTank, DriveModel), Z_Construct_UEnum_DcxVehicle_EDcxVehicleDriveControlModelTank, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleDriveComponentTank_Statics::NewProp_DriveModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveComponentTank_Statics::NewProp_DriveModel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDcxVehicleDriveComponentTank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleDriveComponentTank_Statics::NewProp_DriveModel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDcxVehicleDriveComponentTank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDcxVehicleDriveComponentTank>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDcxVehicleDriveComponentTank_Statics::ClassParams = {
		&UDcxVehicleDriveComponentTank::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDcxVehicleDriveComponentTank_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveComponentTank_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleDriveComponentTank_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveComponentTank_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDcxVehicleDriveComponentTank()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDcxVehicleDriveComponentTank_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDcxVehicleDriveComponentTank, 12644026);
	template<> DCXVEHICLE_API UClass* StaticClass<UDcxVehicleDriveComponentTank>()
	{
		return UDcxVehicleDriveComponentTank::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDcxVehicleDriveComponentTank(Z_Construct_UClass_UDcxVehicleDriveComponentTank, &UDcxVehicleDriveComponentTank::StaticClass, TEXT("/Script/DcxVehicle"), TEXT("UDcxVehicleDriveComponentTank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDcxVehicleDriveComponentTank);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
