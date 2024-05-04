#include "OptionsMenu.h"

UOptionsMenu::UOptionsMenu() : UUserWidget(FObjectInitializer::Get()) {
    this->OptionsTitleLabel = NULL;
    this->ButtonGraphics = NULL;
    this->ButtonGraphicsLabel = NULL;
    this->ButtonControls = NULL;
    this->ButtonControlsLabel = NULL;
    this->ButtonGameplay = NULL;
    this->ButtonGameplayLabel = NULL;
    this->ButtonAudio = NULL;
    this->ButtonAudioLabel = NULL;
    this->BackButton = NULL;
    this->BackButtonLabel = NULL;
    this->RevertButton = NULL;
    this->RevertButtonLabel = NULL;
    this->ApplyButton = NULL;
    this->ApplyButtonLabel = NULL;
    this->AcceptButton = NULL;
    this->AcceptButtonLabel = NULL;
    this->WidgetSwitcherOptions = NULL;
}


