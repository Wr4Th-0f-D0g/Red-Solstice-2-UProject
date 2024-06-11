// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicleDriveComponentNW.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicleDriveComponentNW() {}
// Cross Module References
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveComponentNW_NoRegister();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveComponentNW();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveComponent();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleDriveRawInputNW_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDcxVehicleDriveComponentNW::execGetRawInputNW)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDcxVehicleDriveRawInputNW**)Z_Param__Result=P_THIS->GetRawInputNW();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveComponentNW::execIsDrivenWheel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDrivenWheel(Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDcxVehicleDriveComponentNW::execSetDrivenWheel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_GET_UBOOL(Z_Param_bIsDriven);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDrivenWheel(Z_Param_WheelIndex,Z_Param_bIsDriven);
		P_NATIVE_END;
	}
	void UDcxVehicleDriveComponentNW::StaticRegisterNativesUDcxVehicleDriveComponentNW()
	{
		UClass* Class = UDcxVehicleDriveComponentNW::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRawInputNW", &UDcxVehicleDriveComponentNW::execGetRawInputNW },
			{ "IsDrivenWheel", &UDcxVehicleDriveComponentNW::execIsDrivenWheel },
			{ "SetDrivenWheel", &UDcxVehicleDriveComponentNW::execSetDrivenWheel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveComponentNW_GetRawInputNW_Statics
	{
		struct DcxVehicleDriveComponentNW_eventGetRawInputNW_Parms
		{
			UDcxVehicleDriveRawInputNW* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponentNW_GetRawInputNW_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveComponentNW_eventGetRawInputNW_Parms, ReturnValue), Z_Construct_UClass_UDcxVehicleDriveRawInputNW_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveComponentNW_GetRawInputNW_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponentNW_GetRawInputNW_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveComponentNW_GetRawInputNW_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponentNW.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveComponentNW_GetRawInputNW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveComponentNW, nullptr, "GetRawInputNW", nullptr, nullptr, sizeof(DcxVehicleDriveComponentNW_eventGetRawInputNW_Parms), Z_Construct_UFunction_UDcxVehicleDriveComponentNW_GetRawInputNW_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponentNW_GetRawInputNW_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveComponentNW_GetRawInputNW_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponentNW_GetRawInputNW_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveComponentNW_GetRawInputNW()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveComponentNW_GetRawInputNW_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveComponentNW_IsDrivenWheel_Statics
	{
		struct DcxVehicleDriveComponentNW_eventIsDrivenWheel_Parms
		{
			int32 WheelIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponentNW_IsDrivenWheel_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveComponentNW_eventIsDrivenWheel_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDcxVehicleDriveComponentNW_IsDrivenWheel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DcxVehicleDriveComponentNW_eventIsDrivenWheel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponentNW_IsDrivenWheel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DcxVehicleDriveComponentNW_eventIsDrivenWheel_Parms), &Z_Construct_UFunction_UDcxVehicleDriveComponentNW_IsDrivenWheel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveComponentNW_IsDrivenWheel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponentNW_IsDrivenWheel_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponentNW_IsDrivenWheel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveComponentNW_IsDrivenWheel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponentNW.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveComponentNW_IsDrivenWheel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveComponentNW, nullptr, "IsDrivenWheel", nullptr, nullptr, sizeof(DcxVehicleDriveComponentNW_eventIsDrivenWheel_Parms), Z_Construct_UFunction_UDcxVehicleDriveComponentNW_IsDrivenWheel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponentNW_IsDrivenWheel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveComponentNW_IsDrivenWheel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponentNW_IsDrivenWheel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveComponentNW_IsDrivenWheel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveComponentNW_IsDrivenWheel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDcxVehicleDriveComponentNW_SetDrivenWheel_Statics
	{
		struct DcxVehicleDriveComponentNW_eventSetDrivenWheel_Parms
		{
			int32 WheelIndex;
			bool bIsDriven;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static void NewProp_bIsDriven_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDriven;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponentNW_SetDrivenWheel_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicleDriveComponentNW_eventSetDrivenWheel_Parms, WheelIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDcxVehicleDriveComponentNW_SetDrivenWheel_Statics::NewProp_bIsDriven_SetBit(void* Obj)
	{
		((DcxVehicleDriveComponentNW_eventSetDrivenWheel_Parms*)Obj)->bIsDriven = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDcxVehicleDriveComponentNW_SetDrivenWheel_Statics::NewProp_bIsDriven = { "bIsDriven", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DcxVehicleDriveComponentNW_eventSetDrivenWheel_Parms), &Z_Construct_UFunction_UDcxVehicleDriveComponentNW_SetDrivenWheel_Statics::NewProp_bIsDriven_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDcxVehicleDriveComponentNW_SetDrivenWheel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponentNW_SetDrivenWheel_Statics::NewProp_WheelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDcxVehicleDriveComponentNW_SetDrivenWheel_Statics::NewProp_bIsDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDcxVehicleDriveComponentNW_SetDrivenWheel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponentNW.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDcxVehicleDriveComponentNW_SetDrivenWheel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDcxVehicleDriveComponentNW, nullptr, "SetDrivenWheel", nullptr, nullptr, sizeof(DcxVehicleDriveComponentNW_eventSetDrivenWheel_Parms), Z_Construct_UFunction_UDcxVehicleDriveComponentNW_SetDrivenWheel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponentNW_SetDrivenWheel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDcxVehicleDriveComponentNW_SetDrivenWheel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDcxVehicleDriveComponentNW_SetDrivenWheel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDcxVehicleDriveComponentNW_SetDrivenWheel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDcxVehicleDriveComponentNW_SetDrivenWheel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDcxVehicleDriveComponentNW_NoRegister()
	{
		return UDcxVehicleDriveComponentNW::StaticClass();
	}
	struct Z_Construct_UClass_UDcxVehicleDriveComponentNW_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDcxVehicleDriveComponentNW_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDcxVehicleDriveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDcxVehicleDriveComponentNW_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDcxVehicleDriveComponentNW_GetRawInputNW, "GetRawInputNW" }, // 1934672252
		{ &Z_Construct_UFunction_UDcxVehicleDriveComponentNW_IsDrivenWheel, "IsDrivenWheel" }, // 2496236696
		{ &Z_Construct_UFunction_UDcxVehicleDriveComponentNW_SetDrivenWheel, "SetDrivenWheel" }, // 3883251500
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDcxVehicleDriveComponentNW_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DcxVehicleDriveComponentNW.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicleDriveComponentNW.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDcxVehicleDriveComponentNW_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDcxVehicleDriveComponentNW>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDcxVehicleDriveComponentNW_Statics::ClassParams = {
		&UDcxVehicleDriveComponentNW::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDcxVehicleDriveComponentNW_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDcxVehicleDriveComponentNW_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDcxVehicleDriveComponentNW()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDcxVehicleDriveComponentNW_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDcxVehicleDriveComponentNW, 2891619824);
	template<> DCXVEHICLE_API UClass* StaticClass<UDcxVehicleDriveComponentNW>()
	{
		return UDcxVehicleDriveComponentNW::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDcxVehicleDriveComponentNW(Z_Construct_UClass_UDcxVehicleDriveComponentNW, &UDcxVehicleDriveComponentNW::StaticClass, TEXT("/Script/DcxVehicle"), TEXT("UDcxVehicleDriveComponentNW"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDcxVehicleDriveComponentNW);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
