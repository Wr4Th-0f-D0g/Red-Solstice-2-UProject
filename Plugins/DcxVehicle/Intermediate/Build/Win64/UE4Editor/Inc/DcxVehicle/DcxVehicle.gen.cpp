// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DcxVehicle/Public/DcxVehicle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDcxVehicle() {}
// Cross Module References
	DCXVEHICLE_API UClass* Z_Construct_UClass_ADcxVehicle_NoRegister();
	DCXVEHICLE_API UClass* Z_Construct_UClass_ADcxVehicle();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_DcxVehicle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	DCXVEHICLE_API UClass* Z_Construct_UClass_UDcxVehicleWheelsComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADcxVehicle::execDcxVehicleSetBasisVectors)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Up);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Forward);
		P_FINISH;
		P_NATIVE_BEGIN;
		ADcxVehicle::DcxVehicleSetBasisVectors(Z_Param_Out_Up,Z_Param_Out_Forward);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADcxVehicle::execGetMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADcxVehicle::execGetVehicleWheels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDcxVehicleWheelsComponent**)Z_Param__Result=P_THIS->GetVehicleWheels();
		P_NATIVE_END;
	}
	void ADcxVehicle::StaticRegisterNativesADcxVehicle()
	{
		UClass* Class = ADcxVehicle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DcxVehicleSetBasisVectors", &ADcxVehicle::execDcxVehicleSetBasisVectors },
			{ "GetMesh", &ADcxVehicle::execGetMesh },
			{ "GetVehicleWheels", &ADcxVehicle::execGetVehicleWheels },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADcxVehicle_DcxVehicleSetBasisVectors_Statics
	{
		struct DcxVehicle_eventDcxVehicleSetBasisVectors_Parms
		{
			FVector Up;
			FVector Forward;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Up_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Up;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Forward_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Forward;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADcxVehicle_DcxVehicleSetBasisVectors_Statics::NewProp_Up_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADcxVehicle_DcxVehicleSetBasisVectors_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicle_eventDcxVehicleSetBasisVectors_Parms, Up), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ADcxVehicle_DcxVehicleSetBasisVectors_Statics::NewProp_Up_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADcxVehicle_DcxVehicleSetBasisVectors_Statics::NewProp_Up_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADcxVehicle_DcxVehicleSetBasisVectors_Statics::NewProp_Forward_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADcxVehicle_DcxVehicleSetBasisVectors_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicle_eventDcxVehicleSetBasisVectors_Parms, Forward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ADcxVehicle_DcxVehicleSetBasisVectors_Statics::NewProp_Forward_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADcxVehicle_DcxVehicleSetBasisVectors_Statics::NewProp_Forward_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADcxVehicle_DcxVehicleSetBasisVectors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADcxVehicle_DcxVehicleSetBasisVectors_Statics::NewProp_Up,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADcxVehicle_DcxVehicleSetBasisVectors_Statics::NewProp_Forward,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADcxVehicle_DcxVehicleSetBasisVectors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADcxVehicle_DcxVehicleSetBasisVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADcxVehicle, nullptr, "DcxVehicleSetBasisVectors", nullptr, nullptr, sizeof(DcxVehicle_eventDcxVehicleSetBasisVectors_Parms), Z_Construct_UFunction_ADcxVehicle_DcxVehicleSetBasisVectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADcxVehicle_DcxVehicleSetBasisVectors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADcxVehicle_DcxVehicleSetBasisVectors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADcxVehicle_DcxVehicleSetBasisVectors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADcxVehicle_DcxVehicleSetBasisVectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADcxVehicle_DcxVehicleSetBasisVectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADcxVehicle_GetMesh_Statics
	{
		struct DcxVehicle_eventGetMesh_Parms
		{
			USkeletalMeshComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADcxVehicle_GetMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADcxVehicle_GetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicle_eventGetMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADcxVehicle_GetMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADcxVehicle_GetMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADcxVehicle_GetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADcxVehicle_GetMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADcxVehicle_GetMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADcxVehicle_GetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADcxVehicle, nullptr, "GetMesh", nullptr, nullptr, sizeof(DcxVehicle_eventGetMesh_Parms), Z_Construct_UFunction_ADcxVehicle_GetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADcxVehicle_GetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADcxVehicle_GetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADcxVehicle_GetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADcxVehicle_GetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADcxVehicle_GetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADcxVehicle_GetVehicleWheels_Statics
	{
		struct DcxVehicle_eventGetVehicleWheels_Parms
		{
			UDcxVehicleWheelsComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADcxVehicle_GetVehicleWheels_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADcxVehicle_GetVehicleWheels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DcxVehicle_eventGetVehicleWheels_Parms, ReturnValue), Z_Construct_UClass_UDcxVehicleWheelsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADcxVehicle_GetVehicleWheels_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADcxVehicle_GetVehicleWheels_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADcxVehicle_GetVehicleWheels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADcxVehicle_GetVehicleWheels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADcxVehicle_GetVehicleWheels_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DcxVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADcxVehicle_GetVehicleWheels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADcxVehicle, nullptr, "GetVehicleWheels", nullptr, nullptr, sizeof(DcxVehicle_eventGetVehicleWheels_Parms), Z_Construct_UFunction_ADcxVehicle_GetVehicleWheels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADcxVehicle_GetVehicleWheels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADcxVehicle_GetVehicleWheels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADcxVehicle_GetVehicleWheels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADcxVehicle_GetVehicleWheels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADcxVehicle_GetVehicleWheels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADcxVehicle_NoRegister()
	{
		return ADcxVehicle::StaticClass();
	}
	struct Z_Construct_UClass_ADcxVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleWheels_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehicleWheels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADcxVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_DcxVehicle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADcxVehicle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADcxVehicle_DcxVehicleSetBasisVectors, "DcxVehicleSetBasisVectors" }, // 386474546
		{ &Z_Construct_UFunction_ADcxVehicle_GetMesh, "GetMesh" }, // 4195433878
		{ &Z_Construct_UFunction_ADcxVehicle_GetVehicleWheels, "GetVehicleWheels" }, // 3416685559
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADcxVehicle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DcxVehicle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicle.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADcxVehicle_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADcxVehicle_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADcxVehicle, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADcxVehicle_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADcxVehicle_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADcxVehicle_Statics::NewProp_VehicleWheels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DcxVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DcxVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADcxVehicle_Statics::NewProp_VehicleWheels = { "VehicleWheels", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADcxVehicle, VehicleWheels), Z_Construct_UClass_UDcxVehicleWheelsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADcxVehicle_Statics::NewProp_VehicleWheels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADcxVehicle_Statics::NewProp_VehicleWheels_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADcxVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADcxVehicle_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADcxVehicle_Statics::NewProp_VehicleWheels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADcxVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADcxVehicle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADcxVehicle_Statics::ClassParams = {
		&ADcxVehicle::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADcxVehicle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADcxVehicle_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ADcxVehicle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADcxVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADcxVehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADcxVehicle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADcxVehicle, 2382862161);
	template<> DCXVEHICLE_API UClass* StaticClass<ADcxVehicle>()
	{
		return ADcxVehicle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADcxVehicle(Z_Construct_UClass_ADcxVehicle, &ADcxVehicle::StaticClass, TEXT("/Script/DcxVehicle"), TEXT("ADcxVehicle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADcxVehicle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
