#pragma once
#include "CoreMinimal.h"
#include "OverwatchTargetSelectedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOverwatchTargetSelected, AActor*, Target, AActor*, PreviousTarget);

