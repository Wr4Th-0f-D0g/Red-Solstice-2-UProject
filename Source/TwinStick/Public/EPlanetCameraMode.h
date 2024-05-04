#pragma once
#include "CoreMinimal.h"
#include "EPlanetCameraMode.generated.h"

UENUM(BlueprintType)
enum class EPlanetCameraMode : uint8 {
    Invalid,
    Free,
    Dropship,
    Target,
};

