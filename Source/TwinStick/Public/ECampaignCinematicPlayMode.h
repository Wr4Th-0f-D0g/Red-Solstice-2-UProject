#pragma once
#include "CoreMinimal.h"
#include "ECampaignCinematicPlayMode.generated.h"

UENUM(BlueprintType)
enum class ECampaignCinematicPlayMode : uint8 {
    Queued,
    Spawned,
    Deployed,
    Completed,
};

