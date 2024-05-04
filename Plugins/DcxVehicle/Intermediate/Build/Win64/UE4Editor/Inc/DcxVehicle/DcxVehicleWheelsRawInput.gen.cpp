// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleWheelsRawInput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleWheelsRawInput() {}
// Cross Module References
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleWheelsRawInput_NoRegister();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleWheelsRawInput();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
// End Cross Module References
	DEFINE_FUNCTION(UDcxVehicleWheelsRawInput::execGetThrottle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetThrottle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleWheelsRawInput::execSetThrottle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Throttle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThrottle(Z_Param_Throttle);
		P_NATIVE_END;
	}
	void UDcxVehicleWheelsRawInput::StaticRegisterNativesUDcxVehicleWheelsRawInput()
	{
		UClass* Class = UDcxVehicleWheelsRawInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetThrottle", &UDcxVehicleWheelsRawInput::execGetThrottle },
			{ "SetThrottle", &UDcxVehicleWheelsRawInput::execSetThrottle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsRawInput_GetThrottle_Statics
	{
		struct DcxVehicleWheelsRawInput_eventGetThrottle_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsRawInput_GetThrottle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsRawInput_eventGetThrottle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsRawInput_GetThrottle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsRawInput_GetThrottle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsRawInput_GetThrottle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsRawInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsRawInput_GetThrottle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsRawInput, nullptr, "GetThrottle", nullptr, nullptr, sizeof(DcxVehicleWheelsRawInput_eventGetThrottle_Parms), Z_Construct_UFunction_UDcxVehicleWheelsRawInput_GetThrottle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsRawInput_GetThrottle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsRawInput_GetThrottle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsRawInput_GetThrottle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsRawInput_GetThrottle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsRawInput_GetThrottle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleWheelsRawInput_SetThrottle_Statics
	{
		struct DcxVehicleWheelsRawInput_eventSetThrottle_Parms
		{
			float Throttle;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Throttle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Throttle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsRawInput_SetThrottle_Statics::NewProp_Throttle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDcxVehicleWheelsRawInput_SetThrottle_Statics::NewProp_Throttle = { "Throttle", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleWheelsRawInput_eventSetThrottle_Parms, Throttle), METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsRawInput_SetThrottle_Statics::NewProp_Throttle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsRawInput_SetThrottle_Statics::NewProp_Throttle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleWheelsRawInput_SetThrottle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleWheelsRawInput_SetThrottle_Statics::NewProp_Throttle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleWheelsRawInput_SetThrottle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsRawInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleWheelsRawInput_SetThrottle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleWheelsRawInput, nullptr, "SetThrottle", nullptr, nullptr, sizeof(DcxVehicleWheelsRawInput_eventSetThrottle_Parms), Z_Construct_UFunction_UDcxVehicleWheelsRawInput_SetThrottle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsRawInput_SetThrottle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleWheelsRawInput_SetThrottle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleWheelsRawInput_SetThrottle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleWheelsRawInput_SetThrottle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleWheelsRawInput_SetThrottle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDcxVehicleWheelsRawInput_NoRegister()
	{
		return UDcxVehicleWheelsRawInput::StaticClass();
	}
	struct Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrottleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ThrottleIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RawAnalogControls_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawAnalogControls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RawAnalogControls;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDcxVehicleWheelsRawInput_GetThrottle, "GetThrottle" }, // 1609698632
		{ &Z_Construct_UFunction_UDcxVehicleWheelsRawInput_SetThrottle, "SetThrottle" }, // 2410440408
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DcxVehicleWheelsRawInput.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsRawInput.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::NewProp_ThrottleIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsRawInput" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsRawInput.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::NewProp_ThrottleIndex = { "ThrottleIndex", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsRawInput, ThrottleIndex), METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::NewProp_ThrottleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::NewProp_ThrottleIndex_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::NewProp_RawAnalogControls_Inner = { "RawAnalogControls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::NewProp_RawAnalogControls_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicleWheelsRawInput" },
		{ "ModuleRelativePath", "Public/DcxVehicleWheelsRawInput.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::NewProp_RawAnalogControls = { "RawAnalogControls", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDcxVehicleWheelsRawInput, RawAnalogControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::NewProp_RawAnalogControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::NewProp_RawAnalogControls_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::NewProp_ThrottleIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::NewProp_RawAnalogControls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::NewProp_RawAnalogControls,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDcxVehicleWheelsRawInput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::ClassParams = {
		&UDcxVehicleWheelsRawInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDcxVehicleWheelsRawInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDcxVehicleWheelsRawInput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDcxVehicleWheelsRawInput, 521901439);
	template<> DCXVEHICLE_API UClass* StaticClass<UDcxVehicleWheelsRawInput>()
	{
		return UDcxVehicleWheelsRawInput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDcxVehicleWheelsRawInput(Z_Construct_UClass_UDcxVehicleWheelsRawInput, &UDcxVehicleWheelsRawInput::StaticClass, TEXT("/Script/DcxVehicle"), TEXT("UDcxVehicleWheelsRawInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDcxVehicleWheelsRawInput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
