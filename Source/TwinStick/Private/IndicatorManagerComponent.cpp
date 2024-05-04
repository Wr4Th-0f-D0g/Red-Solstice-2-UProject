#include "IndicatorManagerComponent.h"

UIndicatorManagerComponent::UIndicatorManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
}

void UIndicatorManagerComponent::RemoveIndicator(UIndicatorDescriptor* IndicatorDescriptor) {
}

void UIndicatorManagerComponent::AddIndicator(UIndicatorDescriptor* IndicatorDescriptor) {
}


