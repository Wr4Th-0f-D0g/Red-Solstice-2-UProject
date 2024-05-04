#pragma once
#include "CoreMinimal.h"
#include "OnFollowerAttackTargetChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFollowerAttackTargetChanged, AActor*, Actor);

