#pragma once
#include "CoreMinimal.h"
#include "ESolsticeControlMode.h"
#include "ControlModeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControlModeChanged, ESolsticeControlMode, NewControlMode);

