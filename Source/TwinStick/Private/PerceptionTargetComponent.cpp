#include "PerceptionTargetComponent.h"

UPerceptionTargetComponent::UPerceptionTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumberAttackTokens = 4;
    this->NumberSpawnTokens = 2;
    this->NumberSpecialTokens = 2;
    this->NumberDogAttackTokens = 1;
    this->NumberCreeperTokens = 1;
    this->AggroGroup = EAggroGroup::EAG_Marine;
    this->bAutoRegister = true;
    this->AIDirector = NULL;
}


