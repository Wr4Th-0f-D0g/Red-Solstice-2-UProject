#include "HoldPositionStatus.h"

FHoldPositionStatus::FHoldPositionStatus() {
    this->HoldSecondsElapsed = 0.00f;
    this->HoldSeconds = 0.00f;
    this->FailureSecondsElapsed = 0.00f;
    this->FailureSeconds = 0.00f;
    this->bAreaReached = false;
    this->bResetFailureOnEntry = false;
    this->bCurrentlyInsideArea = false;
    this->bCanEverFail = false;
    this->bStartFailureCountdownImmediately = false;
}

