#include "BTSM_UpdateMissionState.h"

UBTSM_UpdateMissionState::UBTSM_UpdateMissionState() {
    this->NodeName = TEXT("Update Mission Status");
    this->MissionBase = NULL;
    this->RandomIntMin = 0;
    this->RandomIntMax = 2;
}


