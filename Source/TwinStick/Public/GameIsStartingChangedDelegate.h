#pragma once
#include "CoreMinimal.h"
#include "GameIsStartingChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameIsStartingChanged, bool, NewStarting);

