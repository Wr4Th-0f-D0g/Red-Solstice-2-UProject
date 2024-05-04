#include "SpawnSystemDeploymentWave.h"

FSpawnSystemDeploymentWave::FSpawnSystemDeploymentWave() {
    this->WaveSpawningType = EWaveSpawningType::EWST_NoChange;
    this->ConstantWaveSpawnFrequency = 0;
    this->NextWaveTriggerTime = 0;
    this->NextWaveMonsterCount = 0;
    this->bIgnoreNextWaveMonsterCount = false;
    this->bCanWaveAdvanceWithTrigger = false;
}

