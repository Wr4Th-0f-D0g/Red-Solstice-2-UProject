#pragma once
#include "CoreMinimal.h"
#include "ArmoryHostButtonCheckChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArmoryHostButtonCheckChanged, bool, bChecked);

