#include "EngineeringData.h"

UEngineeringData::UEngineeringData() {
    this->EngineeringItemTable = NULL;
}

void UEngineeringData::PopulateEngineeringItemTable() {
}

FGameplayTagContainer UEngineeringData::GetItemTagsForInventoryDisplay() const {
    return FGameplayTagContainer{};
}

FStrategyInventoryItemData UEngineeringData::GetItemDataFor(const FGameplayTag& InTag) const {
    return FStrategyInventoryItemData{};
}

TArray<FStrategyInventoryItemData> UEngineeringData::GetAllEngineeringItems() const {
    return TArray<FStrategyInventoryItemData>();
}


