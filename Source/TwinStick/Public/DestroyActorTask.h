#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "DestroyActorStatus.h"
#include "MissionTaskBase.h"
#include "SelectedMissionLocation.h"
#include "DestroyActorTask.generated.h"

class AActor;
class AMinimapActorBase;
class APawn;
class UDestroyActorTask;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UDestroyActorTask : public UMissionTaskBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FObjectiveUpdated, FDestroyActorStatus, Status, FSelectedMissionLocation, Location);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveUpdated ObjectiveUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CachedTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CachedTagsToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, AMinimapActorBase*> MinimapActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMinimapActorBase* RadiusMinimapActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCachedUsedRadius;
    
public:
    UDestroyActorTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDestroyActorTask* StartDestroyActorTask(UObject* WorldContextObject, TArray<AActor*> Targets, FText MissionName, FGameplayTagContainer TagsToApply, bool bUseRadius, bool bNoMinimapMarkers, bool bCanEverExpire, float ReachLocationSeconds);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTargetKilled(AActor* Target, APawn* PawnInstigator);
    
    UFUNCTION(BlueprintCallable)
    void HandleActorEndedPlay(AActor* Target, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

