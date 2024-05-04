#pragma once
#include "CoreMinimal.h"
#include "EStrategyInteractionState.h"
#include "StrategyMapInteractionChangedDelegate.generated.h"

class AStrategyMapActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStrategyMapInteractionChanged, AStrategyMapActor*, MapActor, EStrategyInteractionState, InteractionState);

