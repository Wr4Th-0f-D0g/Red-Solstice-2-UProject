#include "ToggleActivationParameters.h"

FToggleActivationParameters::FToggleActivationParameters() {
    this->ResourceDrainPerSecond = 0.00f;
    this->ResourcesReservedWhileActive = 0;
    this->ActivationThreshold = 0.00f;
    this->AutoDeactivationThreshold = 0.00f;
    this->ToggleMode = ESkillToggleMode::ESTM_Pressed;
}

