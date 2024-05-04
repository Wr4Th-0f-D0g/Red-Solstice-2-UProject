#include "StrategyMapEventBase.h"

UStrategyMapEventBase::UStrategyMapEventBase() {
    this->EventListDisplayIcon = NULL;
    this->bHiddenInEventList = false;
    this->EventType = EMapEventType::Invalid;
    this->bIsPaused = false;
}

void UStrategyMapEventBase::SetEventTriggerTimeIn(int32 Hours) {
}

void UStrategyMapEventBase::SetEventTriggerTime(const FMarsTime& TriggerTime) {
}

void UStrategyMapEventBase::ResumeTimer() {
}

void UStrategyMapEventBase::PauseTimer() {
}

void UStrategyMapEventBase::ExecuteEvent_Implementation() {
}


