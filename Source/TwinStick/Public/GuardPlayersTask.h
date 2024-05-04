#pragma once
#include "CoreMinimal.h"
#include "GuardPlayersInfo.h"
#include "MissionTaskBase.h"
#include "GuardPlayersTask.generated.h"

class AMinimapActorBase;
class ASolsticeCharacterBase;
class UGuardPlayersTask;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UGuardPlayersTask : public UMissionTaskBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTimerUpdated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnObjectiveUpdated, FGuardPlayersInfo, Status);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveUpdated ObjectiveUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimerUpdated TimerUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ASolsticeCharacterBase*, AMinimapActorBase*> PawnMinimapMarkers;
    
    UGuardPlayersTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGuardPlayersTask* StartGuardPlayersTask(UObject* WorldContextObject, FText MissionName, const FGuardPlayersInfo& Info);
    
};

