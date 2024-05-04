#pragma once
#include "CoreMinimal.h"
#include "MarsTime.h"
#include "MarsBuildTimer.generated.h"

USTRUCT(BlueprintType)
struct FMarsBuildTimer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMarsTime RemainingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMarsTime CompletionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bPaused;
    
    TWINSTICK_API FMarsBuildTimer();
};

