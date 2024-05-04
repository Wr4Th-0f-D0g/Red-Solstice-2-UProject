#include "Damage.h"

FDamage::FDamage() {
    this->SourceClass = NULL;
    this->Damage = 0.00f;
    this->ArmorDamage = 0.00f;
    this->Suppression = 0.00f;
    this->EffectiveSuppression = 0.00f;
    this->Overkill = 0.00f;
    this->BlockedByArmor = 0.00f;
    this->DamageType = EDamageGroup::EDT_None;
    this->bCriticalHit = false;
    this->ArmorShredded = 0;
}

