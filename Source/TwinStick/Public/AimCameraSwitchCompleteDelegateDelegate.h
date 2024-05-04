#pragma once
#include "CoreMinimal.h"
#include "AimCameraSwitchCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAimCameraSwitchCompleteDelegate, bool, bIsAimingMode);

