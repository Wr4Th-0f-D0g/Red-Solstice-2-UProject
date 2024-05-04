#include "HitscanPayloadLocal.h"

FHitscanPayloadLocal::FHitscanPayloadLocal() {
    this->bCriticalHit = false;
    this->bSeparateProjectile = false;
    this->FiringComponent = NULL;
    this->HitObjectClass = NULL;
}

