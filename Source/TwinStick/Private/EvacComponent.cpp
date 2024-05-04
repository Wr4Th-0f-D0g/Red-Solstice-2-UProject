#include "EvacComponent.h"

UEvacComponent::UEvacComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwningCharacter = NULL;
    this->RopeDropMontage = NULL;
    this->EvacMontage = NULL;
    this->EvacDropshipMontage = NULL;
}


void UEvacComponent::SpawnShiva(FTransform SpawnTransform, float Delay) {
}



void UEvacComponent::ClientFinishEvac_Implementation() {
}

void UEvacComponent::CleanupAfterEvac_Implementation() {
}


