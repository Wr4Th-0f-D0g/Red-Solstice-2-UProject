#pragma once
#include "CoreMinimal.h"
#include "OverwatchTargetChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOverwatchTargetChanged, AActor*, OverwatchTarget);

