#pragma once
#include "CoreMinimal.h"
#include "EFollowerMovementState.generated.h"

UENUM(BlueprintType)
enum class EFollowerMovementState : uint8 {
    Idle,
    FollowingPlayer,
    HoldingPosition,
    MovingToLocation,
    FindingHero,
    AttackingHero,
    FindingCover,
    BackPeddling,
    UsingZipline,
    EscortingVehicle,
    PlayerInVehicle,
};

