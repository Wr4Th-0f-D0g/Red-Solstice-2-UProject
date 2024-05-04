#include "FOWHideComponent.h"

UFOWHideComponent::UFOWHideComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->VisibilityChangePerSecond = 1.00f;
    this->AppliedVisibilityPercentage = 0.10f;
    this->MinVisibilityBeforeDisableRender = 1.00f;
    this->bCacheComponents = false;
    this->bDoMaterialUpdates = true;
    this->FOWManager = NULL;
    this->MeshComponentForLocation = NULL;
}

void UFOWHideComponent::ForceUpdateVisibility() {
}


