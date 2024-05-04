#pragma once
#include "CoreMinimal.h"
#include "ETimeTickSpeed.h"
#include "TimeTickSpeedChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTimeTickSpeedChanged, ETimeTickSpeed, TickSpeed);

