#include "WeaponTooltipBase.h"

UWeaponTooltipBase::UWeaponTooltipBase() : UUserWidget(FObjectInitializer::Get()) {
    this->bCompactTooltip = false;
    this->WeaponNameText = NULL;
    this->WeaponDescriptionText = NULL;
    this->WeaponTypeText = NULL;
    this->WeaponProsText = NULL;
    this->WeaponConsText = NULL;
    this->FriendlyFireText = NULL;
    this->WeaponIcon = NULL;
    this->MagazineSizeText = NULL;
    this->ReloadSpeedText = NULL;
    this->ReloadSpeedContainer = NULL;
    this->EquipRequirementsBox = NULL;
    this->TooltipWeapon = NULL;
    this->WeaponDataTable = NULL;
    this->WeaponDescriptionTable = NULL;
    this->AspectDescriptionTable = NULL;
    this->SpecialWeaponBaseClass = NULL;
}

bool UWeaponTooltipBase::TooltipIsForPrimaryWeapon() const {
    return false;
}


void UWeaponTooltipBase::InitializeTooltipWithWeapon(ASolsticeWeaponBase* NewWeapon) {
}

void UWeaponTooltipBase::InitializeTooltipWithName(FName WeaponRowName) {
}


