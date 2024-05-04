#pragma once
#include "CoreMinimal.h"
#include "Damage.h"
#include "OnEggDestroyedDelegate.generated.h"

class ADestructibleActorBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEggDestroyed, ADestructibleActorBase*, DestroyedEgg, const FDamage&, DamageInfo);

