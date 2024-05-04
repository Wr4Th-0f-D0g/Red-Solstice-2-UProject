#include "HitscanPayload.h"

FHitscanPayload::FHitscanPayload() {
    this->Distance = 0.00f;
    this->bCriticalHit = false;
    this->InstanceIndex = 0;
    this->bSeparateProjectile = false;
    this->FiringComponent = NULL;
    this->HitObjectClass = NULL;
}

