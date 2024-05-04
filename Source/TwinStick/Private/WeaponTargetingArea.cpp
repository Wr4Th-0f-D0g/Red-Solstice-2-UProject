#include "WeaponTargetingArea.h"

UWeaponTargetingArea::UWeaponTargetingArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MarkerActorClass = NULL;
    this->ParticleSystem = NULL;
    this->Radius = 0.00f;
    this->AreaMarkerActor = NULL;
    this->DrawDebug = false;
}


