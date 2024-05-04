#include "ExplosionDamage.h"

FExplosionDamage::FExplosionDamage() {
    this->Damage = 0.00f;
    this->MinimumDamageMultiplier = 0.00f;
    this->ArmorShredded = 0;
    this->Suppression = 0.00f;
    this->DamageType = EDamageGroup::EDT_None;
    this->PlayerDamageMultiplier = 0.00f;
    this->FriendlyFireMultiplier = 0.00f;
}

