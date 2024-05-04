#include "IndicatorControllerComponent.h"

UIndicatorControllerComponent::UIndicatorControllerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Controller = NULL;
}

void UIndicatorControllerComponent::UnregisterIndicatorSource(AActor* Actor, EIndicatorType IndicatorType) {
}

void UIndicatorControllerComponent::RegisterTurretIndicatorSource(AActor* Actor) {
}

void UIndicatorControllerComponent::RegisterInteractableIndicatorSource(AActor* Actor) {
}

void UIndicatorControllerComponent::RegisterIndicatorSource(AActor* Actor, EIndicatorType IndicatorType) {
}

void UIndicatorControllerComponent::RegisterHealthBarIndicatorSource(AActor* Actor) {
}

void UIndicatorControllerComponent::RegisterCharacterNameIndicatorSource(AActor* Actor) {
}



