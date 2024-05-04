#pragma once
#include "CoreMinimal.h"
#include "ESkirmishGenerationType.generated.h"

UENUM(BlueprintType)
enum class ESkirmishGenerationType : uint8 {
    DeploymentTable,
    Random,
    DailyChallenge,
    WeeklyChallenge,
};

