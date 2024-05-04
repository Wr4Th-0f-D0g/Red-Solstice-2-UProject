#include "MissionLocation.h"

FMissionLocation::FMissionLocation() {
    this->LocationMode = EMissionLocationSelectionMode::UseTags;
    this->GameplayContainerMatchingType = EGameplayContainerMatchType::Any;
    this->SelectionMode = ELocationSelectionMode::SingleLMARandomBoundingBox;
    this->LocationRange = ELocationDistance::ELD_Any;
    this->MinimumRange = 0.00f;
    this->bCanUseLockedLocationMarkers = false;
    this->bLockLocationMarkersAfterUse = false;
    this->LocationCount = 0;
    this->RadiusForRandom = 0.00f;
}

