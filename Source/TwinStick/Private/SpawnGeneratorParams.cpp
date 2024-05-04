#include "SpawnGeneratorParams.h"

FSpawnGeneratorParams::FSpawnGeneratorParams() {
    this->Seed = 0;
    this->CurrentDay = 0;
    this->CurrentModifier = 0.00f;
    this->InfestationLevel = 0;
    this->Difficulty = EDifficulty::None;
    this->NumPlayers = 0;
    this->NumVehicles = 0;
    this->bSkirmish = false;
    this->SkirmishGenerationType = ESkirmishGenerationType::DeploymentTable;
}

