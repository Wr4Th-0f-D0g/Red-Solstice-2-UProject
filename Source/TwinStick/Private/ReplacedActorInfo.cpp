#include "ReplacedActorInfo.h"

FReplacedActorInfo::FReplacedActorInfo() {
    this->HealthMax = 0.00f;
    this->Health = 0.00f;
    this->IsDestroyedActorInstance = false;
    this->RangeToRemoveObjects = 0.00f;
    this->ReplacedISM = NULL;
    this->ReplacedInstanceIndex = 0;
    this->DestroyedISM = NULL;
    this->DestroyedInstanceIndex = 0;
    this->GeometryCacheInstance = NULL;
    this->bBeingRestored = false;
    this->FortifiedISM = NULL;
    this->FortifiedMeshItemIndex = 0;
}

