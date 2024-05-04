#pragma once
#include "CoreMinimal.h"
#include "VehicleObstacleDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVehicleObstacleDelegate, AActor*, Obstacle);

