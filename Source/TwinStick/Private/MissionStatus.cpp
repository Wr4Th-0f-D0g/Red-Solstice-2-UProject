#include "MissionStatus.h"

FMissionStatus::FMissionStatus() {
    this->Status = EMissionStatus::Invalid;
    this->CurrentObjectiveIndex = 0;
    this->bCurrentObjectiveCompleted = false;
    this->bPrimary = false;
    this->GameTimeAdded = 0.00f;
    this->GameTimeCompleted = 0.00f;
}

