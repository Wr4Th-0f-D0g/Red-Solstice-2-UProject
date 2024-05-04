#include "AuthaerFNameSearchBox.h"

UAuthaerFNameSearchBox::UAuthaerFNameSearchBox() : UUserWidget(FObjectInitializer::Get()) {
    this->ClearButton = NULL;
    this->SelectionBox = NULL;
    this->SearchBox = NULL;
}

void UAuthaerFNameSearchBox::SetListNames(const TArray<FName>& InNames) {
}

void UAuthaerFNameSearchBox::SetFromDatatable(UDataTable* InTable) {
}

void UAuthaerFNameSearchBox::HandleSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void UAuthaerFNameSearchBox::HandleSearchTextChanged(const FText& Text) {
}

FString UAuthaerFNameSearchBox::GetSelectedOption() const {
    return TEXT("");
}

void UAuthaerFNameSearchBox::ClearSearch() {
}

void UAuthaerFNameSearchBox::ClearAllListNames() {
}

void UAuthaerFNameSearchBox::AddListNames(const TArray<FName>& InNames) {
}

void UAuthaerFNameSearchBox::AddDatatable(UDataTable* InTable) {
}


