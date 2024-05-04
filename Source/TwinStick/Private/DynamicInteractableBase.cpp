#include "DynamicInteractableBase.h"

ADynamicInteractableBase::ADynamicInteractableBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(2);
    this->bShouldRegisterWithNetworkManager = true;
    this->FOWHideComponent = NULL;
    this->bRegisterSignificance = false;
    this->bIsHovered = false;
    this->InteractionWidgetClass = NULL;
    this->InteractableComponent = NULL;
    this->InteractionStartRange = 100.00f;
}

void ADynamicInteractableBase::WidgetDiscovery(AController* Controller, EIndicatorType IndicatorType) {
}

float ADynamicInteractableBase::K2_GetSignificance() const {
    return 0.0f;
}

void ADynamicInteractableBase::HandleInteractionStarted(APawn* InteractionInstigator) {
}

void ADynamicInteractableBase::HandleInteractionCompleted(AActor* InteractableActor, const TArray<APawn*>& Instigators, bool bSuccess) {
}

void ADynamicInteractableBase::HandleInteractionAborted(APawn* InteractionInstigator) {
}


