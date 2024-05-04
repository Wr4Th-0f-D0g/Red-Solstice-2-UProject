#pragma once
#include "CoreMinimal.h"
#include "OnHoverTargetChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHoverTargetChanged, AActor*, NewHoverTarget, AActor*, OldHoverTarget);

