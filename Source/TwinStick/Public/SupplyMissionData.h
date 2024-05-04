#pragma once
#include "CoreMinimal.h"
#include "StrategyMissionData.h"
#include "SupplyMissionData.generated.h"

USTRUCT(BlueprintType)
struct FSupplyMissionData : public FStrategyMissionData {
    GENERATED_BODY()
public:
    TWINSTICK_API FSupplyMissionData();
};

