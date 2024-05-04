#include "StateObjectEffects.h"

FStateObjectEffects::FStateObjectEffects() {
    this->OnEnterEffect = NULL;
    this->ActiveEffect = NULL;
    this->OnExitEffect = NULL;
}

