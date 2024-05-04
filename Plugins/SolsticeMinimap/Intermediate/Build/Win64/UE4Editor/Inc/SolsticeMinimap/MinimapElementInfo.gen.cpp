// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolsticeMinimap/Public/MinimapElementInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinimapElementInfo() {}
// Cross Module References
	SOLSTICEMINIMAP_API UScriptStruct* Z_Construct_UScriptStruct_FMinimapElementInfo();
	UPackage* Z_Construct_UPackage__Script_SolsticeMinimap();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_MinimapElementBase_NoRegister();
// End Cross Module References
class UScriptStruct* FMinimapElementInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOLSTICEMINIMAP_API uint32 Get_Z_Construct_UScriptStruct_FMinimapElementInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMinimapElementInfo, Z_Construct_UPackage__Script_SolsticeMinimap(), TEXT("MinimapElementInfo"), sizeof(FMinimapElementInfo), Get_Z_Construct_UScriptStruct_FMinimapElementInfo_Hash());
	}
	return Singleton;
}
template<> SOLSTICEMINIMAP_API UScriptStruct* StaticStruct<FMinimapElementInfo>()
{
	return FMinimapElementInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMinimapElementInfo(FMinimapElementInfo::StaticStruct, TEXT("/Script/SolsticeMinimap"), TEXT("MinimapElementInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SolsticeMinimap_StaticRegisterNativesFMinimapElementInfo
{
	FScriptStruct_SolsticeMinimap_StaticRegisterNativesFMinimapElementInfo()
	{
		UScriptStruct::DeferCppStructOps<FMinimapElementInfo>(FName(TEXT("MinimapElementInfo")));
	}
} ScriptStruct_SolsticeMinimap_StaticRegisterNativesFMinimapElementInfo;
	struct Z_Construct_UScriptStruct_FMinimapElementInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ElementIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementPointerIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ElementPointerIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RadiusIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RadiusTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFixedRotation_MetaData[];
#endif
		static void NewProp_bFixedRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFixedRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowPointerRotationChange_MetaData[];
#endif
		static void NewProp_bAllowPointerRotationChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowPointerRotationChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowRotationChange_MetaData[];
#endif
		static void NewProp_bAllowRotationChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRotationChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapImageSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinimapImageSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysVisible_MetaData[];
#endif
		static void NewProp_bAlwaysVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasRadiusShown_MetaData[];
#endif
		static void NewProp_bHasRadiusShown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasRadiusShown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowIconOnMinimap_MetaData[];
#endif
		static void NewProp_bShowIconOnMinimap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowIconOnMinimap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisibilityRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OverrideWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MinimapElementInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMinimapElementInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_ElementIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MinimapElementInfo" },
		{ "ModuleRelativePath", "Public/MinimapElementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_ElementIcon = { "ElementIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMinimapElementInfo, ElementIcon), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_ElementIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_ElementIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_ElementPointerIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MinimapElementInfo" },
		{ "ModuleRelativePath", "Public/MinimapElementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_ElementPointerIcon = { "ElementPointerIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMinimapElementInfo, ElementPointerIcon), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_ElementPointerIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_ElementPointerIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_RadiusIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MinimapElementInfo" },
		{ "ModuleRelativePath", "Public/MinimapElementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_RadiusIcon = { "RadiusIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMinimapElementInfo, RadiusIcon), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_RadiusIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_RadiusIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_Tint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MinimapElementInfo" },
		{ "ModuleRelativePath", "Public/MinimapElementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMinimapElementInfo, Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_RadiusTint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MinimapElementInfo" },
		{ "ModuleRelativePath", "Public/MinimapElementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_RadiusTint = { "RadiusTint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMinimapElementInfo, RadiusTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_RadiusTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_RadiusTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bFixedRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MinimapElementInfo" },
		{ "ModuleRelativePath", "Public/MinimapElementInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bFixedRotation_SetBit(void* Obj)
	{
		((FMinimapElementInfo*)Obj)->bFixedRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bFixedRotation = { "bFixedRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMinimapElementInfo), &Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bFixedRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bFixedRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bFixedRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bAllowPointerRotationChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MinimapElementInfo" },
		{ "ModuleRelativePath", "Public/MinimapElementInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bAllowPointerRotationChange_SetBit(void* Obj)
	{
		((FMinimapElementInfo*)Obj)->bAllowPointerRotationChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bAllowPointerRotationChange = { "bAllowPointerRotationChange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMinimapElementInfo), &Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bAllowPointerRotationChange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bAllowPointerRotationChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bAllowPointerRotationChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bAllowRotationChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MinimapElementInfo" },
		{ "ModuleRelativePath", "Public/MinimapElementInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bAllowRotationChange_SetBit(void* Obj)
	{
		((FMinimapElementInfo*)Obj)->bAllowRotationChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bAllowRotationChange = { "bAllowRotationChange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMinimapElementInfo), &Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bAllowRotationChange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bAllowRotationChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bAllowRotationChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_MinimapImageSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MinimapElementInfo" },
		{ "ModuleRelativePath", "Public/MinimapElementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_MinimapImageSize = { "MinimapImageSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMinimapElementInfo, MinimapImageSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_MinimapImageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_MinimapImageSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bAlwaysVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MinimapElementInfo" },
		{ "ModuleRelativePath", "Public/MinimapElementInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bAlwaysVisible_SetBit(void* Obj)
	{
		((FMinimapElementInfo*)Obj)->bAlwaysVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bAlwaysVisible = { "bAlwaysVisible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMinimapElementInfo), &Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bAlwaysVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bAlwaysVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bAlwaysVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bHasRadiusShown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MinimapElementInfo" },
		{ "ModuleRelativePath", "Public/MinimapElementInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bHasRadiusShown_SetBit(void* Obj)
	{
		((FMinimapElementInfo*)Obj)->bHasRadiusShown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bHasRadiusShown = { "bHasRadiusShown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMinimapElementInfo), &Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bHasRadiusShown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bHasRadiusShown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bHasRadiusShown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bShowIconOnMinimap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MinimapElementInfo" },
		{ "ModuleRelativePath", "Public/MinimapElementInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bShowIconOnMinimap_SetBit(void* Obj)
	{
		((FMinimapElementInfo*)Obj)->bShowIconOnMinimap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bShowIconOnMinimap = { "bShowIconOnMinimap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMinimapElementInfo), &Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bShowIconOnMinimap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bShowIconOnMinimap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bShowIconOnMinimap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MinimapElementInfo" },
		{ "ModuleRelativePath", "Public/MinimapElementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMinimapElementInfo, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_VisibilityRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MinimapElementInfo" },
		{ "ModuleRelativePath", "Public/MinimapElementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_VisibilityRadius = { "VisibilityRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMinimapElementInfo, VisibilityRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_VisibilityRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_VisibilityRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_OverrideWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MinimapElementInfo" },
		{ "ModuleRelativePath", "Public/MinimapElementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_OverrideWidget = { "OverrideWidget", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMinimapElementInfo, OverrideWidget), Z_Construct_UClass_UMapSystem_MinimapElementBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_OverrideWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_OverrideWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_ElementIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_ElementPointerIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_RadiusIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_RadiusTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bFixedRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bAllowPointerRotationChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bAllowRotationChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_MinimapImageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bAlwaysVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bHasRadiusShown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_bShowIconOnMinimap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_VisibilityRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::NewProp_OverrideWidget,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SolsticeMinimap,
		nullptr,
		&NewStructOps,
		"MinimapElementInfo",
		sizeof(FMinimapElementInfo),
		alignof(FMinimapElementInfo),
		Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMinimapElementInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMinimapElementInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SolsticeMinimap();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MinimapElementInfo"), sizeof(FMinimapElementInfo), Get_Z_Construct_UScriptStruct_FMinimapElementInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMinimapElementInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMinimapElementInfo_Hash() { return 753567060U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
