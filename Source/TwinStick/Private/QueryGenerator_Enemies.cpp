#include "QueryGenerator_Enemies.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UQueryGenerator_Enemies::UQueryGenerator_Enemies() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
}


