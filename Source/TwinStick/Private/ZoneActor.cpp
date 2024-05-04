#include "ZoneActor.h"

AZoneActor::AZoneActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ZoneBoundary = NULL;
    this->ZoneBoundaryClass = NULL;
    this->bIsDebugLineEnabled = true;
    this->bShouldFlushPersistantDebugLines = true;
    this->bIsDebugLinePersistent = true;
    this->DebugLineDuration = 0.00f;
    this->DebugLineDepthPriority = 2;
    this->DebugLineThickness = 10.00f;
    this->bPlayerIsInZone = false;
}

bool AZoneActor::PlayersInZone() {
    return false;
}

void AZoneActor::GetZoneMarkerLocations(TArray<FLocationInfo>& OutZoneMarkerLocations) {
}

void AZoneActor::GenerateLMAs() {
}


