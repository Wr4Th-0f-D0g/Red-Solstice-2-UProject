// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonLoadingScreen/Public/LoadingProcessInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingProcessInterface() {}
// Cross Module References
	COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingProcessInterface_NoRegister();
	COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingProcessInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CommonLoadingScreen();
// End Cross Module References
	void ULoadingProcessInterface::StaticRegisterNativesULoadingProcessInterface()
	{
	}
	UClass* Z_Construct_UClass_ULoadingProcessInterface_NoRegister()
	{
		return ULoadingProcessInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULoadingProcessInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadingProcessInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonLoadingScreen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingProcessInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadingProcessInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadingProcessInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILoadingProcessInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadingProcessInterface_Statics::ClassParams = {
		&ULoadingProcessInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadingProcessInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingProcessInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadingProcessInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadingProcessInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadingProcessInterface, 1843145091);
	template<> COMMONLOADINGSCREEN_API UClass* StaticClass<ULoadingProcessInterface>()
	{
		return ULoadingProcessInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadingProcessInterface(Z_Construct_UClass_ULoadingProcessInterface, &ULoadingProcessInterface::StaticClass, TEXT("/Script/CommonLoadingScreen"), TEXT("ULoadingProcessInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingProcessInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
