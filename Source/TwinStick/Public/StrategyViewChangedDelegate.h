#pragma once
#include "CoreMinimal.h"
#include "StrategyViewConfiguration.h"
#include "StrategyViewChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStrategyViewChanged, const FStrategyViewConfiguration&, CurrentView, const FStrategyViewConfiguration&, PreviousView);

