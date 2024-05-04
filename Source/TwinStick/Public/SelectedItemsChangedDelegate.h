#pragma once
#include "CoreMinimal.h"
#include "StrategyInventoryItemData.h"
#include "SelectedItemsChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSelectedItemsChanged, const TArray<FStrategyInventoryItemData>&, Items);

