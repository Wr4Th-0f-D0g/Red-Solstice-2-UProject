#pragma once
#include "CoreMinimal.h"
#include "StrategyInventoryItemData.h"
#include "StragemBuffsChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStragemBuffsChanged, const TArray<FStrategyInventoryItemData>, StrategemBuffs);

