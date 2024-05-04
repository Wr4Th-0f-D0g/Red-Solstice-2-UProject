#pragma once
#include "CoreMinimal.h"
#include "EMapEventType.generated.h"

UENUM(BlueprintType)
enum class EMapEventType : uint8 {
    Invalid,
    Mission,
    Research,
    Engineering,
    Outpost,
    Story,
};

