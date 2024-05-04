#pragma once
#include "CoreMinimal.h"
#include "StrategyMissionStatus.h"
#include "StrategyTimer.h"
#include "StrategyMissionTimer.generated.h"

USTRUCT(BlueprintType)
struct FStrategyMissionTimer : public FStrategyTimer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FStrategyMissionStatus Status;
    
    TWINSTICK_API FStrategyMissionTimer();
};

