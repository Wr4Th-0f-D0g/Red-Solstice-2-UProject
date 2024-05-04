#include "OptionsObject.h"

UOptionsObject::UOptionsObject() {
    this->GraphicsOptionsObject = NULL;
    this->ControlsOptionsObject = NULL;
    this->GameplayOptionsObject = NULL;
    this->AudioOptionsObject = NULL;
    this->bSkipInitResCheck = false;
}

bool UOptionsObject::ShouldShowGameplayMenu() {
    return false;
}

void UOptionsObject::SetIsInGameReloadMode(bool Val) {
}

void UOptionsObject::ResetShouldShowGameplayMenu() {
}

bool UOptionsObject::GetIsInGameReloadMode() const {
    return false;
}

UGraphicsOptionsObject* UOptionsObject::GetGraphicsOptionsObject() const {
    return NULL;
}

UGameplayOptionsObject* UOptionsObject::GetGameplayOptionsObject() const {
    return NULL;
}

FString UOptionsObject::GetDefaultLocaleString() {
    return TEXT("");
}

UControlsOptionsObject* UOptionsObject::GetControlsOptionsObject() const {
    return NULL;
}

UAudioOptionsObject* UOptionsObject::GetAudioOptionsObject() const {
    return NULL;
}


