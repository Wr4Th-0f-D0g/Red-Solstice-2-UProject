#pragma once
#include "CoreMinimal.h"
#include "EStrategyMissionType.generated.h"

UENUM(BlueprintType)
enum class EStrategyMissionType : uint8 {
    Invalid,
    Scan,
    Combat,
};

