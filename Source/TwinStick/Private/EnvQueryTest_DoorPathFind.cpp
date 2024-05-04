#include "EnvQueryTest_DoorPathFind.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_DoorPathFind::UEnvQueryTest_DoorPathFind() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->TestMode = EEnvDoorTestPathfinding::PathExist;
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->FilterClass = NULL;
}


