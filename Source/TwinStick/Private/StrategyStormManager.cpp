#include "StrategyStormManager.h"

UStrategyStormManager::UStrategyStormManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SeasonalIntensity = 4.00f;
    this->SOLAR_Damage = 0.00f;
    this->TargetRegionTest = NULL;
    this->IntensityTest = 0.00f;
    this->StormActorClass = NULL;
}

void UStrategyStormManager::SpawnStormEditor() {
}

AStormActor* UStrategyStormManager::SpawnStorm(ARegion* InRegion, float InIntensity) {
    return NULL;
}

void UStrategyStormManager::HandleCampaignDayChanged(const FMarsTime& CampaignTime) {
}

float UStrategyStormManager::GetSeasonalStormIntensity() const {
    return 0.0f;
}

float UStrategyStormManager::GetGlobalStormIntensity() const {
    return 0.0f;
}

float UStrategyStormManager::GetEnvironmentalDamageModifier() const {
    return 0.0f;
}

void UStrategyStormManager::ClearSkiesEditor() {
}


