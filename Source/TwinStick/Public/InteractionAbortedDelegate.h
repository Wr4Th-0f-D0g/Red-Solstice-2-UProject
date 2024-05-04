#pragma once
#include "CoreMinimal.h"
#include "InteractionAbortedDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionAborted, APawn*, Instigator);

