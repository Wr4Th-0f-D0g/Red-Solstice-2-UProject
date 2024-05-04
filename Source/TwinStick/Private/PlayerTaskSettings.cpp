#include "PlayerTaskSettings.h"

FPlayerTaskSettings::FPlayerTaskSettings() {
    this->UsesPrimaryMissions = false;
    this->UsesInfestation = false;
    this->UsesDifficulty = false;
    this->UsesHordeArrival = false;
    this->UsesMap = false;
    this->UsesMarineClass = false;
    this->UsesTask = false;
    this->TaskPrimaryMissionCount = 0;
    this->TaskInfestationLevel = 0;
    this->TaskDifficulty = EDifficulty::None;
    this->TaskHordeArrival = EHordeArrivalTime::Immediate;
    this->TaskHeroClass = ESolsticeHeroClass::ESHC_Invalid;
}

