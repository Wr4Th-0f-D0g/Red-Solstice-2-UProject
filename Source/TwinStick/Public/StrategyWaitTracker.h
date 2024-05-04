#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MarsTime.h"
#include "StrategyWaitTracker.generated.h"

class AMissionBase;

USTRUCT(BlueprintType)
struct FStrategyWaitTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString CampaignMissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag CampaignMissionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AMissionBase> campaignmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMarsTime StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMarsTime EndTime;
    
    TWINSTICK_API FStrategyWaitTracker();
};

