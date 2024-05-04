#pragma once
#include "CoreMinimal.h"
#include "MarsTime.h"
#include "EndGameTimeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndGameTimeChanged, const FMarsTime&, EndTime);

