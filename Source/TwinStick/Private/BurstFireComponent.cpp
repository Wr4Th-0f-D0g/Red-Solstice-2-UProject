#include "BurstFireComponent.h"

UBurstFireComponent::UBurstFireComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FireModeSuffix = TEXT("_Burst");
}

void UBurstFireComponent::HandleReloadFinished() {
}

int32 UBurstFireComponent::GetShotsPerBurst() const {
    return 0;
}

float UBurstFireComponent::GetBurstCooldown() const {
    return 0.0f;
}


