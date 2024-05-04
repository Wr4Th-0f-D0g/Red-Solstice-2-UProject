#include "DroppodAbilityActorBase.h"

ADroppodAbilityActorBase::ADroppodAbilityActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSpawnItem = false;
    this->SpawningHero = NULL;
    this->Mission = NULL;
    this->GroupIndex = 0;
    this->bHiddenFromMonsters = false;
}



