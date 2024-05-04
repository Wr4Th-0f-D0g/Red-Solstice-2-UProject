#include "DestroyActorStatus.h"

FDestroyActorStatus::FDestroyActorStatus() {
    this->bCanEverExpire = false;
    this->ReachLocationSeconds = 0.00f;
    this->LastKilledTarget = NULL;
    this->bAllKilled = false;
    this->NumKilled = 0;
    this->ReachSecondsElapsed = 0.00f;
}

