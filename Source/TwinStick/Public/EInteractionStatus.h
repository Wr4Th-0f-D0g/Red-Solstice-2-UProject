#pragma once
#include "CoreMinimal.h"
#include "EInteractionStatus.generated.h"

UENUM(BlueprintType)
enum class EInteractionStatus : uint8 {
    None,
    Started,
    Interacting,
    Completed,
    Aborted,
};

