#pragma once
#include "CoreMinimal.h"
#include "EAbilityEndPolicy.generated.h"

UENUM(BlueprintType)
enum class EAbilityEndPolicy : uint8 {
    Automatic,
    Manual,
};

