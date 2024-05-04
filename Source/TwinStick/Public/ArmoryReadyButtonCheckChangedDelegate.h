#pragma once
#include "CoreMinimal.h"
#include "ArmoryReadyButtonCheckChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArmoryReadyButtonCheckChanged, bool, bChecked);

