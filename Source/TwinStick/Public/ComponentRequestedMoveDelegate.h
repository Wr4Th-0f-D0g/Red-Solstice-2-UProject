#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ComponentRequestedMoveDelegate.generated.h"

class UActorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FComponentRequestedMove, UActorComponent*, InstigatingComponent, FVector, TargetLocation, float, AcceptanceRadius);

