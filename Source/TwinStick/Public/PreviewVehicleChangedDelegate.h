#pragma once
#include "CoreMinimal.h"
#include "PreviewVehicleChangedDelegate.generated.h"

class ASolsticeDrivableVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPreviewVehicleChanged, ASolsticeDrivableVehicle*, NewPreviewVehicle);

