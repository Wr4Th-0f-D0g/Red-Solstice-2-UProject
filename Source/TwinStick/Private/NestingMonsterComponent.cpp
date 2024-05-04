#include "NestingMonsterComponent.h"

UNestingMonsterComponent::UNestingMonsterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NestRadius = 0.00f;
    this->NavFilter = NULL;
    this->Nest = NULL;
    this->AIController = NULL;
}

void UNestingMonsterComponent::StopMonitoringInsideNest() {
}

void UNestingMonsterComponent::StartMonitoringInsideNest() {
}

void UNestingMonsterComponent::SetNestLocation(const FVector& InNestlocation, const float& NewNestRadius) {
}

void UNestingMonsterComponent::MoveToNest() {
}

bool UNestingMonsterComponent::HasNest() {
    return false;
}

void UNestingMonsterComponent::HandleMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result) {
}

FVector UNestingMonsterComponent::GetNestLocation(bool& NewHasNest) {
    return FVector{};
}


