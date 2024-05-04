#pragma once
#include "CoreMinimal.h"
#include "InteractionStartedDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionStarted, APawn*, Instigator);

