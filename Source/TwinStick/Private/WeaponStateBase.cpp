#include "WeaponStateBase.h"

UWeaponStateBase::UWeaponStateBase() {
    this->ObjectFiringState = EFiringState::EFS_None;
    this->bCanAutoTransitionToNextState = true;
}

void UWeaponStateBase::Update_Implementation(ASolsticeWeaponBase* Weapon, float DeltaTIme) {
}

void UWeaponStateBase::OnExit_Implementation(ASolsticeWeaponBase* Weapon) {
}

void UWeaponStateBase::OnEnter_Implementation(ASolsticeWeaponBase* Weapon) {
}

FStateObjectData UWeaponStateBase::GetStateObjectData(ASolsticeWeaponBase* Weapon) const {
    return FStateObjectData{};
}

bool UWeaponStateBase::GetNextFiringState_Implementation(ASolsticeWeaponBase* Weapon, EFiringState& OutNextState) {
    return false;
}

EFiringState UWeaponStateBase::GetFiringState() {
    return EFiringState::EFS_None;
}

ASolsticeCharacterBase* UWeaponStateBase::GetCharacterOwner(ASolsticeWeaponBase* Weapon) const {
    return NULL;
}

void UWeaponStateBase::Cleanup_Implementation(ASolsticeWeaponBase* Weapon) {
}


