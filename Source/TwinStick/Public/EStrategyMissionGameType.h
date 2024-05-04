#pragma once
#include "CoreMinimal.h"
#include "EStrategyMissionGameType.generated.h"

UENUM(BlueprintType)
enum class EStrategyMissionGameType : uint8 {
    Invalid,
    Campaign,
    Skirmish,
};

