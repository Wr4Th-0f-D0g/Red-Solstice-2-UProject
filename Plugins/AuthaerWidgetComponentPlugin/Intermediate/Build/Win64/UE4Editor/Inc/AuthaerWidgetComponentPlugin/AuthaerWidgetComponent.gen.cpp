// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AuthaerWidgetComponentPlugin/Public/AuthaerWidgetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuthaerWidgetComponent() {}
// Cross Module References
	AUTHAERWIDGETCOMPONENTPLUGIN_API UClass* Z_Construct_UClass_UAuthaerWidgetComponent_NoRegister();
	AUTHAERWIDGETCOMPONENTPLUGIN_API UClass* Z_Construct_UClass_UAuthaerWidgetComponent();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_AuthaerWidgetComponentPlugin();
	AUTHAERWIDGETCOMPONENTPLUGIN_API UClass* Z_Construct_UClass_UAuthaerComponentUserWidget_NoRegister();
// End Cross Module References
	void UAuthaerWidgetComponent::StaticRegisterNativesUAuthaerWidgetComponent()
	{
	}
	UClass* Z_Construct_UClass_UAuthaerWidgetComponent_NoRegister()
	{
		return UAuthaerWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAuthaerWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentUserWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ComponentUserWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoHideComponentOutsideScreenSpace_MetaData[];
#endif
		static void NewProp_AutoHideComponentOutsideScreenSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoHideComponentOutsideScreenSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuthaerWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AuthaerWidgetComponentPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthaerWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "AuthaerWidgetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AuthaerWidgetComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthaerWidgetComponent_Statics::NewProp_ComponentUserWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AuthaerWidgetComponent" },
		{ "ModuleRelativePath", "Public/AuthaerWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UAuthaerWidgetComponent_Statics::NewProp_ComponentUserWidget = { "ComponentUserWidget", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAuthaerWidgetComponent, ComponentUserWidget), Z_Construct_UClass_UAuthaerComponentUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAuthaerWidgetComponent_Statics::NewProp_ComponentUserWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthaerWidgetComponent_Statics::NewProp_ComponentUserWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthaerWidgetComponent_Statics::NewProp_AutoHideComponentOutsideScreenSpace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AuthaerWidgetComponent" },
		{ "ModuleRelativePath", "Public/AuthaerWidgetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAuthaerWidgetComponent_Statics::NewProp_AutoHideComponentOutsideScreenSpace_SetBit(void* Obj)
	{
		((UAuthaerWidgetComponent*)Obj)->AutoHideComponentOutsideScreenSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAuthaerWidgetComponent_Statics::NewProp_AutoHideComponentOutsideScreenSpace = { "AutoHideComponentOutsideScreenSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAuthaerWidgetComponent), &Z_Construct_UClass_UAuthaerWidgetComponent_Statics::NewProp_AutoHideComponentOutsideScreenSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAuthaerWidgetComponent_Statics::NewProp_AutoHideComponentOutsideScreenSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthaerWidgetComponent_Statics::NewProp_AutoHideComponentOutsideScreenSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuthaerWidgetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuthaerWidgetComponent_Statics::NewProp_ComponentUserWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuthaerWidgetComponent_Statics::NewProp_AutoHideComponentOutsideScreenSpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuthaerWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuthaerWidgetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAuthaerWidgetComponent_Statics::ClassParams = {
		&UAuthaerWidgetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAuthaerWidgetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAuthaerWidgetComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAuthaerWidgetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthaerWidgetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAuthaerWidgetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAuthaerWidgetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAuthaerWidgetComponent, 68699717);
	template<> AUTHAERWIDGETCOMPONENTPLUGIN_API UClass* StaticClass<UAuthaerWidgetComponent>()
	{
		return UAuthaerWidgetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAuthaerWidgetComponent(Z_Construct_UClass_UAuthaerWidgetComponent, &UAuthaerWidgetComponent::StaticClass, TEXT("/Script/AuthaerWidgetComponentPlugin"), TEXT("UAuthaerWidgetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuthaerWidgetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
