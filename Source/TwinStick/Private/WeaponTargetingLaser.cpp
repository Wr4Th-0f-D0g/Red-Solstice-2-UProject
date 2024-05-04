#include "WeaponTargetingLaser.h"

UWeaponTargetingLaser::UWeaponTargetingLaser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LaserCollisionEffect = NULL;
    this->LaserCollisionEffectSecondPlayer = NULL;
    this->LaserCollisionEffectInstance = NULL;
}


