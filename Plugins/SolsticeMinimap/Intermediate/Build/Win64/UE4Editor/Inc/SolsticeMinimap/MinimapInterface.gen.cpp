// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolsticeMinimap/Public/MinimapInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinimapInterface() {}
// Cross Module References
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMinimapInterface_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMinimapInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_SolsticeMinimap();
// End Cross Module References
	void UMinimapInterface::StaticRegisterNativesUMinimapInterface()
	{
	}
	UClass* Z_Construct_UClass_UMinimapInterface_NoRegister()
	{
		return UMinimapInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMinimapInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMinimapInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SolsticeMinimap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinimapInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MinimapInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMinimapInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMinimapInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMinimapInterface_Statics::ClassParams = {
		&UMinimapInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMinimapInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMinimapInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMinimapInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMinimapInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMinimapInterface, 109297310);
	template<> SOLSTICEMINIMAP_API UClass* StaticClass<UMinimapInterface>()
	{
		return UMinimapInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMinimapInterface(Z_Construct_UClass_UMinimapInterface, &UMinimapInterface::StaticClass, TEXT("/Script/SolsticeMinimap"), TEXT("UMinimapInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMinimapInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
