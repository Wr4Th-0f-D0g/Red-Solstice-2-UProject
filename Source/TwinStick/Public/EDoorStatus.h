#pragma once
#include "CoreMinimal.h"
#include "EDoorStatus.generated.h"

UENUM(BlueprintType)
enum class EDoorStatus : uint8 {
    Open,
    Closed,
};

