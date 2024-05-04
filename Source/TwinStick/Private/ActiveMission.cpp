#include "ActiveMission.h"

FActiveMission::FActiveMission() {
    this->StrategyMissionStatus = EStrategyMissionStatus::Active;
    this->bFinalized = false;
}

