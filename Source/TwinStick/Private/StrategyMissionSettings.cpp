#include "StrategyMissionSettings.h"

FStrategyMissionSettings::FStrategyMissionSettings() {
    this->SecondaryMissionFrequency = ESecondaryMissionFrequency::Few;
    this->AirSupportLevel = EAirSupportLevel::None;
    this->HordeArrivalTime = EHordeArrivalTime::Immediate;
    this->ArtillerySupportLevel = EArtillerySupportLevel::None;
    this->GameType = EStrategyMissionGameType::Invalid;
    this->GenerationType = ESkirmishGenerationType::DeploymentTable;
    this->InfestationLevel = 0;
}

