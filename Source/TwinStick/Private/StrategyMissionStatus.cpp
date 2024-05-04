#include "StrategyMissionStatus.h"

FStrategyMissionStatus::FStrategyMissionStatus() {
    this->CompletionStatus = EStrategyMissionStatus::Active;
    this->bDetected = false;
    this->bNeedsFinalize = false;
    this->bFinalized = false;
}

