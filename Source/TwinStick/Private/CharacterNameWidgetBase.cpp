#include "CharacterNameWidgetBase.h"

UCharacterNameWidgetBase::UCharacterNameWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->EneryProgressBarPtr = NULL;
    this->HealthProgressBarPtr = NULL;
    this->OverwatchTextBoxPtr = NULL;
    this->OverwatchImagePtr = NULL;
    this->PlayerNameTextBoxPtr = NULL;
    this->CurrentAmmoTextBoxPtr = NULL;
    this->CurrentAmmoImagePtr = NULL;
    this->ArmorProgressBarPtr = NULL;
    this->ReloadingBarPtr = NULL;
    this->ReloadingTextPtr = NULL;
    this->AmmoCanvasPtr = NULL;
    this->bArmoryWidget = false;
    this->Hero = NULL;
    this->AmmoImage = NULL;
    this->Descriptor = NULL;
}



void UCharacterNameWidgetBase::HandleVisibilityChanged(bool bHidden, bool bHideMinimap) {
}




