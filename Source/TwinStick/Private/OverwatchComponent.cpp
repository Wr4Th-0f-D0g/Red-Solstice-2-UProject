#include "OverwatchComponent.h"

UOverwatchComponent::UOverwatchComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverwatchRange = 1200.00f;
    this->OverwatchMinRange = -1.00f;
    this->OverwatchTargetingInterval = 2.00f;
    this->OverwatchRetargetCooldown = 0.50f;
    this->bEnabledByDefault = true;
    this->OverwatchOnSound = NULL;
    this->OverwatchOffSound = NULL;
    this->OverwatchTargetingEffect = NULL;
    this->bUseLineTracedGetFunction = false;
    this->bHasMinimumRange = false;
    this->bTestFeetLocation = false;
    this->bTargetOnlyMonsters = true;
    this->bDrawDebug = false;
    this->bPrintDebug = false;
    this->OverwatchTarget = NULL;
    this->FallbackTarget = NULL;
    this->PriorityTarget = NULL;
}

void UOverwatchComponent::SetPriorityTarget(AActor* InTarget) {
}

void UOverwatchComponent::SetFallbackTarget(AActor* InTarget) {
}

void UOverwatchComponent::RemoveIgnoredActor(AActor* InActor) {
}

void UOverwatchComponent::HandleOverwatchTargetKilled(AActor* KilledTarget, APawn* PawnInstigator) {
}

void UOverwatchComponent::FindOverwatchTarget() {
}

void UOverwatchComponent::EnableOverwatch() {
}

void UOverwatchComponent::DisableOverwatch() {
}

void UOverwatchComponent::ClearPriorityTarget() {
}

void UOverwatchComponent::AddIgnoredActor(AActor* InActor) {
}

void UOverwatchComponent::AddFallbackIgnoredActor(AActor* InActor) {
}


