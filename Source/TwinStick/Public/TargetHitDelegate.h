#pragma once
#include "CoreMinimal.h"
#include "Damage.h"
#include "TargetHitDelegate.generated.h"

class AActor;
class ASolsticeWeaponBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTargetHit, AActor*, Target, ASolsticeWeaponBase*, Weapon, const FDamage&, Damage);

