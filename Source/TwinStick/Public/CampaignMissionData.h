#pragma once
#include "CoreMinimal.h"
#include "StrategyMissionData.h"
#include "CampaignMissionData.generated.h"

USTRUCT(BlueprintType)
struct FCampaignMissionData : public FStrategyMissionData {
    GENERATED_BODY()
public:
    TWINSTICK_API FCampaignMissionData();
};

