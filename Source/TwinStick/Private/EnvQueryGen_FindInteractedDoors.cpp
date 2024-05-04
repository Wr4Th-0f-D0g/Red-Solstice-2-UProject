#include "EnvQueryGen_FindInteractedDoors.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UEnvQueryGen_FindInteractedDoors::UEnvQueryGen_FindInteractedDoors() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->Filter = NULL;
}


