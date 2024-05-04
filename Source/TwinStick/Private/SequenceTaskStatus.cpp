#include "SequenceTaskStatus.h"

FSequenceTaskStatus::FSequenceTaskStatus() {
    this->bCanEvenExpire = false;
    this->ReachLocationSeconds = 0.00f;
    this->MatchType = EGameplayContainerMatchType::Any;
    this->ReachSecondsElapsed = 0.00f;
    this->NumSelectedTerminals = 0;
    this->NumTerminals = 0;
}

