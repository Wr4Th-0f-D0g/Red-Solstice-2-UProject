#include "BulletEffects.h"

FBulletEffects::FBulletEffects() {
    this->BulletHitEffectComponent = NULL;
    this->HitAudioComponent = NULL;
    this->bIsDefaultWeaponEffect = false;
    this->LoadedMuzzleFlashFx = NULL;
    this->LoadedMuzzleFlashSingleShotFx = NULL;
    this->LoadedBulletHitFx = NULL;
    this->LoadedBulletTrailFx = NULL;
    this->BulletParticleSpawnChance = 0.00f;
    this->BulletParticleSpeed = 0.00f;
    this->DecalLifetime = 0.00f;
    this->LoadedDecalMaterial = NULL;
    this->DefaultHitSound = NULL;
    this->AmmoIcon = NULL;
}

