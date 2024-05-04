#pragma once
#include "CoreMinimal.h"
#include "HideObjectiveArrowDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHideObjectiveArrow, bool, bHideArrow);

