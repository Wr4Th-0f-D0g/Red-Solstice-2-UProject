#include "QueryGenerator_Taunts.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UQueryGenerator_Taunts::UQueryGenerator_Taunts() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
}


