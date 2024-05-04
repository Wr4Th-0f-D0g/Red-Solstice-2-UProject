#pragma once
#include "CoreMinimal.h"
#include "HunterDoorDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHunterDoorDelegate, bool, bOnDoor);

