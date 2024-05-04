#pragma once
#include "CoreMinimal.h"
#include "EStrategyMissionStatus.generated.h"

UENUM(BlueprintType)
enum class EStrategyMissionStatus : uint8 {
    Active,
    Successful,
    Failed,
};

