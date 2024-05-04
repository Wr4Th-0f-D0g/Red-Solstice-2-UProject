#include "InteractionWheelComponent.h"

UInteractionWheelComponent::UInteractionWheelComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Interactable = NULL;
}

void UInteractionWheelComponent::SetInteractable(AActor* OldInteractable, AActor* NewInteractable) {
}




