#pragma once
#include "CoreMinimal.h"
#include "ECivilianMovementStatus.generated.h"

UENUM(BlueprintType)
enum class ECivilianMovementStatus : uint8 {
    WaitingForRescue,
    FollowingMarine,
    EvadingMonsters,
    MovingToRallypoint,
    GoingToScanner,
    GoingToQuarantine,
    GoingToEvacPoint,
    RandomPathing,
    StandingIdle,
};

