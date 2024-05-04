#pragma once
#include "CoreMinimal.h"
#include "EStormSeverity.h"
#include "StormLevelChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStormLevelChanged, EStormSeverity, Severity);

