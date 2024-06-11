// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolsticeMinimap/Public/MapElementInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapElementInfo() {}
// Cross Module References
	SOLSTICEMINIMAP_API UScriptStruct* Z_Construct_UScriptStruct_FMapElementInfo();
	UPackage* Z_Construct_UPackage__Script_SolsticeMinimap();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_TooltipWidgetBase_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystem_MapElementBase_NoRegister();
// End Cross Module References
class UScriptStruct* FMapElementInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOLSTICEMINIMAP_API uint32 Get_Z_Construct_UScriptStruct_FMapElementInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapElementInfo, Z_Construct_UPackage__Script_SolsticeMinimap(), TEXT("MapElementInfo"), sizeof(FMapElementInfo), Get_Z_Construct_UScriptStruct_FMapElementInfo_Hash());
	}
	return Singleton;
}
template<> SOLSTICEMINIMAP_API UScriptStruct* StaticStruct<FMapElementInfo>()
{
	return FMapElementInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMapElementInfo(FMapElementInfo::StaticStruct, TEXT("/Script/SolsticeMinimap"), TEXT("MapElementInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SolsticeMinimap_StaticRegisterNativesFMapElementInfo
{
	FScriptStruct_SolsticeMinimap_StaticRegisterNativesFMapElementInfo()
	{
		UScriptStruct::DeferCppStructOps<FMapElementInfo>(FName(TEXT("MapElementInfo")));
	}
} ScriptStruct_SolsticeMinimap_StaticRegisterNativesFMapElementInfo;
	struct Z_Construct_UScriptStruct_FMapElementInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanHover_MetaData[];
#endif
		static void NewProp_bCanHover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanHover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDistance_MetaData[];
#endif
		static void NewProp_bShowDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowRotationChange_MetaData[];
#endif
		static void NewProp_bAllowRotationChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRotationChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ElementIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementHoveredIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ElementHoveredIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ElementSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementHoverSizeRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElementHoverSizeRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysVisible_MetaData[];
#endif
		static void NewProp_bAlwaysVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisibilityRadius;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ToolTipData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolTipData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ToolTipData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bToolTipAlwaysDisplayed_MetaData[];
#endif
		static void NewProp_bToolTipAlwaysDisplayed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToolTipAlwaysDisplayed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TooltipOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolTipWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ToolTipWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OverrideWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElementInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MapElementInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapElementInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bCanHover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapElementInfo" },
		{ "ModuleRelativePath", "Public/MapElementInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bCanHover_SetBit(void* Obj)
	{
		((FMapElementInfo*)Obj)->bCanHover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bCanHover = { "bCanHover", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMapElementInfo), &Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bCanHover_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bCanHover_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bCanHover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bShowDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapElementInfo" },
		{ "ModuleRelativePath", "Public/MapElementInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bShowDistance_SetBit(void* Obj)
	{
		((FMapElementInfo*)Obj)->bShowDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bShowDistance = { "bShowDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMapElementInfo), &Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bShowDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bShowDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bShowDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bAllowRotationChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapElementInfo" },
		{ "ModuleRelativePath", "Public/MapElementInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bAllowRotationChange_SetBit(void* Obj)
	{
		((FMapElementInfo*)Obj)->bAllowRotationChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bAllowRotationChange = { "bAllowRotationChange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMapElementInfo), &Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bAllowRotationChange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bAllowRotationChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bAllowRotationChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ElementIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapElementInfo" },
		{ "ModuleRelativePath", "Public/MapElementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ElementIcon = { "ElementIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapElementInfo, ElementIcon), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ElementIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ElementIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_Tint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapElementInfo" },
		{ "ModuleRelativePath", "Public/MapElementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapElementInfo, Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ElementHoveredIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapElementInfo" },
		{ "ModuleRelativePath", "Public/MapElementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ElementHoveredIcon = { "ElementHoveredIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapElementInfo, ElementHoveredIcon), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ElementHoveredIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ElementHoveredIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ElementSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapElementInfo" },
		{ "ModuleRelativePath", "Public/MapElementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ElementSize = { "ElementSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapElementInfo, ElementSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ElementSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ElementSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ElementHoverSizeRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapElementInfo" },
		{ "ModuleRelativePath", "Public/MapElementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ElementHoverSizeRatio = { "ElementHoverSizeRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapElementInfo, ElementHoverSizeRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ElementHoverSizeRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ElementHoverSizeRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bAlwaysVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapElementInfo" },
		{ "ModuleRelativePath", "Public/MapElementInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bAlwaysVisible_SetBit(void* Obj)
	{
		((FMapElementInfo*)Obj)->bAlwaysVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bAlwaysVisible = { "bAlwaysVisible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMapElementInfo), &Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bAlwaysVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bAlwaysVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bAlwaysVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_VisibilityRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapElementInfo" },
		{ "ModuleRelativePath", "Public/MapElementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_VisibilityRadius = { "VisibilityRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapElementInfo, VisibilityRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_VisibilityRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_VisibilityRadius_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ToolTipData_Inner = { "ToolTipData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ToolTipData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapElementInfo" },
		{ "ModuleRelativePath", "Public/MapElementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ToolTipData = { "ToolTipData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapElementInfo, ToolTipData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ToolTipData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ToolTipData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bToolTipAlwaysDisplayed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapElementInfo" },
		{ "ModuleRelativePath", "Public/MapElementInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bToolTipAlwaysDisplayed_SetBit(void* Obj)
	{
		((FMapElementInfo*)Obj)->bToolTipAlwaysDisplayed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bToolTipAlwaysDisplayed = { "bToolTipAlwaysDisplayed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMapElementInfo), &Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bToolTipAlwaysDisplayed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bToolTipAlwaysDisplayed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bToolTipAlwaysDisplayed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_TooltipOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapElementInfo" },
		{ "ModuleRelativePath", "Public/MapElementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_TooltipOffset = { "TooltipOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapElementInfo, TooltipOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_TooltipOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_TooltipOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ToolTipWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapElementInfo" },
		{ "ModuleRelativePath", "Public/MapElementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ToolTipWidgetClass = { "ToolTipWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapElementInfo, ToolTipWidgetClass), Z_Construct_UClass_UMapSystem_TooltipWidgetBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ToolTipWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ToolTipWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_OverrideWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapElementInfo" },
		{ "ModuleRelativePath", "Public/MapElementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_OverrideWidget = { "OverrideWidget", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapElementInfo, OverrideWidget), Z_Construct_UClass_UMapSystem_MapElementBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_OverrideWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_OverrideWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapElementInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bCanHover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bShowDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bAllowRotationChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ElementIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ElementHoveredIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ElementSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ElementHoverSizeRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bAlwaysVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_VisibilityRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ToolTipData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ToolTipData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_bToolTipAlwaysDisplayed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_TooltipOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_ToolTipWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapElementInfo_Statics::NewProp_OverrideWidget,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapElementInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SolsticeMinimap,
		nullptr,
		&NewStructOps,
		"MapElementInfo",
		sizeof(FMapElementInfo),
		alignof(FMapElementInfo),
		Z_Construct_UScriptStruct_FMapElementInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElementInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapElementInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapElementInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapElementInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMapElementInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SolsticeMinimap();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MapElementInfo"), sizeof(FMapElementInfo), Get_Z_Construct_UScriptStruct_FMapElementInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMapElementInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMapElementInfo_Hash() { return 889050785U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
