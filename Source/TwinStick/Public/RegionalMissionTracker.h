#pragma once
#include "CoreMinimal.h"
#include "MarsTime.h"
#include "StrategyMissionHistory.h"
#include "StrategyMissionTracker.h"
#include "RegionalMissionTracker.generated.h"

class ARegion;

USTRUCT(BlueprintType)
struct TWINSTICK_API FRegionalMissionTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARegion> Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FStrategyMissionHistory> MissionHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FStrategyMissionTracker> MissionTrackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, FMarsTime> RequestedMissions;
    
    FRegionalMissionTracker();
};

