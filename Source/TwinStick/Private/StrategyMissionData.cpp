#include "StrategyMissionData.h"

FStrategyMissionData::FStrategyMissionData() {
    this->AllowedMode = EAllowedMode::None;
    this->PackageID = 0;
    this->MaxStartingVehicles = 0;
    this->LocationCount = 0;
    this->AvailableForHours = 0;
    this->MissionDuration = 0;
    this->DeploymentCost = 0;
    this->MissionType = EStrategyMissionType::Invalid;
    this->CompletionType = EStrategyMissionCompletionType::Invalid;
    this->DeploymentTableForCampaign = NULL;
    this->DisplayDifficulty = 0.00f;
}

