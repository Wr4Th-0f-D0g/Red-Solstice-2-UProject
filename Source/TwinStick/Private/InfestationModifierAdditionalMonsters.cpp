#include "InfestationModifierAdditionalMonsters.h"

FInfestationModifierAdditionalMonsters::FInfestationModifierAdditionalMonsters() {
    this->WaveNumber = 0;
    this->Count = 0;
    this->bCountIsRandomPick = false;
    this->SpawnType = EInfestationSpawnType::WaveNumber;
}

