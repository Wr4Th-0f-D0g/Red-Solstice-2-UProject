// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolsticeMinimap/Public/MapSystemStaticLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapSystemStaticLibrary() {}
// Cross Module References
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystemStaticLibrary_NoRegister();
	SOLSTICEMINIMAP_API UClass* Z_Construct_UClass_UMapSystemStaticLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SolsticeMinimap();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UMapSystemStaticLibrary::execComputeViewFrustum)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PlayerLocation);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MinBounds);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MaxBounds);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CanvasSize);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_WidgetSize);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Zoom);
		P_GET_UBOOL(Z_Param_bSizeOffset);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_OutCornerUVs);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutWorldCorners);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FloorDistance);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Offset);
		P_GET_UBOOL(Z_Param_bBigMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMapSystemStaticLibrary::ComputeViewFrustum(Z_Param_WorldContextObject,Z_Param_Out_PlayerLocation,Z_Param_Out_MinBounds,Z_Param_Out_MaxBounds,Z_Param_Out_CanvasSize,Z_Param_Out_WidgetSize,Z_Param_Out_Zoom,Z_Param_bSizeOffset,Z_Param_Out_OutCornerUVs,Z_Param_Out_OutWorldCorners,Z_Param_FloorDistance,Z_Param_Out_Offset,Z_Param_bBigMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemStaticLibrary::execGetActorLocationInBoundsFlipped)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MinBounds);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MaxBounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UMapSystemStaticLibrary::GetActorLocationInBoundsFlipped(Z_Param_Out_Location,Z_Param_Out_MinBounds,Z_Param_Out_MaxBounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemStaticLibrary::execGetActorMinMaxBounds)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MinBounds);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MaxBounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMapSystemStaticLibrary::GetActorMinMaxBounds(Z_Param_Actor,Z_Param_Out_Origin,Z_Param_Out_MinBounds,Z_Param_Out_MaxBounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemStaticLibrary::execGetActorRelativePosition)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PlayerLocation);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MinBounds);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MaxBounds);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CanvasSize);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_WidgetSize);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Zoom);
		P_GET_UBOOL(Z_Param_SizeOffset);
		P_GET_UBOOL(Z_Param_bClampVertical);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UMapSystemStaticLibrary::GetActorRelativePosition(Z_Param_Out_Location,Z_Param_Out_PlayerLocation,Z_Param_Out_MinBounds,Z_Param_Out_MaxBounds,Z_Param_Out_CanvasSize,Z_Param_Out_WidgetSize,Z_Param_Out_Zoom,Z_Param_SizeOffset,Z_Param_bClampVertical);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemStaticLibrary::execGetActorRelativePositionLargeMap)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PlayerLocation);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MinBounds);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MaxBounds);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CanvasSize);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_WidgetSize);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Zoom);
		P_GET_UBOOL(Z_Param_bSizeOffset);
		P_GET_UBOOL(Z_Param_bOffsetWidgetSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UMapSystemStaticLibrary::GetActorRelativePositionLargeMap(Z_Param_Out_Location,Z_Param_Out_PlayerLocation,Z_Param_Out_MinBounds,Z_Param_Out_MaxBounds,Z_Param_Out_CanvasSize,Z_Param_Out_WidgetSize,Z_Param_Out_Zoom,Z_Param_bSizeOffset,Z_Param_bOffsetWidgetSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemStaticLibrary::execGetActorRelativePositionLargeMapFlipped)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PlayerLocation);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MinBounds);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MaxBounds);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CanvasSize);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_WidgetSize);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Zoom);
		P_GET_UBOOL(Z_Param_bSizeOffset);
		P_GET_UBOOL(Z_Param_bOffsetWidgetSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UMapSystemStaticLibrary::GetActorRelativePositionLargeMapFlipped(Z_Param_Out_Location,Z_Param_Out_PlayerLocation,Z_Param_Out_MinBounds,Z_Param_Out_MaxBounds,Z_Param_Out_CanvasSize,Z_Param_Out_WidgetSize,Z_Param_Out_Zoom,Z_Param_bSizeOffset,Z_Param_bOffsetWidgetSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemStaticLibrary::execGetActorWorldLocation)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CanvasPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PlayerLocation);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MinBounds);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MaxBounds);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CanvasSize);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_WidgetSize);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Zoom);
		P_GET_UBOOL(Z_Param_bSizeOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UMapSystemStaticLibrary::GetActorWorldLocation(Z_Param_Out_CanvasPosition,Z_Param_Out_PlayerLocation,Z_Param_Out_MinBounds,Z_Param_Out_MaxBounds,Z_Param_Out_CanvasSize,Z_Param_Out_WidgetSize,Z_Param_Out_Zoom,Z_Param_bSizeOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemStaticLibrary::execGetActorWorldLocationMinimap)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CanvasPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PlayerLocation);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MinBounds);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MaxBounds);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CanvasSize);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_WidgetSize);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Zoom);
		P_GET_UBOOL(Z_Param_bSizeOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UMapSystemStaticLibrary::GetActorWorldLocationMinimap(Z_Param_Out_CanvasPosition,Z_Param_Out_PlayerLocation,Z_Param_Out_MinBounds,Z_Param_Out_MaxBounds,Z_Param_Out_CanvasSize,Z_Param_Out_WidgetSize,Z_Param_Out_Zoom,Z_Param_bSizeOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemStaticLibrary::execGetCircleMaskPosition)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OriginalPos);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CanvasSize);
		P_GET_UBOOL_REF(Z_Param_Out_InsideCircle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UMapSystemStaticLibrary::GetCircleMaskPosition(Z_Param_Out_OriginalPos,Z_Param_Out_CanvasSize,Z_Param_Out_InsideCircle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemStaticLibrary::execGetClampedLocationInBounds)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MinBounds);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MaxBounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UMapSystemStaticLibrary::GetClampedLocationInBounds(Z_Param_Out_Location,Z_Param_Out_MinBounds,Z_Param_Out_MaxBounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemStaticLibrary::execGetLineIntersection)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_P0);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_P1);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_P2);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_P3);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMapSystemStaticLibrary::GetLineIntersection(Z_Param_Out_P0,Z_Param_Out_P1,Z_Param_Out_P2,Z_Param_Out_P3,Z_Param_Out_OutPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemStaticLibrary::execGetPingRelativePosition)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PlayerLocation);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MinBounds);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MaxBounds);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CanvasSize);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_WidgetSize);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Zoom);
		P_GET_UBOOL(Z_Param_bSizeOffset);
		P_GET_UBOOL(Z_Param_bClampVertical);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UMapSystemStaticLibrary::GetPingRelativePosition(Z_Param_Out_Location,Z_Param_Out_PlayerLocation,Z_Param_Out_MinBounds,Z_Param_Out_MaxBounds,Z_Param_Out_CanvasSize,Z_Param_Out_WidgetSize,Z_Param_Out_Zoom,Z_Param_bSizeOffset,Z_Param_bClampVertical);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemStaticLibrary::execGetPositionOnCanvas)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CachedLocation);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_PlayerLocation);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CanvasSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UMapSystemStaticLibrary::GetPositionOnCanvas(Z_Param_Out_CachedLocation,Z_Param_Out_PlayerLocation,Z_Param_Out_CanvasSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemStaticLibrary::execGetRectangleIntersection)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_P0);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_P1);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_RP1);
		P_GET_STRUCT(FVector2D,Z_Param_RP2);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_RP3);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_RP4);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMapSystemStaticLibrary::GetRectangleIntersection(Z_Param_Out_P0,Z_Param_Out_P1,Z_Param_Out_RP1,Z_Param_RP2,Z_Param_Out_RP3,Z_Param_Out_RP4,Z_Param_Out_OutPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemStaticLibrary::execGetRelativeLocationOnCanvas)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MinBounds);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MaxBounds);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CanvasSize);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Zoom);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UMapSystemStaticLibrary::GetRelativeLocationOnCanvas(Z_Param_Out_WorldLocation,Z_Param_Out_MinBounds,Z_Param_Out_MaxBounds,Z_Param_Out_CanvasSize,Z_Param_Out_Zoom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemStaticLibrary::execGetRGBfromPosition)
	{
		P_GET_OBJECT(UTexture,Z_Param_InputTexture);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_PixelPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UMapSystemStaticLibrary::GetRGBfromPosition(Z_Param_InputTexture,Z_Param_Out_PixelPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapSystemStaticLibrary::execIsLocationInBounds)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MinBounds);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MaxBounds);
		P_GET_UBOOL(Z_Param_bCheckZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMapSystemStaticLibrary::IsLocationInBounds(Z_Param_Out_Location,Z_Param_Out_MinBounds,Z_Param_Out_MaxBounds,Z_Param_bCheckZ);
		P_NATIVE_END;
	}
	void UMapSystemStaticLibrary::StaticRegisterNativesUMapSystemStaticLibrary()
	{
		UClass* Class = UMapSystemStaticLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComputeViewFrustum", &UMapSystemStaticLibrary::execComputeViewFrustum },
			{ "GetActorLocationInBoundsFlipped", &UMapSystemStaticLibrary::execGetActorLocationInBoundsFlipped },
			{ "GetActorMinMaxBounds", &UMapSystemStaticLibrary::execGetActorMinMaxBounds },
			{ "GetActorRelativePosition", &UMapSystemStaticLibrary::execGetActorRelativePosition },
			{ "GetActorRelativePositionLargeMap", &UMapSystemStaticLibrary::execGetActorRelativePositionLargeMap },
			{ "GetActorRelativePositionLargeMapFlipped", &UMapSystemStaticLibrary::execGetActorRelativePositionLargeMapFlipped },
			{ "GetActorWorldLocation", &UMapSystemStaticLibrary::execGetActorWorldLocation },
			{ "GetActorWorldLocationMinimap", &UMapSystemStaticLibrary::execGetActorWorldLocationMinimap },
			{ "GetCircleMaskPosition", &UMapSystemStaticLibrary::execGetCircleMaskPosition },
			{ "GetClampedLocationInBounds", &UMapSystemStaticLibrary::execGetClampedLocationInBounds },
			{ "GetLineIntersection", &UMapSystemStaticLibrary::execGetLineIntersection },
			{ "GetPingRelativePosition", &UMapSystemStaticLibrary::execGetPingRelativePosition },
			{ "GetPositionOnCanvas", &UMapSystemStaticLibrary::execGetPositionOnCanvas },
			{ "GetRectangleIntersection", &UMapSystemStaticLibrary::execGetRectangleIntersection },
			{ "GetRelativeLocationOnCanvas", &UMapSystemStaticLibrary::execGetRelativeLocationOnCanvas },
			{ "GetRGBfromPosition", &UMapSystemStaticLibrary::execGetRGBfromPosition },
			{ "IsLocationInBounds", &UMapSystemStaticLibrary::execIsLocationInBounds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics
	{
		struct MapSystemStaticLibrary_eventComputeViewFrustum_Parms
		{
			const UObject* WorldContextObject;
			FVector PlayerLocation;
			FVector2D MinBounds;
			FVector2D MaxBounds;
			FVector2D CanvasSize;
			FVector2D WidgetSize;
			FVector2D Zoom;
			bool bSizeOffset;
			TArray<FVector2D> OutCornerUVs;
			TArray<FVector> OutWorldCorners;
			float FloorDistance;
			FVector2D Offset;
			bool bBigMap;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CanvasSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Zoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Zoom;
		static void NewProp_bSizeOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSizeOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutCornerUVs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutCornerUVs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutWorldCorners_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutWorldCorners;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloorDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static void NewProp_bBigMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBigMap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventComputeViewFrustum_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_PlayerLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventComputeViewFrustum_Parms, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_PlayerLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_PlayerLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_MinBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_MinBounds = { "MinBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventComputeViewFrustum_Parms, MinBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_MinBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_MinBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_MaxBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_MaxBounds = { "MaxBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventComputeViewFrustum_Parms, MaxBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_MaxBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_MaxBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_CanvasSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_CanvasSize = { "CanvasSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventComputeViewFrustum_Parms, CanvasSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_CanvasSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_CanvasSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_WidgetSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_WidgetSize = { "WidgetSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventComputeViewFrustum_Parms, WidgetSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_WidgetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_WidgetSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_Zoom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_Zoom = { "Zoom", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventComputeViewFrustum_Parms, Zoom), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_Zoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_Zoom_MetaData)) };
	void Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_bSizeOffset_SetBit(void* Obj)
	{
		((MapSystemStaticLibrary_eventComputeViewFrustum_Parms*)Obj)->bSizeOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_bSizeOffset = { "bSizeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemStaticLibrary_eventComputeViewFrustum_Parms), &Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_bSizeOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_OutCornerUVs_Inner = { "OutCornerUVs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_OutCornerUVs = { "OutCornerUVs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventComputeViewFrustum_Parms, OutCornerUVs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_OutWorldCorners_Inner = { "OutWorldCorners", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_OutWorldCorners = { "OutWorldCorners", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventComputeViewFrustum_Parms, OutWorldCorners), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_FloorDistance = { "FloorDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventComputeViewFrustum_Parms, FloorDistance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventComputeViewFrustum_Parms, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_Offset_MetaData)) };
	void Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_bBigMap_SetBit(void* Obj)
	{
		((MapSystemStaticLibrary_eventComputeViewFrustum_Parms*)Obj)->bBigMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_bBigMap = { "bBigMap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemStaticLibrary_eventComputeViewFrustum_Parms), &Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_bBigMap_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapSystemStaticLibrary_eventComputeViewFrustum_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemStaticLibrary_eventComputeViewFrustum_Parms), &Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_PlayerLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_MinBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_MaxBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_CanvasSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_WidgetSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_Zoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_bSizeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_OutCornerUVs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_OutCornerUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_OutWorldCorners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_OutWorldCorners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_FloorDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_bBigMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemStaticLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemStaticLibrary, nullptr, "ComputeViewFrustum", nullptr, nullptr, sizeof(MapSystemStaticLibrary_eventComputeViewFrustum_Parms), Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics
	{
		struct MapSystemStaticLibrary_eventGetActorLocationInBoundsFlipped_Parms
		{
			FVector Location;
			FVector2D MinBounds;
			FVector2D MaxBounds;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxBounds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorLocationInBoundsFlipped_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::NewProp_MinBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::NewProp_MinBounds = { "MinBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorLocationInBoundsFlipped_Parms, MinBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::NewProp_MinBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::NewProp_MinBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::NewProp_MaxBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::NewProp_MaxBounds = { "MaxBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorLocationInBoundsFlipped_Parms, MaxBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::NewProp_MaxBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::NewProp_MaxBounds_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorLocationInBoundsFlipped_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::NewProp_MinBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::NewProp_MaxBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemStaticLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemStaticLibrary, nullptr, "GetActorLocationInBoundsFlipped", nullptr, nullptr, sizeof(MapSystemStaticLibrary_eventGetActorLocationInBoundsFlipped_Parms), Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorMinMaxBounds_Statics
	{
		struct MapSystemStaticLibrary_eventGetActorMinMaxBounds_Parms
		{
			AActor* Actor;
			FVector Origin;
			FVector MinBounds;
			FVector MaxBounds;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinBounds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxBounds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorMinMaxBounds_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorMinMaxBounds_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorMinMaxBounds_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorMinMaxBounds_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorMinMaxBounds_Statics::NewProp_MinBounds = { "MinBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorMinMaxBounds_Parms, MinBounds), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorMinMaxBounds_Statics::NewProp_MaxBounds = { "MaxBounds", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorMinMaxBounds_Parms, MaxBounds), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorMinMaxBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorMinMaxBounds_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorMinMaxBounds_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorMinMaxBounds_Statics::NewProp_MinBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorMinMaxBounds_Statics::NewProp_MaxBounds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorMinMaxBounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemStaticLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorMinMaxBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemStaticLibrary, nullptr, "GetActorMinMaxBounds", nullptr, nullptr, sizeof(MapSystemStaticLibrary_eventGetActorMinMaxBounds_Parms), Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorMinMaxBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorMinMaxBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorMinMaxBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorMinMaxBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorMinMaxBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorMinMaxBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics
	{
		struct MapSystemStaticLibrary_eventGetActorRelativePosition_Parms
		{
			FVector Location;
			FVector PlayerLocation;
			FVector2D MinBounds;
			FVector2D MaxBounds;
			FVector2D CanvasSize;
			FVector2D WidgetSize;
			FVector2D Zoom;
			bool SizeOffset;
			bool bClampVertical;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CanvasSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Zoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Zoom;
		static void NewProp_SizeOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SizeOffset;
		static void NewProp_bClampVertical_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClampVertical;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePosition_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_PlayerLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePosition_Parms, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_PlayerLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_PlayerLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_MinBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_MinBounds = { "MinBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePosition_Parms, MinBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_MinBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_MinBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_MaxBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_MaxBounds = { "MaxBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePosition_Parms, MaxBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_MaxBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_MaxBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_CanvasSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_CanvasSize = { "CanvasSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePosition_Parms, CanvasSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_CanvasSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_CanvasSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_WidgetSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_WidgetSize = { "WidgetSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePosition_Parms, WidgetSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_WidgetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_WidgetSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_Zoom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_Zoom = { "Zoom", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePosition_Parms, Zoom), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_Zoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_Zoom_MetaData)) };
	void Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_SizeOffset_SetBit(void* Obj)
	{
		((MapSystemStaticLibrary_eventGetActorRelativePosition_Parms*)Obj)->SizeOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_SizeOffset = { "SizeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemStaticLibrary_eventGetActorRelativePosition_Parms), &Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_SizeOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_bClampVertical_SetBit(void* Obj)
	{
		((MapSystemStaticLibrary_eventGetActorRelativePosition_Parms*)Obj)->bClampVertical = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_bClampVertical = { "bClampVertical", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemStaticLibrary_eventGetActorRelativePosition_Parms), &Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_bClampVertical_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_PlayerLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_MinBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_MaxBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_CanvasSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_WidgetSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_Zoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_SizeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_bClampVertical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemStaticLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemStaticLibrary, nullptr, "GetActorRelativePosition", nullptr, nullptr, sizeof(MapSystemStaticLibrary_eventGetActorRelativePosition_Parms), Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics
	{
		struct MapSystemStaticLibrary_eventGetActorRelativePositionLargeMap_Parms
		{
			FVector Location;
			FVector PlayerLocation;
			FVector2D MinBounds;
			FVector2D MaxBounds;
			FVector2D CanvasSize;
			FVector2D WidgetSize;
			FVector2D Zoom;
			bool bSizeOffset;
			bool bOffsetWidgetSize;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CanvasSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Zoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Zoom;
		static void NewProp_bSizeOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSizeOffset;
		static void NewProp_bOffsetWidgetSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOffsetWidgetSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePositionLargeMap_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_PlayerLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePositionLargeMap_Parms, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_PlayerLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_PlayerLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_MinBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_MinBounds = { "MinBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePositionLargeMap_Parms, MinBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_MinBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_MinBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_MaxBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_MaxBounds = { "MaxBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePositionLargeMap_Parms, MaxBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_MaxBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_MaxBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_CanvasSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_CanvasSize = { "CanvasSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePositionLargeMap_Parms, CanvasSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_CanvasSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_CanvasSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_WidgetSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_WidgetSize = { "WidgetSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePositionLargeMap_Parms, WidgetSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_WidgetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_WidgetSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_Zoom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_Zoom = { "Zoom", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePositionLargeMap_Parms, Zoom), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_Zoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_Zoom_MetaData)) };
	void Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_bSizeOffset_SetBit(void* Obj)
	{
		((MapSystemStaticLibrary_eventGetActorRelativePositionLargeMap_Parms*)Obj)->bSizeOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_bSizeOffset = { "bSizeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemStaticLibrary_eventGetActorRelativePositionLargeMap_Parms), &Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_bSizeOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_bOffsetWidgetSize_SetBit(void* Obj)
	{
		((MapSystemStaticLibrary_eventGetActorRelativePositionLargeMap_Parms*)Obj)->bOffsetWidgetSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_bOffsetWidgetSize = { "bOffsetWidgetSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemStaticLibrary_eventGetActorRelativePositionLargeMap_Parms), &Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_bOffsetWidgetSize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePositionLargeMap_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_PlayerLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_MinBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_MaxBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_CanvasSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_WidgetSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_Zoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_bSizeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_bOffsetWidgetSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemStaticLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemStaticLibrary, nullptr, "GetActorRelativePositionLargeMap", nullptr, nullptr, sizeof(MapSystemStaticLibrary_eventGetActorRelativePositionLargeMap_Parms), Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics
	{
		struct MapSystemStaticLibrary_eventGetActorRelativePositionLargeMapFlipped_Parms
		{
			FVector Location;
			FVector PlayerLocation;
			FVector2D MinBounds;
			FVector2D MaxBounds;
			FVector2D CanvasSize;
			FVector2D WidgetSize;
			FVector2D Zoom;
			bool bSizeOffset;
			bool bOffsetWidgetSize;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CanvasSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Zoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Zoom;
		static void NewProp_bSizeOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSizeOffset;
		static void NewProp_bOffsetWidgetSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOffsetWidgetSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePositionLargeMapFlipped_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_PlayerLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePositionLargeMapFlipped_Parms, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_PlayerLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_PlayerLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_MinBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_MinBounds = { "MinBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePositionLargeMapFlipped_Parms, MinBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_MinBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_MinBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_MaxBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_MaxBounds = { "MaxBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePositionLargeMapFlipped_Parms, MaxBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_MaxBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_MaxBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_CanvasSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_CanvasSize = { "CanvasSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePositionLargeMapFlipped_Parms, CanvasSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_CanvasSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_CanvasSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_WidgetSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_WidgetSize = { "WidgetSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePositionLargeMapFlipped_Parms, WidgetSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_WidgetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_WidgetSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_Zoom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_Zoom = { "Zoom", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePositionLargeMapFlipped_Parms, Zoom), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_Zoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_Zoom_MetaData)) };
	void Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_bSizeOffset_SetBit(void* Obj)
	{
		((MapSystemStaticLibrary_eventGetActorRelativePositionLargeMapFlipped_Parms*)Obj)->bSizeOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_bSizeOffset = { "bSizeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemStaticLibrary_eventGetActorRelativePositionLargeMapFlipped_Parms), &Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_bSizeOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_bOffsetWidgetSize_SetBit(void* Obj)
	{
		((MapSystemStaticLibrary_eventGetActorRelativePositionLargeMapFlipped_Parms*)Obj)->bOffsetWidgetSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_bOffsetWidgetSize = { "bOffsetWidgetSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemStaticLibrary_eventGetActorRelativePositionLargeMapFlipped_Parms), &Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_bOffsetWidgetSize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorRelativePositionLargeMapFlipped_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_PlayerLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_MinBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_MaxBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_CanvasSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_WidgetSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_Zoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_bSizeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_bOffsetWidgetSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemStaticLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemStaticLibrary, nullptr, "GetActorRelativePositionLargeMapFlipped", nullptr, nullptr, sizeof(MapSystemStaticLibrary_eventGetActorRelativePositionLargeMapFlipped_Parms), Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics
	{
		struct MapSystemStaticLibrary_eventGetActorWorldLocation_Parms
		{
			FVector2D CanvasPosition;
			FVector PlayerLocation;
			FVector2D MinBounds;
			FVector2D MaxBounds;
			FVector2D CanvasSize;
			FVector2D WidgetSize;
			FVector2D Zoom;
			bool bSizeOffset;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CanvasSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Zoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Zoom;
		static void NewProp_bSizeOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSizeOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_CanvasPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorWorldLocation_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_CanvasPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_CanvasPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_PlayerLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorWorldLocation_Parms, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_PlayerLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_PlayerLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_MinBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_MinBounds = { "MinBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorWorldLocation_Parms, MinBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_MinBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_MinBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_MaxBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_MaxBounds = { "MaxBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorWorldLocation_Parms, MaxBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_MaxBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_MaxBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_CanvasSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_CanvasSize = { "CanvasSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorWorldLocation_Parms, CanvasSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_CanvasSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_CanvasSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_WidgetSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_WidgetSize = { "WidgetSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorWorldLocation_Parms, WidgetSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_WidgetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_WidgetSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_Zoom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_Zoom = { "Zoom", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorWorldLocation_Parms, Zoom), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_Zoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_Zoom_MetaData)) };
	void Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_bSizeOffset_SetBit(void* Obj)
	{
		((MapSystemStaticLibrary_eventGetActorWorldLocation_Parms*)Obj)->bSizeOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_bSizeOffset = { "bSizeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemStaticLibrary_eventGetActorWorldLocation_Parms), &Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_bSizeOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_CanvasPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_PlayerLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_MinBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_MaxBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_CanvasSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_WidgetSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_Zoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_bSizeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemStaticLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemStaticLibrary, nullptr, "GetActorWorldLocation", nullptr, nullptr, sizeof(MapSystemStaticLibrary_eventGetActorWorldLocation_Parms), Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics
	{
		struct MapSystemStaticLibrary_eventGetActorWorldLocationMinimap_Parms
		{
			FVector2D CanvasPosition;
			FVector PlayerLocation;
			FVector2D MinBounds;
			FVector2D MaxBounds;
			FVector2D CanvasSize;
			FVector2D WidgetSize;
			FVector2D Zoom;
			bool bSizeOffset;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CanvasSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Zoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Zoom;
		static void NewProp_bSizeOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSizeOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_CanvasPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorWorldLocationMinimap_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_CanvasPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_CanvasPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_PlayerLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorWorldLocationMinimap_Parms, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_PlayerLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_PlayerLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_MinBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_MinBounds = { "MinBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorWorldLocationMinimap_Parms, MinBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_MinBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_MinBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_MaxBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_MaxBounds = { "MaxBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorWorldLocationMinimap_Parms, MaxBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_MaxBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_MaxBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_CanvasSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_CanvasSize = { "CanvasSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorWorldLocationMinimap_Parms, CanvasSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_CanvasSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_CanvasSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_WidgetSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_WidgetSize = { "WidgetSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorWorldLocationMinimap_Parms, WidgetSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_WidgetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_WidgetSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_Zoom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_Zoom = { "Zoom", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorWorldLocationMinimap_Parms, Zoom), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_Zoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_Zoom_MetaData)) };
	void Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_bSizeOffset_SetBit(void* Obj)
	{
		((MapSystemStaticLibrary_eventGetActorWorldLocationMinimap_Parms*)Obj)->bSizeOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_bSizeOffset = { "bSizeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemStaticLibrary_eventGetActorWorldLocationMinimap_Parms), &Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_bSizeOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetActorWorldLocationMinimap_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_CanvasPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_PlayerLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_MinBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_MaxBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_CanvasSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_WidgetSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_Zoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_bSizeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemStaticLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemStaticLibrary, nullptr, "GetActorWorldLocationMinimap", nullptr, nullptr, sizeof(MapSystemStaticLibrary_eventGetActorWorldLocationMinimap_Parms), Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics
	{
		struct MapSystemStaticLibrary_eventGetCircleMaskPosition_Parms
		{
			FVector2D OriginalPos;
			FVector2D CanvasSize;
			bool InsideCircle;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CanvasSize;
		static void NewProp_InsideCircle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InsideCircle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::NewProp_OriginalPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::NewProp_OriginalPos = { "OriginalPos", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetCircleMaskPosition_Parms, OriginalPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::NewProp_OriginalPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::NewProp_OriginalPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::NewProp_CanvasSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::NewProp_CanvasSize = { "CanvasSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetCircleMaskPosition_Parms, CanvasSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::NewProp_CanvasSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::NewProp_CanvasSize_MetaData)) };
	void Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::NewProp_InsideCircle_SetBit(void* Obj)
	{
		((MapSystemStaticLibrary_eventGetCircleMaskPosition_Parms*)Obj)->InsideCircle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::NewProp_InsideCircle = { "InsideCircle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemStaticLibrary_eventGetCircleMaskPosition_Parms), &Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::NewProp_InsideCircle_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetCircleMaskPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::NewProp_OriginalPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::NewProp_CanvasSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::NewProp_InsideCircle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemStaticLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemStaticLibrary, nullptr, "GetCircleMaskPosition", nullptr, nullptr, sizeof(MapSystemStaticLibrary_eventGetCircleMaskPosition_Parms), Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics
	{
		struct MapSystemStaticLibrary_eventGetClampedLocationInBounds_Parms
		{
			FVector Location;
			FVector2D MinBounds;
			FVector2D MaxBounds;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxBounds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetClampedLocationInBounds_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::NewProp_MinBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::NewProp_MinBounds = { "MinBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetClampedLocationInBounds_Parms, MinBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::NewProp_MinBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::NewProp_MinBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::NewProp_MaxBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::NewProp_MaxBounds = { "MaxBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetClampedLocationInBounds_Parms, MaxBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::NewProp_MaxBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::NewProp_MaxBounds_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetClampedLocationInBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::NewProp_MinBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::NewProp_MaxBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemStaticLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemStaticLibrary, nullptr, "GetClampedLocationInBounds", nullptr, nullptr, sizeof(MapSystemStaticLibrary_eventGetClampedLocationInBounds_Parms), Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics
	{
		struct MapSystemStaticLibrary_eventGetLineIntersection_Parms
		{
			FVector2D P0;
			FVector2D P1;
			FVector2D P2;
			FVector2D P3;
			FVector2D OutPoint;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_P0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_P1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_P2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_P3;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPoint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_P0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_P0 = { "P0", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetLineIntersection_Parms, P0), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_P0_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_P0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_P1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_P1 = { "P1", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetLineIntersection_Parms, P1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_P1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_P1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_P2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_P2 = { "P2", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetLineIntersection_Parms, P2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_P2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_P2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_P3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_P3 = { "P3", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetLineIntersection_Parms, P3), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_P3_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_P3_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_OutPoint = { "OutPoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetLineIntersection_Parms, OutPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapSystemStaticLibrary_eventGetLineIntersection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemStaticLibrary_eventGetLineIntersection_Parms), &Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_P0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_P1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_P2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_P3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_OutPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemStaticLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemStaticLibrary, nullptr, "GetLineIntersection", nullptr, nullptr, sizeof(MapSystemStaticLibrary_eventGetLineIntersection_Parms), Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics
	{
		struct MapSystemStaticLibrary_eventGetPingRelativePosition_Parms
		{
			FVector Location;
			FVector PlayerLocation;
			FVector2D MinBounds;
			FVector2D MaxBounds;
			FVector2D CanvasSize;
			FVector2D WidgetSize;
			FVector2D Zoom;
			bool bSizeOffset;
			bool bClampVertical;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CanvasSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Zoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Zoom;
		static void NewProp_bSizeOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSizeOffset;
		static void NewProp_bClampVertical_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClampVertical;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetPingRelativePosition_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_PlayerLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetPingRelativePosition_Parms, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_PlayerLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_PlayerLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_MinBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_MinBounds = { "MinBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetPingRelativePosition_Parms, MinBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_MinBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_MinBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_MaxBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_MaxBounds = { "MaxBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetPingRelativePosition_Parms, MaxBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_MaxBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_MaxBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_CanvasSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_CanvasSize = { "CanvasSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetPingRelativePosition_Parms, CanvasSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_CanvasSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_CanvasSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_WidgetSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_WidgetSize = { "WidgetSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetPingRelativePosition_Parms, WidgetSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_WidgetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_WidgetSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_Zoom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_Zoom = { "Zoom", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetPingRelativePosition_Parms, Zoom), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_Zoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_Zoom_MetaData)) };
	void Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_bSizeOffset_SetBit(void* Obj)
	{
		((MapSystemStaticLibrary_eventGetPingRelativePosition_Parms*)Obj)->bSizeOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_bSizeOffset = { "bSizeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemStaticLibrary_eventGetPingRelativePosition_Parms), &Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_bSizeOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_bClampVertical_SetBit(void* Obj)
	{
		((MapSystemStaticLibrary_eventGetPingRelativePosition_Parms*)Obj)->bClampVertical = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_bClampVertical = { "bClampVertical", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemStaticLibrary_eventGetPingRelativePosition_Parms), &Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_bClampVertical_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetPingRelativePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_PlayerLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_MinBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_MaxBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_CanvasSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_WidgetSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_Zoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_bSizeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_bClampVertical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemStaticLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemStaticLibrary, nullptr, "GetPingRelativePosition", nullptr, nullptr, sizeof(MapSystemStaticLibrary_eventGetPingRelativePosition_Parms), Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics
	{
		struct MapSystemStaticLibrary_eventGetPositionOnCanvas_Parms
		{
			FVector2D CachedLocation;
			FVector2D PlayerLocation;
			FVector2D CanvasSize;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CanvasSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::NewProp_CachedLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::NewProp_CachedLocation = { "CachedLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetPositionOnCanvas_Parms, CachedLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::NewProp_CachedLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::NewProp_CachedLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::NewProp_PlayerLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetPositionOnCanvas_Parms, PlayerLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::NewProp_PlayerLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::NewProp_PlayerLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::NewProp_CanvasSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::NewProp_CanvasSize = { "CanvasSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetPositionOnCanvas_Parms, CanvasSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::NewProp_CanvasSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::NewProp_CanvasSize_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetPositionOnCanvas_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::NewProp_CachedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::NewProp_PlayerLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::NewProp_CanvasSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemStaticLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemStaticLibrary, nullptr, "GetPositionOnCanvas", nullptr, nullptr, sizeof(MapSystemStaticLibrary_eventGetPositionOnCanvas_Parms), Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics
	{
		struct MapSystemStaticLibrary_eventGetRectangleIntersection_Parms
		{
			FVector2D P0;
			FVector2D P1;
			FVector2D RP1;
			FVector2D RP2;
			FVector2D RP3;
			FVector2D RP4;
			FVector2D OutPoint;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_P0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_P1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RP1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RP1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RP2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RP3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RP3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RP4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RP4;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPoint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_P0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_P0 = { "P0", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetRectangleIntersection_Parms, P0), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_P0_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_P0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_P1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_P1 = { "P1", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetRectangleIntersection_Parms, P1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_P1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_P1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_RP1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_RP1 = { "RP1", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetRectangleIntersection_Parms, RP1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_RP1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_RP1_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_RP2 = { "RP2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetRectangleIntersection_Parms, RP2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_RP3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_RP3 = { "RP3", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetRectangleIntersection_Parms, RP3), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_RP3_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_RP3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_RP4_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_RP4 = { "RP4", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetRectangleIntersection_Parms, RP4), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_RP4_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_RP4_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_OutPoint = { "OutPoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetRectangleIntersection_Parms, OutPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapSystemStaticLibrary_eventGetRectangleIntersection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemStaticLibrary_eventGetRectangleIntersection_Parms), &Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_P0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_P1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_RP1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_RP2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_RP3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_RP4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_OutPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemStaticLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemStaticLibrary, nullptr, "GetRectangleIntersection", nullptr, nullptr, sizeof(MapSystemStaticLibrary_eventGetRectangleIntersection_Parms), Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics
	{
		struct MapSystemStaticLibrary_eventGetRelativeLocationOnCanvas_Parms
		{
			FVector WorldLocation;
			FVector2D MinBounds;
			FVector2D MaxBounds;
			FVector2D CanvasSize;
			FVector2D Zoom;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CanvasSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Zoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Zoom;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetRelativeLocationOnCanvas_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_WorldLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_MinBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_MinBounds = { "MinBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetRelativeLocationOnCanvas_Parms, MinBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_MinBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_MinBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_MaxBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_MaxBounds = { "MaxBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetRelativeLocationOnCanvas_Parms, MaxBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_MaxBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_MaxBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_CanvasSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_CanvasSize = { "CanvasSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetRelativeLocationOnCanvas_Parms, CanvasSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_CanvasSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_CanvasSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_Zoom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_Zoom = { "Zoom", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetRelativeLocationOnCanvas_Parms, Zoom), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_Zoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_Zoom_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetRelativeLocationOnCanvas_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_WorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_MinBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_MaxBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_CanvasSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_Zoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemStaticLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemStaticLibrary, nullptr, "GetRelativeLocationOnCanvas", nullptr, nullptr, sizeof(MapSystemStaticLibrary_eventGetRelativeLocationOnCanvas_Parms), Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemStaticLibrary_GetRGBfromPosition_Statics
	{
		struct MapSystemStaticLibrary_eventGetRGBfromPosition_Parms
		{
			UTexture* InputTexture;
			FVector2D PixelPos;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PixelPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetRGBfromPosition_Statics::NewProp_InputTexture = { "InputTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetRGBfromPosition_Parms, InputTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetRGBfromPosition_Statics::NewProp_PixelPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetRGBfromPosition_Statics::NewProp_PixelPos = { "PixelPos", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetRGBfromPosition_Parms, PixelPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRGBfromPosition_Statics::NewProp_PixelPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRGBfromPosition_Statics::NewProp_PixelPos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetRGBfromPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventGetRGBfromPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemStaticLibrary_GetRGBfromPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetRGBfromPosition_Statics::NewProp_InputTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetRGBfromPosition_Statics::NewProp_PixelPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_GetRGBfromPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_GetRGBfromPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemStaticLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemStaticLibrary_GetRGBfromPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemStaticLibrary, nullptr, "GetRGBfromPosition", nullptr, nullptr, sizeof(MapSystemStaticLibrary_eventGetRGBfromPosition_Parms), Z_Construct_UFunction_UMapSystemStaticLibrary_GetRGBfromPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRGBfromPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRGBfromPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_GetRGBfromPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemStaticLibrary_GetRGBfromPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemStaticLibrary_GetRGBfromPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics
	{
		struct MapSystemStaticLibrary_eventIsLocationInBounds_Parms
		{
			FVector Location;
			FVector MinBounds;
			FVector MaxBounds;
			bool bCheckZ;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxBounds;
		static void NewProp_bCheckZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckZ;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventIsLocationInBounds_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_MinBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_MinBounds = { "MinBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventIsLocationInBounds_Parms, MinBounds), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_MinBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_MinBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_MaxBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_MaxBounds = { "MaxBounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapSystemStaticLibrary_eventIsLocationInBounds_Parms, MaxBounds), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_MaxBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_MaxBounds_MetaData)) };
	void Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_bCheckZ_SetBit(void* Obj)
	{
		((MapSystemStaticLibrary_eventIsLocationInBounds_Parms*)Obj)->bCheckZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_bCheckZ = { "bCheckZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemStaticLibrary_eventIsLocationInBounds_Parms), &Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_bCheckZ_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapSystemStaticLibrary_eventIsLocationInBounds_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapSystemStaticLibrary_eventIsLocationInBounds_Parms), &Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_MinBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_MaxBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_bCheckZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapSystemStaticLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapSystemStaticLibrary, nullptr, "IsLocationInBounds", nullptr, nullptr, sizeof(MapSystemStaticLibrary_eventIsLocationInBounds_Parms), Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMapSystemStaticLibrary_NoRegister()
	{
		return UMapSystemStaticLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMapSystemStaticLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapSystemStaticLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SolsticeMinimap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapSystemStaticLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapSystemStaticLibrary_ComputeViewFrustum, "ComputeViewFrustum" }, // 1505040759
		{ &Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorLocationInBoundsFlipped, "GetActorLocationInBoundsFlipped" }, // 2643345823
		{ &Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorMinMaxBounds, "GetActorMinMaxBounds" }, // 1748591256
		{ &Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePosition, "GetActorRelativePosition" }, // 3286461470
		{ &Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMap, "GetActorRelativePositionLargeMap" }, // 2716588373
		{ &Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorRelativePositionLargeMapFlipped, "GetActorRelativePositionLargeMapFlipped" }, // 424672215
		{ &Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocation, "GetActorWorldLocation" }, // 3510472463
		{ &Z_Construct_UFunction_UMapSystemStaticLibrary_GetActorWorldLocationMinimap, "GetActorWorldLocationMinimap" }, // 3116689567
		{ &Z_Construct_UFunction_UMapSystemStaticLibrary_GetCircleMaskPosition, "GetCircleMaskPosition" }, // 2572092048
		{ &Z_Construct_UFunction_UMapSystemStaticLibrary_GetClampedLocationInBounds, "GetClampedLocationInBounds" }, // 4205806070
		{ &Z_Construct_UFunction_UMapSystemStaticLibrary_GetLineIntersection, "GetLineIntersection" }, // 1820318694
		{ &Z_Construct_UFunction_UMapSystemStaticLibrary_GetPingRelativePosition, "GetPingRelativePosition" }, // 659198826
		{ &Z_Construct_UFunction_UMapSystemStaticLibrary_GetPositionOnCanvas, "GetPositionOnCanvas" }, // 1365975522
		{ &Z_Construct_UFunction_UMapSystemStaticLibrary_GetRectangleIntersection, "GetRectangleIntersection" }, // 1208385859
		{ &Z_Construct_UFunction_UMapSystemStaticLibrary_GetRelativeLocationOnCanvas, "GetRelativeLocationOnCanvas" }, // 2777268141
		{ &Z_Construct_UFunction_UMapSystemStaticLibrary_GetRGBfromPosition, "GetRGBfromPosition" }, // 721615405
		{ &Z_Construct_UFunction_UMapSystemStaticLibrary_IsLocationInBounds, "IsLocationInBounds" }, // 3352322995
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapSystemStaticLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MapSystemStaticLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MapSystemStaticLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapSystemStaticLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapSystemStaticLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMapSystemStaticLibrary_Statics::ClassParams = {
		&UMapSystemStaticLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMapSystemStaticLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapSystemStaticLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapSystemStaticLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMapSystemStaticLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMapSystemStaticLibrary, 976700522);
	template<> SOLSTICEMINIMAP_API UClass* StaticClass<UMapSystemStaticLibrary>()
	{
		return UMapSystemStaticLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapSystemStaticLibrary(Z_Construct_UClass_UMapSystemStaticLibrary, &UMapSystemStaticLibrary::StaticClass, TEXT("/Script/SolsticeMinimap"), TEXT("UMapSystemStaticLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapSystemStaticLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
