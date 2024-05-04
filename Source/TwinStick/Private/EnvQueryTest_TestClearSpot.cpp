#include "EnvQueryTest_TestClearSpot.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_TestClearSpot::UEnvQueryTest_TestClearSpot() {
    this->TargetActor = UEnvQueryContext_Querier::StaticClass();
    this->FilterClass = NULL;
}


