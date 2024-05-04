#pragma once
#include "CoreMinimal.h"
#include "EGamepadCursorPositionType.generated.h"

UENUM(BlueprintType)
enum class EGamepadCursorPositionType : uint8 {
    LastPosition,
    InitialPosition,
};

