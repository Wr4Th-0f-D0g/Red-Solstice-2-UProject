#pragma once
#include "CoreMinimal.h"
#include "EBuffChangedOperation.generated.h"

UENUM(BlueprintType)
enum class EBuffChangedOperation : uint8 {
    EBCO_Added,
    EBCO_Removed,
    EBCO_Modified,
    EBCO_Multiple,
};

