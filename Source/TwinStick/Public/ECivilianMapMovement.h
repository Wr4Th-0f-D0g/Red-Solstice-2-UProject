#pragma once
#include "CoreMinimal.h"
#include "ECivilianMapMovement.generated.h"

UENUM(BlueprintType)
enum class ECivilianMapMovement : uint8 {
    MoveToEvac,
    MoveViaRallyPoints,
};

