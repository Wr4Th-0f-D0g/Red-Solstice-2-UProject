#include "CombatReportComponent.h"

UCombatReportComponent::UCombatReportComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DeploymentCost = 0;
    this->PrimaryMissionResult = EStrategyMissionResult::Retreat;
    this->StartingHQ_HitPoints = 20000.00f;
    this->EndingHQ_HitPoints = 20000.00f;
    this->StartingHQ_MaxHitPoints = 20000.00f;
    this->CurrentRevolution = 0.00f;
}

void UCombatReportComponent::ExecuteSuccessEffects() {
}

void UCombatReportComponent::ExecuteSecondaryEffects() {
}

void UCombatReportComponent::ExecuteMissionEffects() {
}

void UCombatReportComponent::ExecuteFailureEffects() {
}

void UCombatReportComponent::AddSecondaryEffect(const FMissionEffect& Effect) {
}

void UCombatReportComponent::AddPrimaryMissionEffect(const FMissionEffectContainer& InEffectContainer) {
}

void UCombatReportComponent::AddMissionGrantedTechs(FGameplayTagContainer NewTechs) {
}

void UCombatReportComponent::AddMissionFailureEffect(const FMissionEffectContainer& InEffectContainer) {
}


