#include "ReachLocationStatus.h"

FReachLocationStatus::FReachLocationStatus() {
    this->bCanEvenExpire = false;
    this->ReachLocationSeconds = 0.00f;
    this->RequiredItem = NULL;
    this->AcceptableRadius = 0.00f;
    this->bAllPlayersMustReach = false;
    this->bConsumeItemOnCompletion = false;
    this->ReachSecondsElapsed = 0.00f;
    this->NumPawnsCurrentlyInRadius = 0;
    this->NumPawnsRequired = 0;
}

