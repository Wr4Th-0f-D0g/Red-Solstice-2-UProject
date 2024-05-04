#pragma once
#include "CoreMinimal.h"
#include "HoldPositionStatus.h"
#include "MissionLocation.h"
#include "MissionTaskBase.h"
#include "SelectedMissionLocation.h"
#include "HoldPositionTask.generated.h"

class UHoldPositionTask;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UHoldPositionTask : public UMissionTaskBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTimerUpdated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnObjectiveUpdated, FHoldPositionStatus, Status, FSelectedMissionLocation, OutLocation);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveUpdated ObjectiveUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimerUpdated TimerUpdated;
    
    UHoldPositionTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHoldPositionTask* StartHoldPositionTask(UObject* WorldContextObject, FMissionLocation Location, FText MissionName, FHoldPositionStatus Params, float AreaRadius);
    
};

