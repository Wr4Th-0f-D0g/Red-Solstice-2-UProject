#pragma once
#include "CoreMinimal.h"
#include "ESuitTier.generated.h"

UENUM(BlueprintType)
enum class ESuitTier : uint8 {
    Unspecified,
    MarkV,
    MarkVI,
    MarkVII,
    Bot,
};

