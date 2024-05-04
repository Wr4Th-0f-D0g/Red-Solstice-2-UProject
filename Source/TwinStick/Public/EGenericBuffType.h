#pragma once
#include "CoreMinimal.h"
#include "EGenericBuffType.generated.h"

UENUM(BlueprintType)
enum class EGenericBuffType : uint8 {
    EGBT_Simulated,
    EBGT_Dynamic,
};

