#include "CivilianAnimInstance.h"

UCivilianAnimInstance::UCivilianAnimInstance() {
    this->Civilian = NULL;
    this->SpeedHorizontal = 0.00f;
    this->SpeedVertical = 0.00f;
    this->bStandingStill = false;
    this->SpeedNormalized = 0.00f;
    this->bCowering = false;
    this->bDead = false;
    this->bWaitingAtRallyPoint = false;
}


