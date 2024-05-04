#include "WeaponButtonWidgetBase.h"

UWeaponButtonWidgetBase::UWeaponButtonWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->WeaponButton = NULL;
    this->WeaponImage = NULL;
    this->WeaponAmmoText = NULL;
    this->MagazineImage = NULL;
    this->HotkeyImage = NULL;
    this->ButtonToggleFiringMode = NULL;
}


