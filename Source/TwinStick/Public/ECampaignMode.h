#pragma once
#include "CoreMinimal.h"
#include "ECampaignMode.generated.h"

UENUM(BlueprintType)
enum class ECampaignMode : uint8 {
    Skirmish,
    Coop,
    FreeForAll,
};

