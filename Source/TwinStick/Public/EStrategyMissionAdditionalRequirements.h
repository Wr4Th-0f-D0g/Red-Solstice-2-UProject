#pragma once
#include "CoreMinimal.h"
#include "EStrategyMissionAdditionalRequirements.generated.h"

UENUM(BlueprintType)
enum class EStrategyMissionAdditionalRequirements : uint8 {
    Colony,
    Terraformer,
    RecentlyLostColony,
    AdjacentRegionInfested,
    Infested,
    Outpost,
};

