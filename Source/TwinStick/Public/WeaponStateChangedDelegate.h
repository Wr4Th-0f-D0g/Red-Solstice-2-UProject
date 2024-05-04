#pragma once
#include "CoreMinimal.h"
#include "EFiringState.h"
#include "WeaponStateChangedDelegate.generated.h"

class ASolsticeWeaponBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FWeaponStateChanged, ASolsticeWeaponBase*, Weapon, EFiringState, OldFiringState, EFiringState, NewFiringState);

