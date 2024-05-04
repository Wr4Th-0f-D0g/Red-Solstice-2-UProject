#include "ReachLocationCarriageStatus.h"

FReachLocationCarriageStatus::FReachLocationCarriageStatus() {
    this->bCanEvenExpire = false;
    this->ReachLocationSeconds = 0.00f;
    this->RequiredItem = NULL;
    this->bConsumeItemOnCompletion = false;
    this->bTeleportPlayersIfOneIsOnTrain = false;
    this->NumPawnsCurrentlyInRadius = 0;
    this->NumPawnsRequired = 0;
    this->ReachSecondsElapsed = 0.00f;
}

