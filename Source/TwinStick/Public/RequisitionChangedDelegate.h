#pragma once
#include "CoreMinimal.h"
#include "RequisitionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRequisitionChanged, int32, Requisition);

