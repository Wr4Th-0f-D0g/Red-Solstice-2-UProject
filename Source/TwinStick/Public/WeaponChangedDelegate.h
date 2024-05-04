#pragma once
#include "CoreMinimal.h"
#include "WeaponChangedDelegate.generated.h"

class ASolsticeWeaponBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponChanged, ASolsticeWeaponBase*, NewWeapon, bool, bPrimary);

