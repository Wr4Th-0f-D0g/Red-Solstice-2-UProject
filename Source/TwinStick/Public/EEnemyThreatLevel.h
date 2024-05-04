#pragma once
#include "CoreMinimal.h"
#include "EEnemyThreatLevel.generated.h"

UENUM(BlueprintType)
enum class EEnemyThreatLevel : uint8 {
    VeryLow,
    Low,
    Medium,
    High,
    VeryHigh,
    Boss,
};

