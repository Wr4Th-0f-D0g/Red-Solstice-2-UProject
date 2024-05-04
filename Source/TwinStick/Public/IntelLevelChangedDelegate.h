#pragma once
#include "CoreMinimal.h"
#include "IntelLevelChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIntelLevelChanged, float, Value);

