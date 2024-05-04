#pragma once
#include "CoreMinimal.h"
#include "KillEnemyTaskKilledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FKillEnemyTaskKilled, int32, Current, int32, Total);

