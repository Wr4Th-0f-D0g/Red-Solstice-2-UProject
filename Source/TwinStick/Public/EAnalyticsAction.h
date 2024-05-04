#pragma once
#include "CoreMinimal.h"
#include "EAnalyticsAction.generated.h"

UENUM(BlueprintType)
enum class EAnalyticsAction : uint8 {
    AA_None,
    AA_Marine,
    AA_Mission,
    AA_Monster,
};

