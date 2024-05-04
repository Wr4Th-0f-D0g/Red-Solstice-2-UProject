#include "TraceComponent.h"

UTraceComponent::UTraceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UTraceComponent::TraceWeaponAndCameraHits(FVector WorldOrigin, FVector WorldDirection, FVector& CameraTracePosition, FVector& WeaponTracePosition, FVector& AdjustedCameraTracePosition, FVector& AdjustedWeaponTracePosition, bool& bHasTargetUnderMouse, TArray<FHitResult>& WeaponHits) {
    return false;
}

void UTraceComponent::CalculateTracePositions(FVector& CameraTracePosition, FVector& WeaponTracePosition, FVector& AdjustedCameraTracePosition, FVector& AdjustedWeaponTracePosition, bool& bHasTargetUnderMouse, TArray<FHitResult> WeaponHits) {
}


