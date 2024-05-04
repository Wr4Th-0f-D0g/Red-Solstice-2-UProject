#include "WeaponDataAsset.h"
#include "Templates/SubclassOf.h"

UWeaponDataAsset::UWeaponDataAsset() {
    this->WeaponTable = NULL;
    this->WeaponFiringModeTable = NULL;
    this->WeaponComponentModificationTable = NULL;
    this->WeaponAmmoModificationTable = NULL;
    this->WeaponSpecializationTable = NULL;
    this->WeaponUpgradeTable = NULL;
    this->WeaponSoundTable = NULL;
    this->WeaponEffectTable = NULL;
}

void UWeaponDataAsset::PopulateWidgetClassIndices() {
}

void UWeaponDataAsset::PopulateWeaponTags() {
}

void UWeaponDataAsset::PopulateWeaponSoundType() {
}

void UWeaponDataAsset::PopulateWeaponSounds() {
}

void UWeaponDataAsset::PopulateWeaponEffects() {
}

void UWeaponDataAsset::PopulateWeaponBuffs() {
}

void UWeaponDataAsset::PopulateWeaponAmmoModifications() {
}

void UWeaponDataAsset::PopulateFiringModes() {
}

TSubclassOf<ASolsticeWeaponBase> UWeaponDataAsset::GetWeaponClassFromTag(FGameplayTag WeaponTag) {
    return NULL;
}

ASolsticeWeaponBase* UWeaponDataAsset::GetWeaponCDO_FromTag(FGameplayTag WeaponTag) {
    return NULL;
}


