#include "MissionTaskBase.h"

UMissionTaskBase::UMissionTaskBase() {
    this->CachedWorldContextObject = NULL;
    this->MinimapActor = NULL;
}

void UMissionTaskBase::HandleTimerExpired(AMissionBase* Mission, FMissionTimerManager TimerManager, EObjectiveTimer TimerStatus) {
}

void UMissionTaskBase::HandleObjectiveTaskCompleted() {
}

void UMissionTaskBase::HandleObjectiveTaskAborted() {
}

void UMissionTaskBase::HandleObjectiveCompleted(AMissionBase* Mission, EMissionStatus Status, int32 CurrentObjectiveIndex, bool bObjectiveCompleted) {
}

void UMissionTaskBase::Cleanup() {
}


