#pragma once
#include "CoreMinimal.h"
#include "EBasicAIMarineState.generated.h"

UENUM(BlueprintType)
enum class EBasicAIMarineState : uint8 {
    StandingIdle,
    MovingToWaypoint,
    RoamingWithPlayers,
    ExitingTrain,
    RoamingLocation,
};

