#pragma once
#include "CoreMinimal.h"
#include "Damage.h"
#include "ActorKilledDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FActorKilled, AActor*, KilledActor, const FDamage&, DamageInfo, bool, bRecentlyDied);

