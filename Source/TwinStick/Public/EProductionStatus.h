#pragma once
#include "CoreMinimal.h"
#include "EProductionStatus.generated.h"

UENUM(BlueprintType)
enum class EProductionStatus : uint8 {
    Invalid,
    InProgress,
    Paused,
};

