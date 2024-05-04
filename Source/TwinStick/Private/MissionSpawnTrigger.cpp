#include "MissionSpawnTrigger.h"

UMissionSpawnTrigger::UMissionSpawnTrigger() {
    this->MissionTriggerFilter = EMissionTriggerFilter::NoFilter;
}

void UMissionSpawnTrigger::QueueMission(FGameplayTag MissionTag, ARegion* TargetRegion, float DelayHours) {
}


FGameplayTagContainer UMissionSpawnTrigger::GetAllowedMissionsForRegion(ARegion* TargetRegion) const {
    return FGameplayTagContainer{};
}


