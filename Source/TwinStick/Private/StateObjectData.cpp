#include "StateObjectData.h"

FStateObjectData::FStateObjectData() {
    this->MontageAsset = NULL;
    this->MontageInstanceID = 0;
    this->bForceMontageToStateDuration = false;
    this->bApplyAimingBuff = false;
    this->ActiveParticleSystem = NULL;
}

