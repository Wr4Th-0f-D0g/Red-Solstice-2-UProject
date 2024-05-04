#pragma once
#include "CoreMinimal.h"
#include "ERotationMode.generated.h"

UENUM(BlueprintType)
enum class ERotationMode : uint8 {
    ERM_Invalid,
    ERM_Movement,
    ERM_Target,
    ERM_Mouse,
    ERM_Custom,
};

