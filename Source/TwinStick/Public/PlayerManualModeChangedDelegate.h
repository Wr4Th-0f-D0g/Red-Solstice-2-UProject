#pragma once
#include "CoreMinimal.h"
#include "PlayerManualModeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerManualModeChanged, bool, bEnabled);

