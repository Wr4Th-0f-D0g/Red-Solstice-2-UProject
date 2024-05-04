#pragma once
#include "CoreMinimal.h"
#include "EHQStatus.h"
#include "HQ_StatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHQ_StatusChanged, EHQStatus, NewStatus);

