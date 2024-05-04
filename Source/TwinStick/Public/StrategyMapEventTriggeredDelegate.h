#pragma once
#include "CoreMinimal.h"
#include "StrategyMapEventTriggeredDelegate.generated.h"

class UStrategyMapEventBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStrategyMapEventTriggered, UStrategyMapEventBase*, MapEvent);

