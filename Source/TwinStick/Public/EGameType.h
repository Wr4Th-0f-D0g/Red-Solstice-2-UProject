#pragma once
#include "CoreMinimal.h"
#include "EGameType.generated.h"

UENUM(BlueprintType)
enum class EGameType : uint8 {
    None,
    Survival,
    Story,
};

