#include "BTTask_CreateMissionLocations.h"

UBTTask_CreateMissionLocations::UBTTask_CreateMissionLocations() {
    this->NumberOfLocations = 1;
    this->LocationTagMatchingType = EGameplayContainerMatchType::Any;
    this->Range = ELocationDistance::ELD_Any;
    this->LocationSelectionMode = ELocationSelectionMode::SingleLMAFixedMarkers;
    this->MinimumRange = 0.00f;
    this->bLockLocationMarkerAfterUse = false;
    this->bCanUseLockedLocationMarkers = true;
}


