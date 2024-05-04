#pragma once
#include "CoreMinimal.h"
#include "StrategyMissionData.h"
#include "CombatMissionData.generated.h"

USTRUCT(BlueprintType)
struct FCombatMissionData : public FStrategyMissionData {
    GENERATED_BODY()
public:
    TWINSTICK_API FCombatMissionData();
};

