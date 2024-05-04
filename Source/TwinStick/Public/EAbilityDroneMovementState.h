#pragma once
#include "CoreMinimal.h"
#include "EAbilityDroneMovementState.generated.h"

UENUM(BlueprintType)
enum class EAbilityDroneMovementState : uint8 {
    EDroneNone,
    EDroneAtTargetLocation,
    EDroneFollowingTargetActor,
    EDroneMoveToActor,
    EDroneMoveToLocation,
    EDroneMoveLandToTarget,
    EDroneMoveTakeoffFromTarget,
};

