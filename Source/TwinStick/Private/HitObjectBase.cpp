#include "HitObjectBase.h"

UHitObjectBase::UHitObjectBase() {
    this->PenetrationModeOverride = EWeaponPenetrationMode::EWPM_None;
    this->bOverridePenetrationMode = false;
    this->DamageTypeOverride = EDamageGroup::EDT_Kinetic;
    this->bOverrideDamageType = false;
    this->AppliedBuffClass = NULL;
    this->BuffApplicationChance = 1.00f;
    this->InventorySize = 0;
}

UActionObjectExplode* UHitObjectBase::SpawnExplosiveObject(const FTransform& Transform, float Radius, FVector Normal) {
    return NULL;
}




float UHitObjectBase::GetExplosionRadius_Implementation() const {
    return 0.0f;
}

FExplosionEffects UHitObjectBase::GetExplosionEffects_Implementation() const {
    return FExplosionEffects{};
}

FExplosionDecal UHitObjectBase::GetExplosionDecal_Implementation() const {
    return FExplosionDecal{};
}

FExplosionDamage UHitObjectBase::GetExplosionDamage_Implementation() const {
    return FExplosionDamage{};
}


