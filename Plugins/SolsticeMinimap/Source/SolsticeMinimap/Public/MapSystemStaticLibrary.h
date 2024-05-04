#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MapSystemStaticLibrary.generated.h"

class AActor;
class UObject;
class UTexture;

UCLASS(Blueprintable)
class SOLSTICEMINIMAP_API UMapSystemStaticLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMapSystemStaticLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLocationInBounds(const FVector& Location, const FVector& MinBounds, const FVector& MaxBounds, bool bCheckZ);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetRGBfromPosition(UTexture* InputTexture, const FVector2D& PixelPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetRelativeLocationOnCanvas(const FVector& WorldLocation, const FVector2D& MinBounds, const FVector2D& MaxBounds, const FVector2D& CanvasSize, const FVector2D& Zoom);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetRectangleIntersection(const FVector2D& P0, const FVector2D& P1, const FVector2D& RP1, FVector2D RP2, const FVector2D& RP3, const FVector2D& RP4, FVector2D& OutPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetPositionOnCanvas(const FVector2D& CachedLocation, const FVector2D& PlayerLocation, const FVector2D& CanvasSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetPingRelativePosition(const FVector& Location, const FVector& PlayerLocation, const FVector2D& MinBounds, const FVector2D& MaxBounds, const FVector2D& CanvasSize, const FVector2D& WidgetSize, const FVector2D& Zoom, bool bSizeOffset, bool bClampVertical);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetLineIntersection(const FVector2D& P0, const FVector2D& P1, const FVector2D& P2, const FVector2D& P3, FVector2D& OutPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetClampedLocationInBounds(const FVector& Location, const FVector2D& MinBounds, const FVector2D& MaxBounds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetCircleMaskPosition(const FVector2D& OriginalPos, const FVector2D& CanvasSize, bool& InsideCircle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetActorWorldLocationMinimap(const FVector2D& CanvasPosition, const FVector& PlayerLocation, const FVector2D& MinBounds, const FVector2D& MaxBounds, const FVector2D& CanvasSize, const FVector2D& WidgetSize, const FVector2D& Zoom, bool bSizeOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetActorWorldLocation(const FVector2D& CanvasPosition, const FVector& PlayerLocation, const FVector2D& MinBounds, const FVector2D& MaxBounds, const FVector2D& CanvasSize, const FVector2D& WidgetSize, const FVector2D& Zoom, bool bSizeOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetActorRelativePositionLargeMapFlipped(const FVector& Location, const FVector& PlayerLocation, const FVector2D& MinBounds, const FVector2D& MaxBounds, const FVector2D& CanvasSize, const FVector2D& WidgetSize, const FVector2D& Zoom, bool bSizeOffset, bool bOffsetWidgetSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetActorRelativePositionLargeMap(const FVector& Location, const FVector& PlayerLocation, const FVector2D& MinBounds, const FVector2D& MaxBounds, const FVector2D& CanvasSize, const FVector2D& WidgetSize, const FVector2D& Zoom, bool bSizeOffset, bool bOffsetWidgetSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetActorRelativePosition(const FVector& Location, const FVector& PlayerLocation, const FVector2D& MinBounds, const FVector2D& MaxBounds, const FVector2D& CanvasSize, const FVector2D& WidgetSize, const FVector2D& Zoom, bool SizeOffset, bool bClampVertical);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetActorMinMaxBounds(AActor* Actor, FVector& Origin, FVector& MinBounds, FVector& MaxBounds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetActorLocationInBoundsFlipped(const FVector& Location, const FVector2D& MinBounds, const FVector2D& MaxBounds);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ComputeViewFrustum(const UObject* WorldContextObject, const FVector& PlayerLocation, const FVector2D& MinBounds, const FVector2D& MaxBounds, const FVector2D& CanvasSize, const FVector2D& WidgetSize, const FVector2D& Zoom, bool bSizeOffset, TArray<FVector2D>& OutCornerUVs, TArray<FVector>& OutWorldCorners, float FloorDistance, const FVector2D& Offset, bool bBigMap);
    
};

