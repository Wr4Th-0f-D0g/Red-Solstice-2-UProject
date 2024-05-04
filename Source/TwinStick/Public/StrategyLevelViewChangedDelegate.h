#pragma once
#include "CoreMinimal.h"
#include "EStrategyLevelCurrentView.h"
#include "StrategyLevelViewChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStrategyLevelViewChanged, EStrategyLevelCurrentView, NewSelectionMode);

