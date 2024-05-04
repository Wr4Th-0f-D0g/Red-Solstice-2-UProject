#pragma once
#include "CoreMinimal.h"
#include "EBurrowingState.generated.h"

UENUM(BlueprintType)
enum class EBurrowingState : uint8 {
    UnBurrowed,
    Burrowing,
    Burrowed,
    UnBurrowing,
};

