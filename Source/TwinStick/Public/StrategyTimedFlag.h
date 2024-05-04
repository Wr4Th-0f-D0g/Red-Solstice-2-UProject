#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MarsTime.h"
#include "StrategyTimedFlag.generated.h"

USTRUCT(BlueprintType)
struct FStrategyTimedFlag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag FlagTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMarsTime StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 HourDuration;
    
    TWINSTICK_API FStrategyTimedFlag();
};

