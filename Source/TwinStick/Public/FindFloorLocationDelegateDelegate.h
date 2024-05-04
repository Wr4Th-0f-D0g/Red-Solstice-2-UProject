#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FindFloorLocationDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFindFloorLocationDelegate, bool, locationFound, FVector, Location, int32, Payload);

