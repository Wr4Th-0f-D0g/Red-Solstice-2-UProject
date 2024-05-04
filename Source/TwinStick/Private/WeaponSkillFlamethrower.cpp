#include "WeaponSkillFlamethrower.h"
#include "Templates/SubclassOf.h"

UWeaponSkillFlamethrower::UWeaponSkillFlamethrower(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VirtualProjectileSpeed = 0.00f;
    this->VirtualProjectileSpread = 0.00f;
    this->VirtualProjectileInitialRadius = 0.00f;
    this->RandomGroundBurningSpawnTime = 0.00f;
    this->AddBuffTime = 0.00f;
    this->WallBurningActorTime = 0.00f;
    this->GroundFireBurningAmount = 0.00f;
    this->ArmorShredPerSphere = 0.00f;
    this->BurningBuffClass = NULL;
    this->bCanAddBurningToFriendly = false;
    this->ApplyBuffToSuppressedMonstersOnly = false;
    this->BurningManager = NULL;
    this->RandomGroundFireMinRangeMultiplier = 0.20f;
    this->OverlapUpdateRadiusMultiplier = 0.33f;
    this->BiomassDamageTime = 0.00f;
    this->BiomassDamageIntensity = 0.00f;
    this->BiomassDamageRandomness = 0.00f;
    this->BiomassDamageRadius = 0.00f;
    this->BiomassDamageRadiusVariance = 0.00f;
    this->BiomassDamageCurveOverride = NULL;
    this->BiomassDamageMinRangeMultiplier = 0.50f;
    this->bDebugFlamethrower = false;
    this->FlameParticleComponent = NULL;
}

void UWeaponSkillFlamethrower::TryFindBurningManager() {
}

void UWeaponSkillFlamethrower::SetMuzzleFlash(UParticleSystem* MuzzleFlash) {
}

void UWeaponSkillFlamethrower::SetBurningBuffClass(TSubclassOf<USolsticeBuffBase> InBurningBuffClass) {
}

void UWeaponSkillFlamethrower::InitiateVirtualFlameSphereOverlap(FVirtualFlameSphere& InVirtualFlameSphere) {
}


