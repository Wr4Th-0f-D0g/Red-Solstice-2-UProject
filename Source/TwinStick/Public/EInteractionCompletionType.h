#pragma once
#include "CoreMinimal.h"
#include "EInteractionCompletionType.generated.h"

UENUM(BlueprintType)
enum class EInteractionCompletionType : uint8 {
    ICT_COMPLETE,
    ICT_FAILED,
    ICT_ABORTED,
    MAX,
};

