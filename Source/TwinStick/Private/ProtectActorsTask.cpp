#include "ProtectActorsTask.h"

UProtectActorsTask::UProtectActorsTask() {
    this->bFinished = false;
    this->RadiusMinimapActor = NULL;
    this->bUseDuration = false;
    this->Duration = 0.00f;
    this->StartTime = 0.00f;
    this->bCheckCombinedRadius = false;
    this->ReachLocationTolerance = 0.00f;
}

UProtectActorsTask* UProtectActorsTask::StartProtectActorTask(UObject* WorldContextObject, const FProtectActorsOptions& Options, TArray<FProtectActorsActorInfo> Targets) {
    return NULL;
}

void UProtectActorsTask::HandleTargetKilled(AActor* Target, APawn* PawnInstigator) {
}


