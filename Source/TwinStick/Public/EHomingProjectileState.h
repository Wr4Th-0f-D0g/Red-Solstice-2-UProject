#pragma once
#include "CoreMinimal.h"
#include "EHomingProjectileState.generated.h"

UENUM(BlueprintType)
enum EHomingProjectileState {
    HomingActor,
    HomingLocation,
    Inactive,
};

