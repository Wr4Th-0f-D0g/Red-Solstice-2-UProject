#pragma once
#include "CoreMinimal.h"
#include "TriggerFiredStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTriggerFiredStateChanged, bool, aIsOn);

