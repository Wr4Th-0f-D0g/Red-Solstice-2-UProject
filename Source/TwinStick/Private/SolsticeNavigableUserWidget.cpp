#include "SolsticeNavigableUserWidget.h"

USolsticeNavigableUserWidget::USolsticeNavigableUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsTooltipNavigable = false;
    this->bIsMenuNavigable = true;
    this->bIsRootWidget = true;
    this->DirectionMagnitudeThreshold = 0.30f;
    this->IsInMenuMovementCooldown = false;
}

void USolsticeNavigableUserWidget::UnselectWidget_Implementation() {
}

void USolsticeNavigableUserWidget::SetCurrentSelectedWidget_Implementation(UWidget* NextSelectedWidget) {
}

void USolsticeNavigableUserWidget::SetBackWidget(UWidget* BackWidget) {
}

void USolsticeNavigableUserWidget::SelectWidget_Implementation() {
}

void USolsticeNavigableUserWidget::RegisterWithRootInterface_Implementation() {
}

void USolsticeNavigableUserWidget::RegisterNavigableWidget_Implementation(UWidget* Widget, bool bToolTipWidget, bool bNavigableWidget) {
}

UWidget* USolsticeNavigableUserWidget::NavigateUp_Implementation(float HalfConeAngle, float CooldownTime, bool bCanCycle) {
    return NULL;
}

UWidget* USolsticeNavigableUserWidget::NavigateToNextElement_Implementation(float XInput, float YInput, float HalfConeAngle, float CooldownTime, bool bCanCycle) {
    return NULL;
}

UWidget* USolsticeNavigableUserWidget::NavigateRight_Implementation(float HalfConeAngle, float CooldownTime, bool bCanCycle) {
    return NULL;
}

UWidget* USolsticeNavigableUserWidget::NavigateLeft_Implementation(float HalfConeAngle, float CooldownTime, bool bCanCycle) {
    return NULL;
}

UWidget* USolsticeNavigableUserWidget::NavigateDown_Implementation(float HalfConeAngle, float CooldownTime, bool bCanCycle) {
    return NULL;
}

UWidget* USolsticeNavigableUserWidget::NavigateCardinalDirection_Implementation(float XInput, float YInput, float HalfConeAngle, float CooldownTime, bool bCanCycle) {
    return NULL;
}

bool USolsticeNavigableUserWidget::IsTooltipWidget_Implementation() {
    return false;
}

bool USolsticeNavigableUserWidget::IsRootWidget_Implementation() {
    return false;
}

TArray<UWidget*> USolsticeNavigableUserWidget::GetTooltipElements() {
    return TArray<UWidget*>();
}

UWidget* USolsticeNavigableUserWidget::GetRootWidget_Implementation() {
    return NULL;
}

TArray<UWidget*> USolsticeNavigableUserWidget::GetNavigableElements() {
    return TArray<UWidget*>();
}

UWidget* USolsticeNavigableUserWidget::GetCurrentSelectedWidget_Implementation() {
    return NULL;
}

void USolsticeNavigableUserWidget::Confirm_Implementation() {
}

bool USolsticeNavigableUserWidget::CanNavigateMenu_Implementation() {
    return false;
}

void USolsticeNavigableUserWidget::Back_Implementation() {
}


