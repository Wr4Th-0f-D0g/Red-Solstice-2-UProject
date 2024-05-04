#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MissionTaskBase.h"
#include "ProtectActorsActorInfo.h"
#include "ProtectActorsOptions.h"
#include "ProtectActorsStatus.h"
#include "SelectedMissionLocation.h"
#include "ProtectActorsTask.generated.h"

class AActor;
class AMinimapActorBase;
class APawn;
class UObject;
class UProtectActorsTask;

UCLASS(Blueprintable)
class TWINSTICK_API UProtectActorsTask : public UMissionTaskBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FObjectiveUpdated, FProtectActorsStatus, Status, FSelectedMissionLocation, Location);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveUpdated ObjectiveUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMinimapActorBase* RadiusMinimapActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProtectActorsActorInfo> CachedTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CachedTagsToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, AMinimapActorBase*> MinimapActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FProtectActorsStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCheckCombinedRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ReachLocationTolerance;
    
public:
    UProtectActorsTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UProtectActorsTask* StartProtectActorTask(UObject* WorldContextObject, const FProtectActorsOptions& Options, TArray<FProtectActorsActorInfo> Targets);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTargetKilled(AActor* Target, APawn* PawnInstigator);
    
};

