#include "BiomassExplosionDamageData.h"

FBiomassExplosionDamageData::FBiomassExplosionDamageData() {
    this->DoDamageToBiomass = false;
    this->Radius = 0.00f;
    this->Intensity = 0.00f;
    this->DamageFalloutCurve = NULL;
}

