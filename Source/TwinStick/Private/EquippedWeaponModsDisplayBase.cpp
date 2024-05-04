#include "EquippedWeaponModsDisplayBase.h"

UEquippedWeaponModsDisplayBase::UEquippedWeaponModsDisplayBase() : UUserWidget(FObjectInitializer::Get()) {
}

FCharacterWeaponData UEquippedWeaponModsDisplayBase::GetReplicatedWeaponData(AStrategyPlayerState* PlayerState, bool bForPrimary) {
    return FCharacterWeaponData{};
}


