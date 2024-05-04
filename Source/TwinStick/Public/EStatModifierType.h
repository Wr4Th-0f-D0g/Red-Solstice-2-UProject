#pragma once
#include "CoreMinimal.h"
#include "EStatModifierType.generated.h"

UENUM(BlueprintType)
enum class EStatModifierType : uint8 {
    SMT_None,
    SMT_Modifier,
    SMT_Multiplier,
    SMT_Environmental,
};

