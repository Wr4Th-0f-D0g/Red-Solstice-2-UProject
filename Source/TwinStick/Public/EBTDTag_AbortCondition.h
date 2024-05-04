#pragma once
#include "CoreMinimal.h"
#include "EBTDTag_AbortCondition.generated.h"

UENUM(BlueprintType)
enum class EBTDTag_AbortCondition : uint8 {
    None,
    TagAdded,
    TagRemoved,
    Both,
};

