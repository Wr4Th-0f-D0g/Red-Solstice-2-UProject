#pragma once
#include "CoreMinimal.h"
#include "ETutorialFormatType.generated.h"

UENUM(BlueprintType)
enum class ETutorialFormatType : uint8 {
    Simple,
    ControlOption,
    GamepadControlIcon,
};

