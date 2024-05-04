#pragma once
#include "CoreMinimal.h"
#include "ESolsticeControlInputDeviceType.generated.h"

UENUM(BlueprintType)
enum class ESolsticeControlInputDeviceType : uint8 {
    MouseAndKeyboard,
    Xbox,
    Playstation,
    Generic,
};

