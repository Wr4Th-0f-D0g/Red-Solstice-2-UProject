#pragma once
#include "CoreMinimal.h"
#include "ECampaignOptions.generated.h"

UENUM(BlueprintType)
enum class ECampaignOptions : uint8 {
    Skip_First_Mission,
    Tutorial,
    Fast_Campaign,
    Ironman,
};

