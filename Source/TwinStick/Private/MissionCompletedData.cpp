#include "MissionCompletedData.h"

FMissionCompletedData::FMissionCompletedData() {
    this->Status = EStrategyMissionResult::Invalid;
    this->AssumeFinalized = false;
}

