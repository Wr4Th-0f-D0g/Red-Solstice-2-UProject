#include "EnvQueryTest_PawnsNearLoc.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_PawnsNearLoc::UEnvQueryTest_PawnsNearLoc() {
    this->TargetActor = UEnvQueryContext_Querier::StaticClass();
    this->PawnFilter = NULL;
}


