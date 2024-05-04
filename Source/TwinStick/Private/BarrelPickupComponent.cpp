#include "BarrelPickupComponent.h"

UBarrelPickupComponent::UBarrelPickupComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxThrowCharge = 0.00f;
    this->MinThrowForce = 0.00f;
    this->ThrowAngle = 0.00f;
    this->PickupSound = NULL;
    this->ThrowLoadSound = NULL;
    this->ThrowSound = NULL;
    this->ThrowLoadSoundComponent = NULL;
    this->HoldParticleEffect = NULL;
    this->ThrowParticleEffect = NULL;
    this->HoldParticleComponent = NULL;
    this->PickedupBarrel = NULL;
}

void UBarrelPickupComponent::SetTriggerPressed(bool bIsPressed) {
}

void UBarrelPickupComponent::SetPickedUpBarrel(ABarrelBase* NewPickedupBarrel) {
}

ABarrelBase* UBarrelPickupComponent::GetPickedUpBarrel() const {
    return NULL;
}

bool UBarrelPickupComponent::GetIsBarrelHeld() {
    return false;
}

void UBarrelPickupComponent::BarrelDied(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied) {
}

void UBarrelPickupComponent::AnimCallback(EAnimCall AnimToCall, EAnimCallPhase Phase) {
}


