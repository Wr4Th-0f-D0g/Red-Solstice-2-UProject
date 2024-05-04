#include "ChargedActivationParameters.h"

FChargedActivationParameters::FChargedActivationParameters() {
    this->ResourceDrainPerSecond = 0.00f;
    this->MinimumChargeForActivation = 0.00f;
    this->MaximumCharge = 0.00f;
    this->bActivateOnMaxCharge = false;
}

