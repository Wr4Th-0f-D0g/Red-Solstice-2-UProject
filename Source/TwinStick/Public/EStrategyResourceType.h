#pragma once
#include "CoreMinimal.h"
#include "EStrategyResourceType.generated.h"

UENUM(BlueprintType)
enum class EStrategyResourceType : uint8 {
    None,
    Supply,
    Deployment,
    Specialists,
};

