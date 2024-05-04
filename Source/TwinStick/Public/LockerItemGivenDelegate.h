#pragma once
#include "CoreMinimal.h"
#include "LockerItemGivenDelegate.generated.h"

class AInventoryPickup;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLockerItemGiven, AInventoryPickup*, Pickup);

