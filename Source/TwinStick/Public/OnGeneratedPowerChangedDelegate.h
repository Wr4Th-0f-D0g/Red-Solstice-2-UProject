#pragma once
#include "CoreMinimal.h"
#include "OnGeneratedPowerChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGeneratedPowerChanged, int32, GeneratedPower);

