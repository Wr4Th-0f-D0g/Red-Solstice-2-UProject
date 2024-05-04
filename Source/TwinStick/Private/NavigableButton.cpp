#include "NavigableButton.h"

UNavigableButton::UNavigableButton() {
    this->bIsTooltipNavigable = false;
    this->bIsMenuNavigable = true;
    this->LinkedWidget = NULL;
}

void UNavigableButton::UnselectWidget_Implementation() {
}

void UNavigableButton::SetStyleToPressed_Implementation() {
}

void UNavigableButton::SetStyleToNormal_Implementation() {
}

void UNavigableButton::SetStyleToHovered_Implementation() {
}

void UNavigableButton::SetStyleToDisabled_Implementation() {
}

void UNavigableButton::SelectWidget_Implementation() {
}

void UNavigableButton::RegisterWithRootInterface_Implementation() {
}

void UNavigableButton::RegisterNavigableWidget_Implementation(UWidget* Widget, bool bToolTipWidget, bool bNavigableWidget) {
}

void UNavigableButton::NavigateIntoLinkedWidget() {
}

bool UNavigableButton::IsRootWidget_Implementation() {
    return false;
}

UWidget* UNavigableButton::GetRootWidget_Implementation() {
    return NULL;
}

void UNavigableButton::Confirm_Implementation() {
}

void UNavigableButton::Back_Implementation() {
}


