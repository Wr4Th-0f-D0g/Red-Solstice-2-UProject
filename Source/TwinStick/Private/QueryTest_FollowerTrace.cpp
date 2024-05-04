#include "QueryTest_FollowerTrace.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UQueryTest_FollowerTrace::UQueryTest_FollowerTrace() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Context = UEnvQueryContext_Querier::StaticClass();
}


