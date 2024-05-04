#include "StrategyResourceManager.h"

UStrategyResourceManager::UStrategyResourceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ResupplyEventWidgetClass = NULL;
    this->ResupplyEventWidget = NULL;
    this->EventTooltipClass = NULL;
    this->ResupplyEventIcon = NULL;
}

void UStrategyResourceManager::ShowResupplyEventWidget() {
}

void UStrategyResourceManager::RemoveResupplyEventWidget() {
}

void UStrategyResourceManager::HandleRegionInfestationChanged(float InfestationLevel) {
}

void UStrategyResourceManager::HandleOutpostLevelChanged(AOutpost* Outpost, int32 NewLevel) {
}

void UStrategyResourceManager::HandleCampaignDayChanged(const FMarsTime& CampaignTime) {
}

void UStrategyResourceManager::HandleAttributeValueChanged(EAttribute Attribute, float OldValue, float NewValue) {
}

float UStrategyResourceManager::GetSupplyModifier() const {
    return 0.0f;
}

int32 UStrategyResourceManager::GetSupplyIncome() const {
    return 0;
}

int32 UStrategyResourceManager::GetSpecialistIncome() const {
    return 0;
}

int32 UStrategyResourceManager::GetDeploymentIncome() const {
    return 0;
}

TArray<FGameplayTag> UStrategyResourceManager::GetActiveResupplyModifierTags() const {
    return TArray<FGameplayTag>();
}

void UStrategyResourceManager::BroadcastIncomeChanged() {
}


