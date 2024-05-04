#pragma once
#include "CoreMinimal.h"
#include "MarsTime.h"
#include "MarsSimpleTimer.generated.h"

USTRUCT(BlueprintType)
struct FMarsSimpleTimer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMarsTime CompletionTime;
    
    TWINSTICK_API FMarsSimpleTimer();
};

