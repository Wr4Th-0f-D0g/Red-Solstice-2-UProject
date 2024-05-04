#pragma once
#include "CoreMinimal.h"
#include "GlobalInfestationChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGlobalInfestationChanged, float, PreviousInfestation, float, NewInfestation);

