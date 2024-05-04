#include "DissolveComponent.h"

UDissolveComponent::UDissolveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DestroyAfterDissolve = false;
    this->bIsDoingDissolve = false;
    this->CurrentDissolveAmount = 0.00f;
    this->AccumulatedTime = 0.00f;
    this->ParticleComponent = NULL;
}

void UDissolveComponent::StartSink() {
}

void UDissolveComponent::ScheduleDissolve(EDissolveType InDamageType, float TimerTime) {
}

TArray<UMeshComponent*> UDissolveComponent::GetMeshes() const {
    return TArray<UMeshComponent*>();
}


