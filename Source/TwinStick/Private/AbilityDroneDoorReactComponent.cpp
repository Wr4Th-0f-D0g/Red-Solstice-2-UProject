#include "AbilityDroneDoorReactComponent.h"

UAbilityDroneDoorReactComponent::UAbilityDroneDoorReactComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->StartFadeDistance = 800.00f;
    this->EndFadeDistance = 300.00f;
    this->AppliedVisibilityPercentage = 0.10f;
}


