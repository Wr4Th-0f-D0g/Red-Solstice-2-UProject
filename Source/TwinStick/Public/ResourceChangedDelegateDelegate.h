#pragma once
#include "CoreMinimal.h"
#include "ResourceChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FResourceChangedDelegate, int32, CurrentResources, int32, PreviousResources);

