#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMissionStatus.h"
#include "EObjectiveTimer.h"
#include "MissionTimerManager.h"
#include "OnCompletedDelegate.h"
#include "OnStartedDelegate.h"
#include "MissionTaskBase.generated.h"

class AActor;
class AMinimapActorBase;
class AMissionBase;
class AMissionMarkerActorBase;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UMissionTaskBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStarted Started;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompleted Completed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompleted Failed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStarted CanNotStart;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* CachedWorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMinimapActorBase* MinimapActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, AMissionMarkerActorBase*> MissionMarkers;
    
public:
    UMissionTaskBase();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleTimerExpired(AMissionBase* Mission, FMissionTimerManager TimerManager, EObjectiveTimer TimerStatus);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleObjectiveTaskCompleted();
    
    UFUNCTION(BlueprintCallable)
    void HandleObjectiveTaskAborted();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleObjectiveCompleted(AMissionBase* Mission, EMissionStatus Status, int32 CurrentObjectiveIndex, bool bObjectiveCompleted);
    
    UFUNCTION(BlueprintCallable)
    void Cleanup();
    
};

