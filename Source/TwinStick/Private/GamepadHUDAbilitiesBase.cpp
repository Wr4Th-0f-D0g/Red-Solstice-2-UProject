#include "GamepadHUDAbilitiesBase.h"

UGamepadHUDAbilitiesBase::UGamepadHUDAbilitiesBase() {
    this->MainDisplayBorder = NULL;
    this->LevelUpDownBox = NULL;
    this->PromptSwitcher = NULL;
    this->GamepadSwitchText = NULL;
}

void UGamepadHUDAbilitiesBase::RegisterAbilitySelectionIcons(TArray<UCommonActionWidget*> NewAbilitySelectionIcons) {
}

bool UGamepadHUDAbilitiesBase::PlayerIsInVehicleOrMech() const {
    return false;
}


