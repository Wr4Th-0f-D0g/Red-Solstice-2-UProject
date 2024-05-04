#include "DarkenMeshComponent.h"

UDarkenMeshComponent::UDarkenMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEnabled = false;
    this->bMonsterDead = false;
    this->DarkenSpeedInSeconds = 0.00f;
    this->DiffuseBrightnessGoal = 0.00f;
}

void UDarkenMeshComponent::HandleOwnerKilled() {
}


