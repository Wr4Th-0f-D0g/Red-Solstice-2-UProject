#pragma once
#include "CoreMinimal.h"
#include "OnGoalActorChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGoalActorChanged, AActor*, NewGoalActor, AActor*, OldGoalActor);

