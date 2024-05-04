#pragma once
#include "CoreMinimal.h"
#include "RegionalStormTracker.generated.h"

class AStormActor;

USTRUCT(BlueprintType)
struct FRegionalStormTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AStormActor> StormActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ActiveTimeDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 IntensityDecreasedTimes;
    
    TWINSTICK_API FRegionalStormTracker();
};

