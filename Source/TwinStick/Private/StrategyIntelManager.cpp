#include "StrategyIntelManager.h"

UStrategyIntelManager::UStrategyIntelManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GlobalIntel = 0.00f;
    this->HQAdjacentRegionIntelGenerationPerDay = 0.12f;
    this->OutpostIntelGenerationPerDay = 0.10f;
    this->DropshipActiveScanIntelPerHour = 0.08f;
}

void UStrategyIntelManager::HandleCampaignHourChanged(const FMarsTime& CampaignTime) {
}

void UStrategyIntelManager::HandleCampaignDayChanged(const FMarsTime& CampaignTime) {
}


