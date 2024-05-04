#include "AggroComponent.h"

UAggroComponent::UAggroComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverTickAggro = false;
    this->MyController = NULL;
}

void UAggroComponent::SetupPerceivedEnemiesQuery(ASolsticeCharacterBase* Querier) {
}

void UAggroComponent::SetupAllEnemiesQuery(ASolsticeCharacterBase* Querier) {
}

void UAggroComponent::RunPerceptionEQSQuery() {
}


