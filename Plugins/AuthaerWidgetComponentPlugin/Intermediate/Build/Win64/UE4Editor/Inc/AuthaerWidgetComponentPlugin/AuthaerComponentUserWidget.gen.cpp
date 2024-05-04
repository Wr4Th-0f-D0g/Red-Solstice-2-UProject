// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AuthaerWidgetComponentPlugin/Public/AuthaerComponentUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuthaerComponentUserWidget() {}
// Cross Module References
	AUTHAERWIDGETCOMPONENTPLUGIN_API UClass* Z_Construct_UClass_UAuthaerComponentUserWidget_NoRegister();
	AUTHAERWIDGETCOMPONENTPLUGIN_API UClass* Z_Construct_UClass_UAuthaerComponentUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_AuthaerWidgetComponentPlugin();
	AUTHAERWIDGETCOMPONENTPLUGIN_API UClass* Z_Construct_UClass_UAuthaerWidgetComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAuthaerComponentUserWidget::execGetOwningComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAuthaerWidgetComponent**)Z_Param__Result=P_THIS->GetOwningComponent();
		P_NATIVE_END;
	}
	void UAuthaerComponentUserWidget::StaticRegisterNativesUAuthaerComponentUserWidget()
	{
		UClass* Class = UAuthaerComponentUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningComponent", &UAuthaerComponentUserWidget::execGetOwningComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAuthaerComponentUserWidget_GetOwningComponent_Statics
	{
		struct AuthaerComponentUserWidget_eventGetOwningComponent_Parms
		{
			UAuthaerWidgetComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthaerComponentUserWidget_GetOwningComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuthaerComponentUserWidget_GetOwningComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuthaerComponentUserWidget_eventGetOwningComponent_Parms, ReturnValue), Z_Construct_UClass_UAuthaerWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAuthaerComponentUserWidget_GetOwningComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthaerComponentUserWidget_GetOwningComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuthaerComponentUserWidget_GetOwningComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthaerComponentUserWidget_GetOwningComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthaerComponentUserWidget_GetOwningComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AuthaerComponentUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuthaerComponentUserWidget_GetOwningComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuthaerComponentUserWidget, nullptr, "GetOwningComponent", nullptr, nullptr, sizeof(AuthaerComponentUserWidget_eventGetOwningComponent_Parms), Z_Construct_UFunction_UAuthaerComponentUserWidget_GetOwningComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthaerComponentUserWidget_GetOwningComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAuthaerComponentUserWidget_GetOwningComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthaerComponentUserWidget_GetOwningComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAuthaerComponentUserWidget_GetOwningComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAuthaerComponentUserWidget_GetOwningComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAuthaerComponentUserWidget_NoRegister()
	{
		return UAuthaerComponentUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UAuthaerComponentUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuthaerComponentUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AuthaerWidgetComponentPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAuthaerComponentUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuthaerComponentUserWidget_GetOwningComponent, "GetOwningComponent" }, // 3069965502
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthaerComponentUserWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AuthaerComponentUserWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AuthaerComponentUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthaerComponentUserWidget_Statics::NewProp_OwningComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AuthaerComponentUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AuthaerComponentUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAuthaerComponentUserWidget_Statics::NewProp_OwningComponent = { "OwningComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAuthaerComponentUserWidget, OwningComponent), Z_Construct_UClass_UAuthaerWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAuthaerComponentUserWidget_Statics::NewProp_OwningComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthaerComponentUserWidget_Statics::NewProp_OwningComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuthaerComponentUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuthaerComponentUserWidget_Statics::NewProp_OwningComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuthaerComponentUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuthaerComponentUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAuthaerComponentUserWidget_Statics::ClassParams = {
		&UAuthaerComponentUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAuthaerComponentUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAuthaerComponentUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAuthaerComponentUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthaerComponentUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAuthaerComponentUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAuthaerComponentUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAuthaerComponentUserWidget, 2178056410);
	template<> AUTHAERWIDGETCOMPONENTPLUGIN_API UClass* StaticClass<UAuthaerComponentUserWidget>()
	{
		return UAuthaerComponentUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAuthaerComponentUserWidget(Z_Construct_UClass_UAuthaerComponentUserWidget, &UAuthaerComponentUserWidget::StaticClass, TEXT("/Script/AuthaerWidgetComponentPlugin"), TEXT("UAuthaerComponentUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuthaerComponentUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
