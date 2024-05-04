#include "CinematicEventComponent.h"

UCinematicEventComponent::UCinematicEventComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentEventIndex = 0;
    this->CurrentEvent = NULL;
}

void UCinematicEventComponent::NextEvent() {
}


