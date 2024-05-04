#pragma once
#include "CoreMinimal.h"
#include "ECampaignMissionLocation.generated.h"

UENUM(BlueprintType)
enum class ECampaignMissionLocation : uint8 {
    Target,
    HQ,
    Outpost,
    Random,
    RandomAdjacentToHQ,
    RandomAdjacentToOutpost,
    RandomNoContactClose,
    Beacon,
};

