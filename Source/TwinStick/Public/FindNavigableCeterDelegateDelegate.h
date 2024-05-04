#pragma once
#include "CoreMinimal.h"
#include "FindNavigableCeterDelegateDelegate.generated.h"

class AMeshSystemCenterBase;
class UVehiclePathGenerator;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFindNavigableCeterDelegate, const AMeshSystemCenterBase*, FoundCenter, UVehiclePathGenerator*, UsedGenerator);

