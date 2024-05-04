#include "EquipmentGroupList.h"

UEquipmentGroupList::UEquipmentGroupList() : UUserWidget(FObjectInitializer::Get()) {
    this->WeaponsDT = NULL;
    this->EquipmentType = EEquipementPanel::EEP_Primary;
}

TArray<FWeaponData> UEquipmentGroupList::GetSecondaryWeaponData() const {
    return TArray<FWeaponData>();
}

TArray<FWeaponData> UEquipmentGroupList::GetPrimaryWeaponData() const {
    return TArray<FWeaponData>();
}


