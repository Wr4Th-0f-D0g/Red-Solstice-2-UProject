#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InventoryChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInventoryChanged, const FGameplayTag&, ItemTag, int32, Amount);

