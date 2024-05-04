#include "WeaponStateTimer.h"

FWeaponStateTimer::FWeaponStateTimer() {
    this->StateTransitionMode = EStateTransitionMode::ESTM_Invalid;
    this->StateDuration = 0.00f;
    this->RemainingDuration = 0.00f;
}

