#pragma once
#include "CoreMinimal.h"
#include "WorkbenchWeaponChangedDelegate.generated.h"

class ASolsticeWeaponBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWorkbenchWeaponChanged, ASolsticeWeaponBase*, WorlbenchWeapon);

