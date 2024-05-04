#pragma once
#include "CoreMinimal.h"
#include "ELocationMode.generated.h"

UENUM(BlueprintType)
enum class ELocationMode : uint8 {
    ModeLocationDirect,
    ModeLocationActor,
    ModeLocation2D,
};

