#include "WeaponSkillSmartGun.h"

UWeaponSkillSmartGun::UWeaponSkillSmartGun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

float UWeaponSkillSmartGun::GetDamageForHitComponent_Implementation(USceneComponent* InHitComponent) const {
    return 0.0f;
}


