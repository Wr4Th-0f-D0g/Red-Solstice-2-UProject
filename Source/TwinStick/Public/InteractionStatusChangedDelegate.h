#pragma once
#include "CoreMinimal.h"
#include "InteractionStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionStatusChanged, bool, InteractionStarted);

