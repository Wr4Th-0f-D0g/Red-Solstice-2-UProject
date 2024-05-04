#pragma once
#include "CoreMinimal.h"
#include "EIndicatorType.h"
#include "IndicatorAddRemoveDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIndicatorAddRemove, AActor*, Actor, EIndicatorType, IndicatorType);

