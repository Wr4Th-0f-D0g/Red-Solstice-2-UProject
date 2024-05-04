#include "MissionWaypointArrows.h"

AMissionWaypointArrows::AMissionWaypointArrows(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TrackedMission = NULL;
    this->TrackedMissionMinimapActor = NULL;
}

void AMissionWaypointArrows::SetMissionForTracking(AMissionBase* NewMission, AMinimapActorBase* NewMinimapActor) {
}


FVector AMissionWaypointArrows::GetEvacMissionLocation() const {
    return FVector{};
}

AMissionBase* AMissionWaypointArrows::GetEvacMission() const {
    return NULL;
}


