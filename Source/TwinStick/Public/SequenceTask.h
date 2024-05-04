#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "MissionTaskBase.h"
#include "SequenceTaskStatus.h"
#include "Templates/SubclassOf.h"
#include "SequenceTask.generated.h"

class AMinimapActorBase;
class APowerConsumer;
class UMissionObjectiveTracker;
class UObject;
class USequenceTask;

UCLASS(Blueprintable)
class TWINSTICK_API USequenceTask : public UMissionTaskBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnObjectiveUpdated, FSequenceTaskStatus, Status);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveUpdated ObjectiveUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveUpdated UpdateMissionTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMinimapActorBase*> MinimapActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMissionObjectiveTracker> ObjectiveTrackerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSequenceTaskStatus Status;
    
    USequenceTask();

    UFUNCTION(BlueprintCallable)
    void TerminalActivated(APowerConsumer* Consumer, bool bBActivated);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USequenceTask* StartSequenceTask(UObject* WorldContextObject, FText MissionName, FGameplayTagContainer Tags, EGameplayContainerMatchType MatchType, int32 NumTerminals, bool bCanEverExpire, float ExpirationTime);
    
};

