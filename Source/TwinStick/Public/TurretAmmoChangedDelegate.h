#pragma once
#include "CoreMinimal.h"
#include "TurretAmmoChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTurretAmmoChanged, int32, CurrentAmmo, int32, MaxAmmo);

