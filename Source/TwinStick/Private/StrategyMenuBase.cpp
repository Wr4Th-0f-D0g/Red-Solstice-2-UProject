#include "StrategyMenuBase.h"

UStrategyMenuBase::UStrategyMenuBase() {
    this->ShouldResetGamepadFocus = true;
}



void UStrategyMenuBase::HandleStrategyViewChangedNative(const FStrategyViewConfiguration& CurrentView, const FStrategyViewConfiguration& PreviousView) {
}

UWidget* UStrategyMenuBase::GetMenuDesiredFocusTarget() const {
    return NULL;
}

FEventReply UStrategyMenuBase::CallOnKeyDownForWidget_Implementation(FGeometry MyGeometry, FKeyEvent InKeyEvent) {
    return FEventReply{};
}

void UStrategyMenuBase::AddSubWidget(UUserWidget* UserWidget) {
}


