#include "WeaponTargetingBase.h"

UWeaponTargetingBase::UWeaponTargetingBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsAiming = false;
    this->AimingEffect = NULL;
    this->AimingEffectInstance = NULL;
}

void UWeaponTargetingBase::StopAiming() {
}

void UWeaponTargetingBase::StartAiming() {
}

void UWeaponTargetingBase::SetLaserColor(FVector NewColor) {
}

bool UWeaponTargetingBase::IsAiming() const {
    return false;
}

float UWeaponTargetingBase::GetRange() const {
    return 0.0f;
}


