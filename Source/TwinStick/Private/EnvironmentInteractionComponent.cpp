#include "EnvironmentInteractionComponent.h"

UEnvironmentInteractionComponent::UEnvironmentInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CallingInteractableComponent = NULL;
}

void UEnvironmentInteractionComponent::StartInteraction(APawn* InInstigator) {
}

void UEnvironmentInteractionComponent::CompleteInteraction(AActor* InInteractableActor, const TArray<APawn*>& InInstigators, bool InSuccess) {
}

void UEnvironmentInteractionComponent::AbortInteraction(APawn* InInstigator) {
}


