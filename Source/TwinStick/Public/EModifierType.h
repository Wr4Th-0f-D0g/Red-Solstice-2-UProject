#pragma once
#include "CoreMinimal.h"
#include "EModifierType.generated.h"

UENUM(BlueprintType)
enum class EModifierType : uint8 {
    EMT_None,
    EMT_Add,
    EMT_Multiply,
    EMT_Resistance,
    EMT_ClampMin,
    EMT_ClampMax,
    EMT_StackingMultiply,
};

