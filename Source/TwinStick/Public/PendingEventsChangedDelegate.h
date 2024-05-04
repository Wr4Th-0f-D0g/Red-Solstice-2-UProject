#pragma once
#include "CoreMinimal.h"
#include "EPendingEventAction.h"
#include "PendingEventsChangedDelegate.generated.h"

class UStrategyMapEventBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPendingEventsChanged, const TArray<UStrategyMapEventBase*>&, PendingEvents, UStrategyMapEventBase*, ChangedEvent, EPendingEventAction, ChangeAction);

