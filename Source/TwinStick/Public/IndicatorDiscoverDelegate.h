#pragma once
#include "CoreMinimal.h"
#include "EIndicatorType.h"
#include "IndicatorDiscoverDelegate.generated.h"

class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIndicatorDiscover, AController*, Controller, EIndicatorType, IndicatorType);

