#pragma once
#include "CoreMinimal.h"
#include "ECWSPositionMode.generated.h"

UENUM(BlueprintType)
enum class ECWSPositionMode : uint8 {
    ModeLocation3D,
    ModeLocationComponent,
    ModeLocation2D,
};

