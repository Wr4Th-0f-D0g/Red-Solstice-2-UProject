#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMissionTriggerFilter.h"
#include "MissionSpawnTrigger.generated.h"

class ARegion;

UCLASS(Blueprintable)
class TWINSTICK_API UMissionSpawnTrigger : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllowedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMissionTriggerFilter MissionTriggerFilter;
    
    UMissionSpawnTrigger();

    UFUNCTION(BlueprintCallable)
    void QueueMission(FGameplayTag MissionTag, ARegion* TargetRegion, float DelayHours);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetAllowedMissionsForRegion(ARegion* TargetRegion) const;
    
};

