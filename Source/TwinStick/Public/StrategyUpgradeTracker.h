#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EStrategyUpgradeTrackerType.h"
#include "StrategyUpgradeTracker.generated.h"

class UBaseUpgradeData;

USTRUCT(BlueprintType)
struct FStrategyUpgradeTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EStrategyUpgradeTrackerType TrackerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 UpgradeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag UpgradeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseUpgradeData* UpgradeData;
    
    TWINSTICK_API FStrategyUpgradeTracker();
};

