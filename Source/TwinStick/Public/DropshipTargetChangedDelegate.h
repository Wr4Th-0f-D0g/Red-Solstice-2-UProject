#pragma once
#include "CoreMinimal.h"
#include "DropshipTargetChangedDelegate.generated.h"

class AStrategyMapActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDropshipTargetChanged, AStrategyMapActor*, OldTarget, AStrategyMapActor*, NewTarget);

