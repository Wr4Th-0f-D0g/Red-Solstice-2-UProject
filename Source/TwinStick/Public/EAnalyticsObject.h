#pragma once
#include "CoreMinimal.h"
#include "EAnalyticsObject.generated.h"

UENUM(BlueprintType)
enum class EAnalyticsObject : uint8 {
    AO_None,
    AO_Marine,
    AO_Mission,
    AO_Monster,
};

