#include "TauntDetails.h"

FTauntDetails::FTauntDetails() {
    this->Radius = 0.00f;
    this->Priority = 0.00f;
    this->Duration = 0.00f;
    this->bTauntOnlyCharactersInGrabRadius = false;
    this->CharacterGrabRadius = 0.00f;
    this->TauntRingRadius = 0.00f;
    this->MinThreatLevel = EEnemyThreatLevel::VeryLow;
    this->ThreatLevel = EEnemyThreatLevel::VeryLow;
}

