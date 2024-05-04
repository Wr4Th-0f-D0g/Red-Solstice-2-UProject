#pragma once
#include "CoreMinimal.h"
#include "EObjectiveTimer.generated.h"

UENUM(BlueprintType)
enum class EObjectiveTimer : uint8 {
    Started,
    Running,
    Completed,
    Failed,
    Paused,
    Cleared,
};

