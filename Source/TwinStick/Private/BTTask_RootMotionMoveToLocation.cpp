#include "BTTask_RootMotionMoveToLocation.h"

UBTTask_RootMotionMoveToLocation::UBTTask_RootMotionMoveToLocation() {
    this->NodeName = TEXT("RootMotionMoveToLocation");
    this->bSwitchMovementMode = true;
    this->StartMovementMode = MOVE_None;
    this->bSwitchMovementModeOnFinish = true;
    this->FinishMovementMode = MOVE_None;
    this->FinishVelocityMode = ERootMotionFinishVelocityMode::ClampVelocity;
    this->bRestrictSpeedToExpected = false;
}


