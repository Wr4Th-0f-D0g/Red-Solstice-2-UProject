#pragma once
#include "CoreMinimal.h"
#include "PrimaryAmmoAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPrimaryAmmoAdded, int32, Clips);

