#include "CharacterNameWidget.h"

UCharacterNameWidget::UCharacterNameWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->EnergyProgressBar = NULL;
    this->EnergyReservedProgressBar = NULL;
    this->HealthProgressBar = NULL;
    this->ReloadingBar = NULL;
    this->OverwatchImage = NULL;
    this->CurrentAmmoImage = NULL;
    this->PlayerNameTextBox = NULL;
    this->OverwatchTextBox = NULL;
    this->CurrentAmmoTextBox = NULL;
    this->ReloadingText = NULL;
    this->AmmoDisplayHolder = NULL;
    this->ReloadingContainer = NULL;
    this->NameContainer = NULL;
    this->AmmoBarContainer = NULL;
    this->FlashingAmmoBar = NULL;
    this->OpaqueAmmoBar = NULL;
    this->InventorySlotChar = NULL;
    this->LastEnergyShoutTime = 3.00f;
    this->CurrentAmmoDisplayed = -1;
    this->Hero = NULL;
    this->IndiDescriptor = NULL;
}


void UCharacterNameWidget::SetupWidget(AHeroCharacterBase* InHero) {
}



void UCharacterNameWidget::HandleVisibilityChanged(bool bHidden, bool bHideMinimap) {
}

AHeroCharacterBase* UCharacterNameWidget::GetOwningHero() const {
    return NULL;
}

bool UCharacterNameWidget::GetCanShowInventoryWidget() {
    return false;
}


