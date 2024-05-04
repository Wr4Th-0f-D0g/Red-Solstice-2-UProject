#include "PreviewAttributeComponent.h"

UPreviewAttributeComponent::UPreviewAttributeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreviewBuff = NULL;
    this->PreviewModulePowerUse = 0.00f;
    this->PreviewModulePowerProvided = 0.00f;
}

void UPreviewAttributeComponent::SetAttributeComponent(UAttributeComponent* InAttributeComp) {
}

void UPreviewAttributeComponent::HandleBuffsChanged(USolsticeBuffBase* ChangedBuff, EBuffChangedOperation Operation) {
}

void UPreviewAttributeComponent::HandleAttributesReInitialized() {
}

void UPreviewAttributeComponent::HandleAttributePreviewChanged(const FModuleInfo& PreviewModule, bool IsHovered, bool IsDragged) {
}


