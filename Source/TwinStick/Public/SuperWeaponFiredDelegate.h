#pragma once
#include "CoreMinimal.h"
#include "SuperWeaponFiredDelegate.generated.h"

class ARegion;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSuperWeaponFired, ARegion*, TargetRegion);

