#include "MechWeaponComponent.h"
#include "Net/UnrealNetwork.h"

UMechWeaponComponent::UMechWeaponComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SweepRadius = 0.00f;
    this->DamageType = EDamageGroup::EDT_Kinetic;
    this->MechFireMontage_Left = NULL;
    this->MechFireMontage_Right = NULL;
    this->MechFireMontagePlayRate = 1.00f;
    this->bFirePressed = false;
    this->PenetrationMode = EWeaponPenetrationMode::EWPM_None;
    this->bRefiring = false;
    this->LastFireTime = 0.00f;
    this->TimerIntervalAdjust = 0.00f;
}

void UMechWeaponComponent::SetFireEnabled(bool bEnabled) {
}

void UMechWeaponComponent::ServerSetFireEnabled_Implementation(bool bEnabled) {
}

void UMechWeaponComponent::ServerResolveDamage_Implementation(const TArray<FHitscanPayload>& HitPayloads, const FVector_NetQuantize& Origin, uint16 PredictionKey) {
}

void UMechWeaponComponent::OnRep_bFirePressed() {
}

bool UMechWeaponComponent::IsFiring() const {
    return false;
}

void UMechWeaponComponent::ClientConfirmShot_Implementation(uint16 PredictionKey, float CurrentEnergy) {
}

void UMechWeaponComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMechWeaponComponent, bFirePressed);
}


