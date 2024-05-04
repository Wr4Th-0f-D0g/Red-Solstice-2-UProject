#pragma once
#include "CoreMinimal.h"
#include "ECivilianChosenMovement.generated.h"

UENUM(BlueprintType)
enum class ECivilianChosenMovement : uint8 {
    RescueAndFollow,
    MoveToEvac,
    FollowRallypoints,
    MoveToChosenLocation,
    StandingIdle,
};

