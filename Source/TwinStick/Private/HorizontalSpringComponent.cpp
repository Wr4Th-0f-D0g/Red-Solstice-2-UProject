#include "HorizontalSpringComponent.h"

UHorizontalSpringComponent::UHorizontalSpringComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->KFactor = 0.00f;
    this->BreakingFactor = 0.00f;
    this->SpeedConsideredStable = 0.00f;
}

void UHorizontalSpringComponent::SetBreakingFactor(float Val) {
}

float UHorizontalSpringComponent::GetBreakingFactor() const {
    return 0.0f;
}


