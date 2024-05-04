#pragma once
#include "CoreMinimal.h"
#include "EIndicatorType.generated.h"

UENUM(BlueprintType)
enum class EIndicatorType : uint8 {
    HealthBar,
    Turret,
    InteractablePermanentWidget,
    HeroNameWidget,
    Other,
};

