#include "WeaponTargetingLaserSpread.h"

UWeaponTargetingLaserSpread::UWeaponTargetingLaserSpread(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AimingEffectInstanceEndPoint = NULL;
    this->LaserCollisionEffect = NULL;
    this->LaserCollisionEffectInstance = NULL;
}

void UWeaponTargetingLaserSpread::GetEndPointForAngle(FVector& EndPointLocation, bool& bComponentHit, float HalfWeaponSpread) {
}

void UWeaponTargetingLaserSpread::AdjustEndPoint() {
}


