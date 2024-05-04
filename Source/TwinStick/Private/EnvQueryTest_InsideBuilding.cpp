#include "EnvQueryTest_InsideBuilding.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_InsideBuilding::UEnvQueryTest_InsideBuilding() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->TargetActor = UEnvQueryContext_Querier::StaticClass();
}


