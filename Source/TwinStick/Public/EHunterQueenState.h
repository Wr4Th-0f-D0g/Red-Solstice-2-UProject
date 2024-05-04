#pragma once
#include "CoreMinimal.h"
#include "EHunterQueenState.generated.h"

UENUM(BlueprintType)
enum class EHunterQueenState : uint8 {
    PatrollingNest,
    PlacingEgg,
    AttackingPlayer,
    ReturningToNest,
    NestDestroyed,
};

