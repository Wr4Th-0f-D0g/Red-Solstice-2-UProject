#include "StrategyMissionHistory.h"

FStrategyMissionHistory::FStrategyMissionHistory() {
    this->FinalStatus = EStrategyMissionStatus::Active;
    this->MissionType = EStrategyMissionType::Invalid;
    this->bIsCampaignMission = false;
}

