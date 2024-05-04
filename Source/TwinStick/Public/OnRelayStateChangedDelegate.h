#pragma once
#include "CoreMinimal.h"
#include "EPowerRelayState.h"
#include "OnRelayStateChangedDelegate.generated.h"

class APowerRelay;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRelayStateChanged, APowerRelay*, Relay, EPowerRelayState, Status);

