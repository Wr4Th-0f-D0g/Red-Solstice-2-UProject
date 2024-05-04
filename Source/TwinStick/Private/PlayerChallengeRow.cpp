#include "PlayerChallengeRow.h"

FPlayerChallengeRow::FPlayerChallengeRow() {
    this->MinimumDifficulty = EDifficulty::None;
    this->InfestationLevel = 0;
    this->HordeArrivalTime = EHordeArrivalTime::Immediate;
    this->ArtillerySupportLevel = EArtillerySupportLevel::None;
}

