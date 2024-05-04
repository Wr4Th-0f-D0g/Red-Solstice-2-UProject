#pragma once
#include "CoreMinimal.h"
#include "SecondaryAmmoAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSecondaryAmmoAdded, int32, Clips);

