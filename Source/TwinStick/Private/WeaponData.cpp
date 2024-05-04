#include "WeaponData.h"

FWeaponData::FWeaponData() {
    this->SlotsTaken = 0;
    this->bIsPrimaryWeapon = false;
    this->LocomotionMode = ELocomotionMode::ELM_None;
    this->WeaponType = EWeaponGameplayType::EWGT_Invalid;
    this->CarryingMovementPenalty = 0.00f;
    this->bStartWithPrimaryFireModeActive = false;
    this->DefaultSkinIndex = 0;
    this->bIsMonsterWeapon = false;
    this->DLCRequirementCode = 0;
    this->CachedIdentifier = 0;
}

