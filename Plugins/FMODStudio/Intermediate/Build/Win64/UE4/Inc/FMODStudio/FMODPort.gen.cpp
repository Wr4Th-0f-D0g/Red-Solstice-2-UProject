// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Public/FMODPort.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODPort() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODPort_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODPort();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAsset();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
	void UFMODPort::StaticRegisterNativesUFMODPort()
	{
	}
	UClass* Z_Construct_UClass_UFMODPort_NoRegister()
	{
		return UFMODPort::StaticClass();
	}
	struct Z_Construct_UClass_UFMODPort_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFMODPort_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFMODAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODPort_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FMODPort.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FMODPort.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODPort_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODPort>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFMODPort_Statics::ClassParams = {
		&UFMODPort::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFMODPort_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODPort_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFMODPort()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFMODPort_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODPort, 245927910);
	template<> FMODSTUDIO_API UClass* StaticClass<UFMODPort>()
	{
		return UFMODPort::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODPort(Z_Construct_UClass_UFMODPort, &UFMODPort::StaticClass, TEXT("/Script/FMODStudio"), TEXT("UFMODPort"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODPort);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
