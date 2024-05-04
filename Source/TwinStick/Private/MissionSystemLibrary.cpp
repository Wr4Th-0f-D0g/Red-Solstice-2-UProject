#include "MissionSystemLibrary.h"

UMissionSystemLibrary::UMissionSystemLibrary() {
}

FName UMissionSystemLibrary::GetSavedObjectiveNameFromMissionLocation(const FMissionLocation& InMissionLocation) {
    return NAME_None;
}

FName UMissionSystemLibrary::GetSavedMissionLocationObjectiveNameFromMissionLocation(const FMissionLocation& InMissionLocation) {
    return NAME_None;
}

int32 UMissionSystemLibrary::GetSavedMissionLocationObjectiveIndexFromMissionInfo(const FMissionLocation& InMissionLocation) {
    return 0;
}

FVector UMissionSystemLibrary::GetSavedMissionLocationNavLocationFromMissionInfo(const FMissionLocation& InMissionLocation) {
    return FVector{};
}

FLocationInfo UMissionSystemLibrary::GetSavedMissionLocationInfoFromMissionInfo(const FMissionLocation& InMissionLocation) {
    return FLocationInfo{};
}

FGameplayTagContainer UMissionSystemLibrary::GetPossibleGameplayTagsFromMissionLocation(const FMissionLocation& InMissionLocation) {
    return FGameplayTagContainer{};
}

ELocationDistance UMissionSystemLibrary::GetLocationRangeFromMissionLocation(const FMissionLocation& InMissionLocation) {
    return ELocationDistance::ELD_Any;
}

EMissionLocationSelectionMode UMissionSystemLibrary::GetLocationModeFromMissionLocation(const FMissionLocation& InMissionLocation) {
    return EMissionLocationSelectionMode::UseTags;
}

void UMissionSystemLibrary::AdjustLocationCountFromSavedMission(FMissionLocation& InMissionLocation, int32 InLocationCount) {
}

void UMissionSystemLibrary::AddNumberToSavedMissionLocationName(FMissionLocation& InMissionLocation, int32 LocationNumber) {
}


