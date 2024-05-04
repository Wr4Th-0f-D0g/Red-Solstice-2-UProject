#pragma once
#include "CoreMinimal.h"
#include "LocationsMappedDelegate.generated.h"

class ULocationManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLocationsMapped, ULocationManager*, Sender);

