#include "MissionGenerationData.h"

FMissionGenerationData::FMissionGenerationData() {
    this->GameType = EStrategyMissionGameType::Invalid;
    this->MissionSeed = 0;
    this->AdditionalData = 0;
    this->bVehiclesAllowed = false;
}

