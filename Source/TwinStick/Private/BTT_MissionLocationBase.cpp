#include "BTT_MissionLocationBase.h"

UBTT_MissionLocationBase::UBTT_MissionLocationBase() {
}

bool UBTT_MissionLocationBase::IsLocationValid(const FVector& InVector) {
    return false;
}

bool UBTT_MissionLocationBase::IsLocationInvalid(const FVector& InVector) {
    return false;
}

FText UBTT_MissionLocationBase::GetMinimapDisplayText() const {
    return FText::GetEmpty();
}

TArray<FVector> UBTT_MissionLocationBase::GetLocationsForConfiguredMission(const FMissionLocation& InConfiguredMission, TArray<FRotator>& OutRotations) {
    return TArray<FVector>();
}

FVector UBTT_MissionLocationBase::GetLocationForConfiguredMission(const FMissionLocation& InConfiguredMission, FRotator& OutRotation) {
    return FVector{};
}


