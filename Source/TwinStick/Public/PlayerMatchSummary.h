#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "HeroSummaryInfo.h"
#include "PlayerRank.h"
#include "PlayerMatchSummary.generated.h"

USTRUCT(BlueprintType)
struct FPlayerMatchSummary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeroSummaryInfo HeroSummary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRank DeploymentStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AwardedMedal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AwardedPlayerTasks;
    
    TWINSTICK_API FPlayerMatchSummary();
};

