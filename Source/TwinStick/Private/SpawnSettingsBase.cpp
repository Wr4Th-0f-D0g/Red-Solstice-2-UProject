#include "SpawnSettingsBase.h"
#include "Net/UnrealNetwork.h"

USpawnSettingsBase::USpawnSettingsBase() {
    this->bEnableTrashFiller = false;
    this->WaveRemainingTime = 0.00f;
    this->bStopSpawnsIfNoSpawnerFound = false;
    this->DelayBetweenSpawns = 0.10f;
    this->CurrentWave = 0;
    this->CurrentWaveTotalSpawn = 0;
    this->WaveTimeMultiplier = 1.00f;
    this->WaveStartTime = 0.00f;
}

void USpawnSettingsBase::SetWaveTimeMultiplier(float NewWaveTimeMultiplier) {
}

void USpawnSettingsBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USpawnSettingsBase, WaveRemainingTime);
    DOREPLIFETIME(USpawnSettingsBase, CurrentWave);
    DOREPLIFETIME(USpawnSettingsBase, CurrentWaveTotalSpawn);
    DOREPLIFETIME(USpawnSettingsBase, ConstantMonsterSpawns);
    DOREPLIFETIME(USpawnSettingsBase, WaveTimeMultiplier);
    DOREPLIFETIME(USpawnSettingsBase, WaveStartTime);
}


