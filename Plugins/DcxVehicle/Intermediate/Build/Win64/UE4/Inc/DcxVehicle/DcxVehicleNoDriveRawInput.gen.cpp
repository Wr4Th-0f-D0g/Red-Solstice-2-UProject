// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleNoDriveRawInput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleNoDriveRawInput() {}
// Cross Module References
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleNoDriveRawInput_NoRegister();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleNoDriveRawInput();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleWheelsRawInput();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
// End Cross Module References
	DEFINE_FUNCTION(UDcxVehicleNoDriveRawInput::execGetBrake)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBrake();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleNoDriveRawInput::execGetSteer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSteer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleNoDriveRawInput::execSetBrake)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewBrake);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrake(Z_Param_NewBrake);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleNoDriveRawInput::execSetSteer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSteer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSteer(Z_Param_NewSteer);
		P_NATIVE_END;
	}
	void UDcxVehicleNoDriveRawInput::StaticRegisterNativesUDcxVehicleNoDriveRawInput()
	{
		UClass* Class = UDcxVehicleNoDriveRawInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBrake", &UDcxVehicleNoDriveRawInput::execGetBrake },
			{ "GetSteer", &UDcxVehicleNoDriveRawInput::execGetSteer },
			{ "SetBrake", &UDcxVehicleNoDriveRawInput::execSetBrake },
			{ "SetSteer", &UDcxVehicleNoDriveRawInput::execSetSteer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetBrake_Statics
	{
		struct DcxVehicleNoDriveRawInput_eventGetBrake_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetBrake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleNoDriveRawInput_eventGetBrake_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetBrake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetBrake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetBrake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleNoDriveRawInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleNoDriveRawInput, nullptr, "GetBrake", nullptr, nullptr, sizeof(DcxVehicleNoDriveRawInput_eventGetBrake_Parms), Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetBrake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetBrake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetBrake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetBrake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetBrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetBrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetSteer_Statics
	{
		struct DcxVehicleNoDriveRawInput_eventGetSteer_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetSteer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleNoDriveRawInput_eventGetSteer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetSteer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetSteer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetSteer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleNoDriveRawInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetSteer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleNoDriveRawInput, nullptr, "GetSteer", nullptr, nullptr, sizeof(DcxVehicleNoDriveRawInput_eventGetSteer_Parms), Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetSteer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetSteer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetSteer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetSteer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetSteer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetSteer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetBrake_Statics
	{
		struct DcxVehicleNoDriveRawInput_eventSetBrake_Parms
		{
			float NewBrake;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewBrake_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewBrake;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetBrake_Statics::NewProp_NewBrake_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetBrake_Statics::NewProp_NewBrake = { "NewBrake", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleNoDriveRawInput_eventSetBrake_Parms, NewBrake), METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetBrake_Statics::NewProp_NewBrake_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetBrake_Statics::NewProp_NewBrake_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetBrake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetBrake_Statics::NewProp_NewBrake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetBrake_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleNoDriveRawInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleNoDriveRawInput, nullptr, "SetBrake", nullptr, nullptr, sizeof(DcxVehicleNoDriveRawInput_eventSetBrake_Parms), Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetBrake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetBrake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetBrake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetBrake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetBrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetBrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetSteer_Statics
	{
		struct DcxVehicleNoDriveRawInput_eventSetSteer_Parms
		{
			float NewSteer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSteer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSteer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetSteer_Statics::NewProp_NewSteer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetSteer_Statics::NewProp_NewSteer = { "NewSteer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleNoDriveRawInput_eventSetSteer_Parms, NewSteer), METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetSteer_Statics::NewProp_NewSteer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetSteer_Statics::NewProp_NewSteer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetSteer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetSteer_Statics::NewProp_NewSteer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetSteer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleNoDriveRawInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetSteer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleNoDriveRawInput, nullptr, "SetSteer", nullptr, nullptr, sizeof(DcxVehicleNoDriveRawInput_eventSetSteer_Parms), Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetSteer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetSteer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetSteer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetSteer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetSteer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetSteer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDcxVehicleNoDriveRawInput_NoRegister()
	{
		return UDcxVehicleNoDriveRawInput::StaticClass();
	}
	struct Z_Construct_UClass_UDcxVehicleNoDriveRawInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDcxVehicleNoDriveRawInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDcxVehicleWheelsRawInput,
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDcxVehicleNoDriveRawInput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetBrake, "GetBrake" }, // 1518473596
		{ &Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_GetSteer, "GetSteer" }, // 3493078198
		{ &Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetBrake, "SetBrake" }, // 1883217366
		{ &Z_Construct_UFunction_UDcxVehicleNoDriveRawInput_SetSteer, "SetSteer" }, // 1994195137
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleNoDriveRawInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DcxVehicleNoDriveRawInput.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleNoDriveRawInput.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDcxVehicleNoDriveRawInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDcxVehicleNoDriveRawInput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDcxVehicleNoDriveRawInput_Statics::ClassParams = {
		&UDcxVehicleNoDriveRawInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleNoDriveRawInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleNoDriveRawInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDcxVehicleNoDriveRawInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDcxVehicleNoDriveRawInput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDcxVehicleNoDriveRawInput, 3096719122);
	template<> DCXVEHICLE_API UClass* StaticClass<UDcxVehicleNoDriveRawInput>()
	{
		return UDcxVehicleNoDriveRawInput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDcxVehicleNoDriveRawInput(Z_Construct_UClass_UDcxVehicleNoDriveRawInput, &UDcxVehicleNoDriveRawInput::StaticClass, TEXT("/Script/DcxVehicle"), TEXT("UDcxVehicleNoDriveRawInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDcxVehicleNoDriveRawInput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
