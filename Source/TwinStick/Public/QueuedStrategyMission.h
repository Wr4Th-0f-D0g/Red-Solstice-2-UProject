#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MarsTime.h"
#include "QueuedStrategyMission.generated.h"

USTRUCT(BlueprintType)
struct FQueuedStrategyMission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMarsTime MissionSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag MissionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString RegionName;
    
    TWINSTICK_API FQueuedStrategyMission();
};

