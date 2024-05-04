#include "BaseUpgradeData.h"

UBaseUpgradeData::UBaseUpgradeData() {
}

FStrategyUpgradeTreeData UBaseUpgradeData::GetUpgradeTreeData(const FGameplayTag& InTag) const {
    return FStrategyUpgradeTreeData{};
}


