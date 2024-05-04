#pragma once
#include "CoreMinimal.h"
#include "EKillzoneMode.generated.h"

UENUM(BlueprintType)
enum class EKillzoneMode : uint8 {
    KillzoneModeConstant,
    KillzoneModeOnTrigger,
};

