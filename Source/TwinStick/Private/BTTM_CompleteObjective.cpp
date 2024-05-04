#include "BTTM_CompleteObjective.h"

UBTTM_CompleteObjective::UBTTM_CompleteObjective() {
    this->NodeName = TEXT("Complete Mission Objective");
    this->MissionStatus = EMissionStatus::Active;
    this->TimeUntilNextObjective = 3.00f;
    this->bTrackAnalyticsEvent = false;
}


