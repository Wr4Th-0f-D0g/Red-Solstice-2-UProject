#pragma once
#include "CoreMinimal.h"
#include "EHordeArrivalTime.h"
#include "HordeArrivalTimeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHordeArrivalTimeChanged, EHordeArrivalTime, HordeArrival);

