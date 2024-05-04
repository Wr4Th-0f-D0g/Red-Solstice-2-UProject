#pragma once
#include "CoreMinimal.h"
#include "EStrategyInteractionState.generated.h"

UENUM(BlueprintType)
enum class EStrategyInteractionState : uint8 {
    None,
    WantsSelected,
    Selected,
    TravellingTo,
    Reached,
    Hovered,
    InteractedWith,
    Aborted,
};

