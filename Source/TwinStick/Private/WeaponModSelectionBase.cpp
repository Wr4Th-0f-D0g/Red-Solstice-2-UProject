#include "WeaponModSelectionBase.h"

UWeaponModSelectionBase::UWeaponModSelectionBase() {
    this->ModIconImage = NULL;
    this->HasModImage = NULL;
    this->ModNameTextBlock = NULL;
    this->SlotSizeTextBlock = NULL;
    this->ButtonUpgradeType = EWeaponUpgradeType::Invalid;
    this->ButtonWeapon = NULL;
    this->TooltipWeaponClass = NULL;
}

void UWeaponModSelectionBase::HandleWorkbenchWeaponChanged(ASolsticeWeaponBase* WorkbenchWeapon) {
}

void UWeaponModSelectionBase::HandleModSelected() {
}

void UWeaponModSelectionBase::HandleEquipmentChanged(AStrategyPlayerState* PS, UModuleEquipStatus* MES) {
}

void UWeaponModSelectionBase::HandleCampaignProgressTagAdded(const FGameplayTag& NewTag) {
}

FWeaponUpgrade UWeaponModSelectionBase::GetWeaponUpgradesData() const {
    return FWeaponUpgrade{};
}

int32 UWeaponModSelectionBase::GetWeaponModTypeIndex() const {
    return 0;
}

FWeaponAmmoModification UWeaponModSelectionBase::GetWeaponAmmoUpgradeData() const {
    return FWeaponAmmoModification{};
}

int32 UWeaponModSelectionBase::GetRequiredRank() const {
    return 0;
}

FGameplayTag UWeaponModSelectionBase::GetRequiredCampaignTech() const {
    return FGameplayTag{};
}

float UWeaponModSelectionBase::GetModSize() const {
    return 0.0f;
}

FText UWeaponModSelectionBase::GetModName() const {
    return FText::GetEmpty();
}

UTexture2D* UWeaponModSelectionBase::GetModIcon() const {
    return NULL;
}

FText UWeaponModSelectionBase::GetModDescription() {
    return FText::GetEmpty();
}

FWeaponFireComponentModification UWeaponModSelectionBase::GetFireComponentData() const {
    return FWeaponFireComponentModification{};
}

bool UWeaponModSelectionBase::ButtonShouldBeEnabled() const {
    return false;
}

void UWeaponModSelectionBase::BindToWorkbenchActor() {
}


