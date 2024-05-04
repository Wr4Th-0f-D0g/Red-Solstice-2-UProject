#pragma once
#include "CoreMinimal.h"
#include "AttackTargetChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAttackTargetChanged, AActor*, OldTarget, AActor*, NewTarget);

