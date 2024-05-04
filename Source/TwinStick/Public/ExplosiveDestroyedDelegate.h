#pragma once
#include "CoreMinimal.h"
#include "ExplosiveDestroyedDelegate.generated.h"

class AExplosiveActorBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FExplosiveDestroyed, AExplosiveActorBase*, Explosive);

