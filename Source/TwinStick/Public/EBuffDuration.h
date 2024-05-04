#pragma once
#include "CoreMinimal.h"
#include "EBuffDuration.generated.h"

UENUM(BlueprintType)
enum class EBuffDuration : uint8 {
    EBD_Instant,
    EBD_HasDuration,
    EBD_Infinite,
};

