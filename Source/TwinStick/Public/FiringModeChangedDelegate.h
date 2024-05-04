#pragma once
#include "CoreMinimal.h"
#include "FiringMode.h"
#include "FiringModeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFiringModeChanged, FFiringMode, FiringMode);

