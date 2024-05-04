#pragma once
#include "CoreMinimal.h"
#include "OverwatchStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOverwatchStatusChanged, bool, bEnabled);

