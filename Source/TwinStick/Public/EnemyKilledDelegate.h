#pragma once
#include "CoreMinimal.h"
#include "EnemyKilledDelegate.generated.h"

class APawn;
class ASolsticeCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FEnemyKilled, const ASolsticeCharacterBase*, Monster, bool, bIsMonster, bool, bHighThreat, APawn*, Instigator);

