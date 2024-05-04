#pragma once
#include "CoreMinimal.h"
#include "EPendingEventAction.generated.h"

UENUM(BlueprintType)
enum class EPendingEventAction : uint8 {
    Added,
    Removed,
    Changed,
};

