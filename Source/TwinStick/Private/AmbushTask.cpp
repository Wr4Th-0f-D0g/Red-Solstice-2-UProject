#include "AmbushTask.h"

UAmbushTask::UAmbushTask() {
    this->CachedWaveAdjustment = 0;
    this->CachedThreatLevel = EEnemyThreatLevel::VeryLow;
    this->CachedAdditionalPoints = 0.00f;
}

UAmbushTask* UAmbushTask::StartAmbushDeployment(UObject* WorldContextObject, FMissionLocation Location, int32 WaveAdjustment, float AdditionalPoints, EEnemyThreatLevel ThreatLevel, FGameplayTagContainer SpawnTagsForEnemyGenerator, int32 MaxAmountToSpawn, float TimeBetweenSpawns, bool bIgnoreClosest) {
    return NULL;
}

UAmbushTask* UAmbushTask::StartAmbush(UObject* WorldContextObject, FMissionLocation Location, TArray<FEnemiesAmbushRow> Enemies, float TimeBetweenSpawns, bool bIgnoreClosest) {
    return NULL;
}


