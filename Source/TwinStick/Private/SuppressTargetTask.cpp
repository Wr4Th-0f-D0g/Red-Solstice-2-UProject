#include "SuppressTargetTask.h"
#include "Templates/SubclassOf.h"

USuppressTargetTask::USuppressTargetTask() {
    this->ActorClass = NULL;
    this->Target = NULL;
    this->TargetMinimapActor = NULL;
    this->BuffClass = NULL;
    this->bApplyBuffOnSuppression = false;
    this->bApplyBuffOnDeath = false;
}

USuppressTargetTask* USuppressTargetTask::StartSuppressTargetTask(UObject* WorldContextObject, FText MissionName, TSubclassOf<AActor> NewActorClass, FGameplayTagContainer NewTargetTags, TSubclassOf<USolsticeBuffBase> NewBuffClass, bool NewBApplyBuffOnSuppression, bool NewBApplyBuffOnDeath) {
    return NULL;
}

void USuppressTargetTask::HandleTargetSuppressed(bool bNewSuppressed) {
}

void USuppressTargetTask::HandleTargetKilled(AActor* TargetA, APawn* PawnInstigator) {
}


