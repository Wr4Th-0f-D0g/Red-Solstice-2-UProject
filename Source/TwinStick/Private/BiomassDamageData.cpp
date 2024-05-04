#include "BiomassDamageData.h"

FBiomassDamageData::FBiomassDamageData() {
    this->Radius = 0.00f;
    this->Intensity = 0.00f;
    this->DamageFalloutCurve = NULL;
    this->DamageApplyType = EBiomassDamageApplyType::BDATypeAdditive;
    this->DamageRandomness = 0;
    this->DamageHealPerSecOverride = 0.00f;
    this->bHealEvenWhenStillDamaged = false;
}

