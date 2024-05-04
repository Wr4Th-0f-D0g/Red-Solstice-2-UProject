#include "AreaMarkerActorParameters.h"

FAreaMarkerActorParameters::FAreaMarkerActorParameters() {
    this->Radius = 0.00f;
    this->AreaEffectParticleSystem = NULL;
    this->AreaMarkerActorClass = NULL;
    this->bHighlightTargets = false;
    this->TargetClassFilter = NULL;
    this->IgnoreClassFilter = NULL;
}

