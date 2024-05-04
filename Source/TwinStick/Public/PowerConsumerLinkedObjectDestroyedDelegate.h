#pragma once
#include "CoreMinimal.h"
#include "PowerConsumerLinkedObjectDestroyedDelegate.generated.h"

class AActor;
class APowerConsumer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPowerConsumerLinkedObjectDestroyed, APowerConsumer*, Consumer, AActor*, LinkedObject);

