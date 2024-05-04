#pragma once
#include "CoreMinimal.h"
#include "StrategyResourceChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStrategyResourceChanged, int32, OldResources, int32, NewResources);

