#include "ActivationParameters.h"

FActivationParameters::FActivationParameters() {
    this->ActivationCost = 0.00f;
    this->bResourceRechargeAllowed = false;
    this->ResourceRechargeReactivationDelay = 0.00f;
    this->EnterCooldownCondition = EActivationStatus::EAS_Inactive;
}

