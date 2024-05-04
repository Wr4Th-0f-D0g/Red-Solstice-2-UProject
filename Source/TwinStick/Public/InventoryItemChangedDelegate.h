#pragma once
#include "CoreMinimal.h"
#include "InventoryItemChangedDelegate.generated.h"

class UItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInventoryItemChanged, int32, SlotNumber, UItem*, NewItem);

