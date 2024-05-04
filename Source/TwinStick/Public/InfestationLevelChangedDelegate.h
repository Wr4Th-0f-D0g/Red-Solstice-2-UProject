#pragma once
#include "CoreMinimal.h"
#include "InfestationLevelChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInfestationLevelChanged, float, Value);

