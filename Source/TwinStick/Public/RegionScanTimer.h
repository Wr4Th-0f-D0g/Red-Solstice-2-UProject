#pragma once
#include "CoreMinimal.h"
#include "StrategyTimer.h"
#include "RegionScanTimer.generated.h"

USTRUCT(BlueprintType)
struct FRegionScanTimer : public FStrategyTimer {
    GENERATED_BODY()
public:
    TWINSTICK_API FRegionScanTimer();
};

