#include "FireComponentBase.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UFireComponentBase::UFireComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowAimingAsPrimarySpecialized = false;
    this->FiringState = EFiringState::EFS_Idle;
    this->DesiredState = EFiringState::EFS_Idle;
    this->bShouldFire = false;
    this->HitObjectClass = NULL;
    this->HitObject = NULL;
    this->RequiredAmmoType = EAmmoType::EAT_Primary;
    this->DamageType = EDamageGroup::EDT_Kinetic;
    this->PenetrationMode = EWeaponPenetrationMode::EWPM_None;
}

bool UFireComponentBase::ShouldFire() const {
    return false;
}

void UFireComponentBase::SetWeaponEffectOverrides(FBulletEffects WeaponEffects, FWeaponSounds WeaponSounds) {
}

void UFireComponentBase::SetHitObjectClass(TSubclassOf<UHitObjectBase> NewClass) {
}

void UFireComponentBase::SetFiringState(EFiringState NewFiringState) {
}

void UFireComponentBase::SetDesiredState(EFiringState NewDesiredState) {
}

void UFireComponentBase::OnRep_HitObjectClass(TSubclassOf<UHitObjectBase> OldClass) {
}

bool UFireComponentBase::IsFiring() const {
    return false;
}

bool UFireComponentBase::IsAiming() const {
    return false;
}

bool UFireComponentBase::HasEnergyToFire() const {
    return false;
}

bool UFireComponentBase::HasAmmunitionToFire() const {
    return false;
}

EFiringState UFireComponentBase::GetWeaponState() const {
    return EFiringState::EFS_None;
}

float UFireComponentBase::GetTimeBetweenShots() const {
    return 0.0f;
}

AActor* UFireComponentBase::GetTarget() const {
    return NULL;
}

float UFireComponentBase::GetRange() const {
    return 0.0f;
}

int32 UFireComponentBase::GetNumberOfProjectiles() const {
    return 0;
}

EFiringMode UFireComponentBase::GetFiringMode() const {
    return EFiringMode::EFS_Idle;
}

float UFireComponentBase::GetDamage() const {
    return 0.0f;
}

int32 UFireComponentBase::GetAmmoPerShot() const {
    return 0;
}

void UFireComponentBase::FireProjectile() {
}

void UFireComponentBase::Fire() {
}

void UFireComponentBase::ClearWeaponEffectOverrides() {
}

bool UFireComponentBase::CanFire() const {
    return false;
}

void UFireComponentBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFireComponentBase, HitObjectClass);
}


