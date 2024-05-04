#pragma once
#include "CoreMinimal.h"
#include "EInteractionAbortPolicy.generated.h"

UENUM(BlueprintType)
enum class EInteractionAbortPolicy : uint8 {
    EIAP_Range,
    EIAP_Move,
    EIAP_Action,
};

