#pragma once
#include "CoreMinimal.h"
#include "Damage.h"
#include "ActorDamagedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FActorDamaged, AActor*, DamagedActor, const FDamage&, DamageInfo);

