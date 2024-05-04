#include "InteractionDetectionComponent.h"

UInteractionDetectionComponent::UInteractionDetectionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractionRadius = 50.00f;
    this->PreviewInteractionRadius = 50.00f;
    this->bAllowInteractionInFogOfWar = true;
}

AActor* UInteractionDetectionComponent::SelectPreviousInteractable() {
    return NULL;
}

AActor* UInteractionDetectionComponent::SelectNextInteractable() {
    return NULL;
}

void UInteractionDetectionComponent::RunInteractionDetection(const TArray<FHitResult>& WeaponHits, const FVector& CameraHitLocation, TArray<AActor*>& DetectionResults, TArray<AActor*>& PreviewResults, float Radius) {
}

int32 UInteractionDetectionComponent::GetNumInteractables() const {
    return 0;
}

AActor* UInteractionDetectionComponent::GetCurrentInteractable() const {
    return NULL;
}


