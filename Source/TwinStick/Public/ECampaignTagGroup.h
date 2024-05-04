#pragma once
#include "CoreMinimal.h"
#include "ECampaignTagGroup.generated.h"

UENUM(BlueprintType)
enum class ECampaignTagGroup : uint8 {
    Campaign,
    Tech,
    Upgrade,
    Miscellaneous,
};

