#include "KillEnemiesTask.h"
#include "Templates/SubclassOf.h"

UKillEnemiesTask::UKillEnemiesTask() {
    this->NumberRequired = 0;
    this->NumberKilled = 0;
    this->EnemyFilter = EKillEnemiesFilter::All;
    this->TrackerClass = NULL;
}

UKillEnemiesTask* UKillEnemiesTask::StartKillEnemiesTask(UObject* WorldContextObject, int32 NumberOfEnemies, EKillEnemiesFilter Filter, FGameplayTagContainer EnemyFilterTags, TSubclassOf<UMissionObjectiveTracker> ObjectiveTrackerLClass) {
    return NULL;
}

void UKillEnemiesTask::HandlePawnKilled(ASolsticeCharacterBase* KilledPawn, const FGameplayTagContainer& PawnTags, const FDamage& DamageInfo) {
}


