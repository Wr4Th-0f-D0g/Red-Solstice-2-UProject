#include "OptionsSubsystem.h"

UOptionsSubsystem::UOptionsSubsystem() {
    this->OptionsWidget = NULL;
}

void UOptionsSubsystem::ShowOptionsMenu() {
}

bool UOptionsSubsystem::IsOptionsOpen() const {
    return false;
}

void UOptionsSubsystem::HideOptionsMenu() {
}

UUserWidget* UOptionsSubsystem::GetOptionsWidget() const {
    return NULL;
}


