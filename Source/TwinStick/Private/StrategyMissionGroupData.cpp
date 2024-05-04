#include "StrategyMissionGroupData.h"

FStrategyMissionGroupData::FStrategyMissionGroupData() {
    this->IntelRating = 0;
    this->MinimumInfestationLevel = 0;
    this->MaximumInfestationLevel = 0;
    this->RequiredToken = 0;
    this->MeanTimeToSpawn = 0;
    this->GrowthPerPointAboveIntelRating = 0.00f;
    this->GrowthPerPointAboveMinimumInfestation = 0.00f;
    this->Priority = 0.00f;
}

