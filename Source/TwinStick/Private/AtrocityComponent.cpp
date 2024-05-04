#include "AtrocityComponent.h"

UAtrocityComponent::UAtrocityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RockActorClass = NULL;
    this->RockThrowMontage = NULL;
    this->RockDamage = 0.00f;
    this->RockLifeSpan = 0.00f;
}

void UAtrocityComponent::ThrowRock_Internal() {
}

void UAtrocityComponent::ThrowRock() {
}

void UAtrocityComponent::MovePosition_Internal() {
}

void UAtrocityComponent::MovePosition() {
}

void UAtrocityComponent::MaterializeRock() {
}

void UAtrocityComponent::DropRock() {
}


