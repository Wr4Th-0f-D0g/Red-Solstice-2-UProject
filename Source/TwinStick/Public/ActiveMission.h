#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EStrategyMissionStatus.h"
#include "ActiveMission.generated.h"

class AMissionBase;
class AStrategyMission;

USTRUCT(BlueprintType)
struct FActiveMission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString CampaignMissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString StrategyMissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag CampaignMissionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EStrategyMissionStatus StrategyMissionStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bFinalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AMissionBase> campaignmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AStrategyMission> StrategyMission;
    
    TWINSTICK_API FActiveMission();
};

