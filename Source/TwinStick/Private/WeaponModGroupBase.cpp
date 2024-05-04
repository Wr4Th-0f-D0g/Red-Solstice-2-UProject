#include "WeaponModGroupBase.h"

UWeaponModGroupBase::UWeaponModGroupBase() : UUserWidget(FObjectInitializer::Get()) {
    this->Weapon = NULL;
    this->GroupType = EWeaponUpgradeType::Invalid;
    this->SelectionButtonContainer = NULL;
    this->GroupMinMaxText = NULL;
}

void UWeaponModGroupBase::HandleEquipmentChanged(AStrategyPlayerState* PS, UModuleEquipStatus* MES) {
}


