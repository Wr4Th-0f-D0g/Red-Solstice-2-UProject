#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EStrategyMissionStatus.h"
#include "EStrategyMissionType.h"
#include "MarsTime.h"
#include "StrategyMissionHistory.generated.h"

USTRUCT(BlueprintType)
struct FStrategyMissionHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag MissionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMarsTime SpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMarsTime EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EStrategyMissionStatus FinalStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EStrategyMissionType MissionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsCampaignMission;
    
    TWINSTICK_API FStrategyMissionHistory();
};

