#include "SolsticeSessionGameModeSettings.h"

FSolsticeSessionGameModeSettings::FSolsticeSessionGameModeSettings() {
    this->AirSupportLevel = EAirSupportLevel::None;
    this->Difficulty = EDifficulty::None;
    this->HordeArrivalTime = EHordeArrivalTime::Immediate;
    this->SecondaryMissionFrequency = ESecondaryMissionFrequency::Few;
    this->ArtilleryLevel = EArtillerySupportLevel::None;
    this->MatchType = EMatchType::Ranked;
    this->Corporation = ECorporation::Elysium;
    this->InfestationLevel = 0;
    this->GameVehicleLimit = 0;
    this->BotCount = 0;
    this->GameBotCount = 0;
    this->GameWaveCount = 0;
    this->GameTimeSeconds = 0;
    this->bNewJoinsDisabled = false;
    this->bGameStarted = false;
}

