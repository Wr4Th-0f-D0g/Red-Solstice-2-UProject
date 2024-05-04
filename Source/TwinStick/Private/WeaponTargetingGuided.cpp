#include "WeaponTargetingGuided.h"

UWeaponTargetingGuided::UWeaponTargetingGuided(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RefreshTime = 0.00f;
    this->TargetAngle = 0.00f;
    this->TargetWidget = NULL;
    this->TargetWidgetInstance = NULL;
    this->AimingEffectInstance2 = NULL;
    this->TargetActor = NULL;
}

void UWeaponTargetingGuided::ScanForTargetsClosest() {
}

void UWeaponTargetingGuided::RefreshTargeting(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied) {
}

bool UWeaponTargetingGuided::IsTargetHitable(AActor* aTarget) {
    return false;
}

FVector UWeaponTargetingGuided::GetEndPointForAngle(float aAngleFromAim) {
    return FVector{};
}

void UWeaponTargetingGuided::CheckTargets() {
}

void UWeaponTargetingGuided::AdjustEndPoint() {
}


