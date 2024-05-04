#pragma once
#include "CoreMinimal.h"
#include "EHQStatus.generated.h"

UENUM(BlueprintType)
enum class EHQStatus : uint8 {
    Invalid,
    Moving,
    Deployed,
};

