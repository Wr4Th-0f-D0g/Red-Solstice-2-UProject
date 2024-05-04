#include "AudioOptionsObject.h"

UAudioOptionsObject::UAudioOptionsObject() {
    this->EffectsVolumeSettings = 1.00f;
    this->MusicVolumeSettings = 1.00f;
    this->DialogueVolumeSettings = 1.00f;
    this->AmbianceVolumeSettings = 1.00f;
    this->MasterVolumeSettings = 1.00f;
}

void UAudioOptionsObject::SetMusicVolume(float Val) {
}

void UAudioOptionsObject::SetMasterVolume(float Val) {
}

void UAudioOptionsObject::SetEffectsVolume(float Val) {
}

void UAudioOptionsObject::SetDialogueVolume(float Val) {
}

void UAudioOptionsObject::SetAmbianceVolume(float Val) {
}

void UAudioOptionsObject::SaveAll() {
}

void UAudioOptionsObject::Init() {
}

float UAudioOptionsObject::GetMusicVolume() const {
    return 0.0f;
}

float UAudioOptionsObject::GetMasterVolume() const {
    return 0.0f;
}

bool UAudioOptionsObject::GetIsDirty() {
    return false;
}

float UAudioOptionsObject::GetEffectsVolume() const {
    return 0.0f;
}

float UAudioOptionsObject::GetDialogueVolume() const {
    return 0.0f;
}

float UAudioOptionsObject::GetAmbianceVolume() const {
    return 0.0f;
}

void UAudioOptionsObject::ApplySoundSettings() {
}


