#pragma once
#include "CoreMinimal.h"
#include "MarsTime.h"
#include "BotInjuryTracker.generated.h"

USTRUCT(BlueprintType)
struct FBotInjuryTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMarsTime> RecoveryDates;
    
    TWINSTICK_API FBotInjuryTracker();
};

