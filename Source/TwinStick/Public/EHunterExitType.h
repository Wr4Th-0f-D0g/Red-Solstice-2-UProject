#pragma once
#include "CoreMinimal.h"
#include "EHunterExitType.generated.h"

UENUM(BlueprintType)
enum class EHunterExitType : uint8 {
    FromSide,
    FromFloor,
    FromHatch,
};

