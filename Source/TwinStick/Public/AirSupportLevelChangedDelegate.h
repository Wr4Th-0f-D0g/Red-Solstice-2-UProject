#pragma once
#include "CoreMinimal.h"
#include "EAirSupportLevel.h"
#include "AirSupportLevelChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAirSupportLevelChanged, EAirSupportLevel, SupportLevel);

