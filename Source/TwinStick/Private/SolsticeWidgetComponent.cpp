#include "SolsticeWidgetComponent.h"
#include "Components/WidgetComponent.h"

USolsticeWidgetComponent::USolsticeWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Space = EWidgetSpace::Screen;
    this->bIsWidgetDisplayed = false;
    this->bDisplayWigetText = false;
    this->TextDisplayDistance = 0.00f;
    this->bDisplayTextInRange = false;
    this->PrevVisible = ESlateVisibility::HitTestInvisible;
}

void USolsticeWidgetComponent::UpdateWidget() {
}

void USolsticeWidgetComponent::SetWidgetVisibility(bool bNewVisible) {
}

void USolsticeWidgetComponent::SetWidgetText(const FText& Text) {
}

void USolsticeWidgetComponent::SetStatusText(const FText& NewStatusText) {
}

void USolsticeWidgetComponent::SetAllowedTypeText(const FText& Text) {
}

void USolsticeWidgetComponent::HandleVisibilityToggled(bool bNewHidden, bool bHideMinimap) {
}


