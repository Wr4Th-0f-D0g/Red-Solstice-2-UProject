#pragma once
#include "CoreMinimal.h"
#include "ERegionListSort.generated.h"

UENUM(BlueprintType)
enum class ERegionListSort : uint8 {
    Default,
    OutpostLevel,
    Colony,
    Infestation,
    Intel,
    Supply,
    Deployment,
    Specialists,
    Storm,
};

