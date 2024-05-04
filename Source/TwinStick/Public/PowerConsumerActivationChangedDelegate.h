#pragma once
#include "CoreMinimal.h"
#include "PowerConsumerActivationChangedDelegate.generated.h"

class APowerConsumer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPowerConsumerActivationChanged, APowerConsumer*, Consumer, bool, bActivated);

