#include "MissionTimer.h"

FMissionTimer::FMissionTimer() {
    this->GameTimeAdded = 0.00f;
    this->TimeSeconds = 0.00f;
    this->bCountingDown = false;
    this->bIsFailureTimer = false;
    this->ObjectiveIndex = 0;
}

