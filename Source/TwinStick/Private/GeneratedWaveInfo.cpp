#include "GeneratedWaveInfo.h"

FGeneratedWaveInfo::FGeneratedWaveInfo() {
    this->SeedUsed = 0;
    this->TotalWaves = 0;
    this->TotalBasePoints = 0;
    this->CurrentDay = 0;
    this->InfestationLevel = 0;
    this->Difficulty = EDifficulty::None;
    this->InfestationModifierMultiplier = 0.00f;
    this->HighestWavePointValue = 0;
    this->PlayerModifierMultiplier = 0.00f;
    this->NumPlayers = 0;
    this->bSkirmish = false;
    this->SkirmishGenType = ESkirmishGenerationType::DeploymentTable;
    this->WaveToStart = 0;
    this->bWaveFiller = false;
    this->NumVehicles = 0;
}

