#include "BTService_GenericMonsterService.h"

UBTService_GenericMonsterService::UBTService_GenericMonsterService() {
    this->NodeName = TEXT("Monster Generic Service");
    this->bSetGoalActor = true;
    this->bCheckAnyoneAlive = true;
    this->bCheckTargetInsideBuilding = true;
    this->bCheckMonsterInsideBuilding = true;
    this->bSetAttackingKey = true;
    this->MonsterCharacter = NULL;
    this->MonsterController = NULL;
    this->BurrowingComponent = NULL;
}


