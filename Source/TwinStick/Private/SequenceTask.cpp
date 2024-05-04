#include "SequenceTask.h"

USequenceTask::USequenceTask() {
    this->ObjectiveTrackerClass = NULL;
}

void USequenceTask::TerminalActivated(APowerConsumer* Consumer, bool bBActivated) {
}

USequenceTask* USequenceTask::StartSequenceTask(UObject* WorldContextObject, FText MissionName, FGameplayTagContainer Tags, EGameplayContainerMatchType MatchType, int32 NumTerminals, bool bCanEverExpire, float ExpirationTime) {
    return NULL;
}


