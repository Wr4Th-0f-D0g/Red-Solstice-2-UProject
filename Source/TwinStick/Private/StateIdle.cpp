#include "StateIdle.h"
#include "EFiringState.h"

UStateIdle::UStateIdle() {
    this->ObjectFiringState = EFiringState::EFS_Idle;
}


