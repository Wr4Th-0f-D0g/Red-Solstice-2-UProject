#pragma once
#include "CoreMinimal.h"
#include "EMissionStatus.generated.h"

UENUM(BlueprintType)
enum class EMissionStatus : uint8 {
    Invalid,
    Active,
    Completed,
    Failed,
};

