#include "StrategyMissionTracker.h"

FStrategyMissionTracker::FStrategyMissionTracker() {
    this->IntelRating = 0;
    this->GrowthPerInfestationAboveMinimum = 0.00f;
    this->GrowthPerIntelAboveIntelRating = 0.00f;
    this->MeanTimeToSpawn = 0;
    this->SpawnProgress = 0.00f;
    this->RequiredToken = EStrategyMissionToken::Invalid;
}

