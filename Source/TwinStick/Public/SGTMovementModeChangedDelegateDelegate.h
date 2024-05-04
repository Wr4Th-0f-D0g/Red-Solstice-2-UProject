#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SGTMovementModeChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSGTMovementModeChangedDelegate, TEnumAsByte<EMovementMode>, NewMovementMode);

