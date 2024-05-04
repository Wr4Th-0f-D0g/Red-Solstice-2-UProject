#include "StrategyViewManager.h"

UStrategyViewManager::UStrategyViewManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ViewConfigurationTable = NULL;
}

bool UStrategyViewManager::ShouldShowPlanetaryCompactWidgets() const {
    return false;
}

void UStrategyViewManager::SetStrategyView(FGameplayTag ViewTag, bool bCanChangeFromCinematics) {
}

void UStrategyViewManager::RefreshView() {
}

void UStrategyViewManager::HandleCinematicsFinished(const FCampaignCinematic& Cinematic) {
}

FStrategyViewConfiguration UStrategyViewManager::GetViewConfigurationFor(FGameplayTag InTag) const {
    return FStrategyViewConfiguration{};
}

bool UStrategyViewManager::ActiveViewMatchesTag(FGameplayTag InTag, bool ExactMatch) const {
    return false;
}


