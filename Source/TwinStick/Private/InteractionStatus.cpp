#include "InteractionStatus.h"

FInteractionStatus::FInteractionStatus() {
    this->bInteractionInProgress = false;
    this->LastTransitionReason = EInteractionStatus::None;
    this->TimeRemaining = 0.00f;
}

