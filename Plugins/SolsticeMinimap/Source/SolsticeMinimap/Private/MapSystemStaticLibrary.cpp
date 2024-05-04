#include "MapSystemStaticLibrary.h"

UMapSystemStaticLibrary::UMapSystemStaticLibrary() {
}

bool UMapSystemStaticLibrary::IsLocationInBounds(const FVector& Location, const FVector& MinBounds, const FVector& MaxBounds, bool bCheckZ) {
    return false;
}

FLinearColor UMapSystemStaticLibrary::GetRGBfromPosition(UTexture* InputTexture, const FVector2D& PixelPos) {
    return FLinearColor{};
}

FVector2D UMapSystemStaticLibrary::GetRelativeLocationOnCanvas(const FVector& WorldLocation, const FVector2D& MinBounds, const FVector2D& MaxBounds, const FVector2D& CanvasSize, const FVector2D& Zoom) {
    return FVector2D{};
}

bool UMapSystemStaticLibrary::GetRectangleIntersection(const FVector2D& P0, const FVector2D& P1, const FVector2D& RP1, FVector2D RP2, const FVector2D& RP3, const FVector2D& RP4, FVector2D& OutPoint) {
    return false;
}

FVector2D UMapSystemStaticLibrary::GetPositionOnCanvas(const FVector2D& CachedLocation, const FVector2D& PlayerLocation, const FVector2D& CanvasSize) {
    return FVector2D{};
}

FVector2D UMapSystemStaticLibrary::GetPingRelativePosition(const FVector& Location, const FVector& PlayerLocation, const FVector2D& MinBounds, const FVector2D& MaxBounds, const FVector2D& CanvasSize, const FVector2D& WidgetSize, const FVector2D& Zoom, bool bSizeOffset, bool bClampVertical) {
    return FVector2D{};
}

bool UMapSystemStaticLibrary::GetLineIntersection(const FVector2D& P0, const FVector2D& P1, const FVector2D& P2, const FVector2D& P3, FVector2D& OutPoint) {
    return false;
}

FVector2D UMapSystemStaticLibrary::GetClampedLocationInBounds(const FVector& Location, const FVector2D& MinBounds, const FVector2D& MaxBounds) {
    return FVector2D{};
}

FVector2D UMapSystemStaticLibrary::GetCircleMaskPosition(const FVector2D& OriginalPos, const FVector2D& CanvasSize, bool& InsideCircle) {
    return FVector2D{};
}

FVector UMapSystemStaticLibrary::GetActorWorldLocationMinimap(const FVector2D& CanvasPosition, const FVector& PlayerLocation, const FVector2D& MinBounds, const FVector2D& MaxBounds, const FVector2D& CanvasSize, const FVector2D& WidgetSize, const FVector2D& Zoom, bool bSizeOffset) {
    return FVector{};
}

FVector UMapSystemStaticLibrary::GetActorWorldLocation(const FVector2D& CanvasPosition, const FVector& PlayerLocation, const FVector2D& MinBounds, const FVector2D& MaxBounds, const FVector2D& CanvasSize, const FVector2D& WidgetSize, const FVector2D& Zoom, bool bSizeOffset) {
    return FVector{};
}

FVector2D UMapSystemStaticLibrary::GetActorRelativePositionLargeMapFlipped(const FVector& Location, const FVector& PlayerLocation, const FVector2D& MinBounds, const FVector2D& MaxBounds, const FVector2D& CanvasSize, const FVector2D& WidgetSize, const FVector2D& Zoom, bool bSizeOffset, bool bOffsetWidgetSize) {
    return FVector2D{};
}

FVector2D UMapSystemStaticLibrary::GetActorRelativePositionLargeMap(const FVector& Location, const FVector& PlayerLocation, const FVector2D& MinBounds, const FVector2D& MaxBounds, const FVector2D& CanvasSize, const FVector2D& WidgetSize, const FVector2D& Zoom, bool bSizeOffset, bool bOffsetWidgetSize) {
    return FVector2D{};
}

FVector2D UMapSystemStaticLibrary::GetActorRelativePosition(const FVector& Location, const FVector& PlayerLocation, const FVector2D& MinBounds, const FVector2D& MaxBounds, const FVector2D& CanvasSize, const FVector2D& WidgetSize, const FVector2D& Zoom, bool SizeOffset, bool bClampVertical) {
    return FVector2D{};
}

void UMapSystemStaticLibrary::GetActorMinMaxBounds(AActor* Actor, FVector& Origin, FVector& MinBounds, FVector& MaxBounds) {
}

FVector2D UMapSystemStaticLibrary::GetActorLocationInBoundsFlipped(const FVector& Location, const FVector2D& MinBounds, const FVector2D& MaxBounds) {
    return FVector2D{};
}

bool UMapSystemStaticLibrary::ComputeViewFrustum(const UObject* WorldContextObject, const FVector& PlayerLocation, const FVector2D& MinBounds, const FVector2D& MaxBounds, const FVector2D& CanvasSize, const FVector2D& WidgetSize, const FVector2D& Zoom, bool bSizeOffset, TArray<FVector2D>& OutCornerUVs, TArray<FVector>& OutWorldCorners, float FloorDistance, const FVector2D& Offset, bool bBigMap) {
    return false;
}


