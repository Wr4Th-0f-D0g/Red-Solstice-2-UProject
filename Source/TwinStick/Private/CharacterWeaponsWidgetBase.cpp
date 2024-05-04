#include "CharacterWeaponsWidgetBase.h"

UCharacterWeaponsWidgetBase::UCharacterWeaponsWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->OverwatchAimText = NULL;
    this->ManualAimText = NULL;
    this->OverwatchAimButton = NULL;
    this->ManualAimButton = NULL;
    this->OverwatchHotkeyImage = NULL;
    this->ManualAimTextBorder = NULL;
    this->OverwatchTextBorder = NULL;
    this->ManualAimHotkeySizebox = NULL;
    this->OverwatchHotkeySizebox = NULL;
    this->ExtraButtonsBox = NULL;
    this->PrimaryWeaponButton = NULL;
    this->SecondaryWeaponButton = NULL;
    this->PrimaryAmmoLowValue = 0;
    this->SecondaryAmmoLowValue = 0;
    this->ManualAimActiveTexture = NULL;
    this->ManualAimInactiveTexture = NULL;
    this->OverwatchActiveTexture = NULL;
    this->OverwatchInactiveTexture = NULL;
    this->PrimaryWeaponActiveTexture = NULL;
    this->PrimaryWeaponInactiveTexture = NULL;
    this->SecondaryWeaponActiveTexture = NULL;
    this->SecondaryWeaponInactiveTexture = NULL;
    this->Hero = NULL;
    this->PowerSuit = NULL;
    this->RTSController = NULL;
    this->CurrentPrimaryWeapon = NULL;
    this->CurrentSecondaryWeapon = NULL;
}








void UCharacterWeaponsWidgetBase::ChangeButtonImage(UButton* Button, UTexture2D* NewTexture) {
}


