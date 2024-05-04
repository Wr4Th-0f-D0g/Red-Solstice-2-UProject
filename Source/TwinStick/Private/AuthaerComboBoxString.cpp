#include "AuthaerComboBoxString.h"

UAuthaerComboBoxString::UAuthaerComboBoxString() {
    this->ComboBoxStyleClass = NULL;
    this->MaxListHeight = 450.00f;
    this->HasDownArrow = true;
    this->EnableGamepadNavigationMode = true;
    this->bIsFocusable = true;
}

void UAuthaerComboBoxString::SetSelectedOption(const FString& Option) {
}

void UAuthaerComboBoxString::SetSelectedIndex(const int32 Index) {
}

bool UAuthaerComboBoxString::RemoveOption(const FString& Option) {
    return false;
}

void UAuthaerComboBoxString::RefreshOptions() {
}

bool UAuthaerComboBoxString::IsOpen() const {
    return false;
}

FString UAuthaerComboBoxString::GetSelectedOption() const {
    return TEXT("");
}

int32 UAuthaerComboBoxString::GetSelectedIndex() const {
    return 0;
}

int32 UAuthaerComboBoxString::GetOptionCount() const {
    return 0;
}

FString UAuthaerComboBoxString::GetOptionAtIndex(int32 Index) const {
    return TEXT("");
}

int32 UAuthaerComboBoxString::FindOptionIndex(const FString& Option) const {
    return 0;
}

void UAuthaerComboBoxString::ClearSelection() {
}

void UAuthaerComboBoxString::ClearOptions() {
}

void UAuthaerComboBoxString::AddOption(const FString& Option) {
}


