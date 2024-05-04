#include "EnvQueryTest_Angle.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_Angle::UEnvQueryTest_Angle() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->TargetActor = UEnvQueryContext_Querier::StaticClass();
}


