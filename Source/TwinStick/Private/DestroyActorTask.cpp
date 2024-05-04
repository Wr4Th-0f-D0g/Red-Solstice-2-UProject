#include "DestroyActorTask.h"

UDestroyActorTask::UDestroyActorTask() {
    this->RadiusMinimapActor = NULL;
    this->bCachedUsedRadius = false;
}

UDestroyActorTask* UDestroyActorTask::StartDestroyActorTask(UObject* WorldContextObject, TArray<AActor*> Targets, FText MissionName, FGameplayTagContainer TagsToApply, bool bUseRadius, bool bNoMinimapMarkers, bool bCanEverExpire, float ReachLocationSeconds) {
    return NULL;
}

void UDestroyActorTask::HandleTargetKilled(AActor* Target, APawn* PawnInstigator) {
}

void UDestroyActorTask::HandleActorEndedPlay(AActor* Target, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


