#pragma once
#include "CoreMinimal.h"
#include "ExplosiveDetonatedDelegate.generated.h"

class AExplosiveActorBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FExplosiveDetonated, AExplosiveActorBase*, Explosive);

