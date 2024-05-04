#include "StrategyUpgradeTracker.h"

FStrategyUpgradeTracker::FStrategyUpgradeTracker() {
    this->TrackerType = EStrategyUpgradeTrackerType::HQ;
    this->UpgradeLevel = 0;
    this->UpgradeData = NULL;
}

