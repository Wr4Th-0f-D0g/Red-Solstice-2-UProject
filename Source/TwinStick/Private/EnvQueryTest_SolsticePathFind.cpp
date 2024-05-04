#include "EnvQueryTest_SolsticePathFind.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_SolsticePathFind::UEnvQueryTest_SolsticePathFind() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->TestMode = ESolsticeEnvTestPathfinding::PathExist;
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->FilterClass = NULL;
    this->bUseFilterFromController = true;
    this->bIgnorePathFindIfBurrowed = true;
}


