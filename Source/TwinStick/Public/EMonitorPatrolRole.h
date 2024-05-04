#pragma once
#include "CoreMinimal.h"
#include "EMonitorPatrolRole.generated.h"

UENUM(BlueprintType)
enum class EMonitorPatrolRole : uint8 {
    NoPlayerInRange,
    WaitingForTarget,
    ChasingTarget,
    ReturningToHome,
};

