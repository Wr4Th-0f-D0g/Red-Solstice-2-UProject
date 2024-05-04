#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayerStatContainer.h"
#include "PlayerTaskData.h"
#include "MedalChallengeRow.generated.h"

USTRUCT(BlueprintType)
struct FMedalChallengeRow : public FPlayerTaskData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStatContainer LifetimeStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OtherRequiredMedals;
    
    TWINSTICK_API FMedalChallengeRow();
};

