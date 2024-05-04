#pragma once
#include "CoreMinimal.h"
#include "EMatchType.generated.h"

UENUM(BlueprintType)
enum class EMatchType : uint8 {
    Ranked,
    Unranked,
};

