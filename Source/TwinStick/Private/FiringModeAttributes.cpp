#include "FiringModeAttributes.h"

FFiringModeAttributes::FFiringModeAttributes() {
    this->DamageType = EDamageGroup::EDT_None;
    this->AmmoType = EAmmoType::EAT_None;
    this->PenetrationMode = EWeaponPenetrationMode::EWPM_None;
    this->bAIRequiresFriendlyCheck = false;
    this->CachedIdentifier = 0;
}

