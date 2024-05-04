#include "ModuleEquipStatus.h"
#include "Templates/SubclassOf.h"

UModuleEquipStatus::UModuleEquipStatus() {
    this->PrimaryWeaponSlots = 0;
    this->SecondaryWeaponSlots = 0;
}

bool UModuleEquipStatus::IsModuleEquippedOnSection(const FModuleInfo& InModule, ESuitSection InSection) const {
    return false;
}

bool UModuleEquipStatus::HasWeaponUpgradeTypeEquipped(TSubclassOf<ASolsticeWeaponBase> WeaponClass, EWeaponUpgradeType UpgradeType) const {
    return false;
}

bool UModuleEquipStatus::HasWeaponUpgradeEquipped(TSubclassOf<ASolsticeWeaponBase> WeaponClass, const FDataTableRowHandle& UpgradeDataHandle) const {
    return false;
}

bool UModuleEquipStatus::HasWeaponEquipped(TSubclassOf<ASolsticeWeaponBase> WeaponClass) const {
    return false;
}

bool UModuleEquipStatus::HasAvailableRoomForModuleOnSection(const FModuleInfo& InModule, ESuitSection InSection) const {
    return false;
}

bool UModuleEquipStatus::HasAvailableRoomForModule(const FModuleInfo& InModule) const {
    return false;
}

float UModuleEquipStatus::GetSizeOfTotalWeaponUpgradesEquipped(bool bPrimaryWeapon) const {
    return 0.0f;
}

int32 UModuleEquipStatus::GetNumberOfWeaponUpgradesOfTypeEquipped(TSubclassOf<ASolsticeWeaponBase> WeaponClass, EWeaponUpgradeType UpgradeType) const {
    return 0;
}

int32 UModuleEquipStatus::GetNumberOfEquippedModulesMatching(const FModuleInfo& InModule) const {
    return 0;
}

int32 UModuleEquipStatus::GetMaxNumberOfWeaponUpgradesAllowedForType(TSubclassOf<ASolsticeWeaponBase> WeaponClass, EWeaponUpgradeType UpgradeType) const {
    return 0;
}

bool UModuleEquipStatus::GetEquippedWeaponUpgradeOfType(TSubclassOf<ASolsticeWeaponBase> WeaponClass, EWeaponUpgradeType UpgradeType, FDataTableRowHandle& OutUpgradeHandle) const {
    return false;
}

TArray<FDataTableRowHandle> UModuleEquipStatus::GetAllEquippedWeaponUpgrades(bool bPrimaryWeapon) const {
    return TArray<FDataTableRowHandle>();
}

EEquipModuleFailure UModuleEquipStatus::CanReplaceModule(const FModuleInfo& InModule, const FModuleInfo& ReplacedModule, bool& Success) const {
    return EEquipModuleFailure::NoFail;
}

bool UModuleEquipStatus::CanEquipWeaponUpgrade(TSubclassOf<ASolsticeWeaponBase> WeaponClass, const FDataTableRowHandle& UpgradeDataHandle) const {
    return false;
}

bool UModuleEquipStatus::CanEquipUtilitySkill() const {
    return false;
}

EEquipModuleFailure UModuleEquipStatus::CanEquipModule(const FModuleInfo& InModule, bool& Success) const {
    return EEquipModuleFailure::NoFail;
}

bool UModuleEquipStatus::CanEquipMainSkill() const {
    return false;
}

bool UModuleEquipStatus::AlreadyHasSkill(const FModuleInfo& InModule) const {
    return false;
}


