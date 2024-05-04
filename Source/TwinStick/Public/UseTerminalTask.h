#pragma once
#include "CoreMinimal.h"
#include "MissionTaskBase.h"
#include "SelectedMissionLocation.h"
#include "UseTerminalParameters.h"
#include "UseTerminalStatus.h"
#include "UseTerminalTask.generated.h"

class AActor;
class AMinimapActorBase;
class APawn;
class APowerConsumer;
class IInteractionInterface;
class UInteractionInterface;
class UObject;
class UUseTerminalTask;

UCLASS(Blueprintable)
class TWINSTICK_API UUseTerminalTask : public UMissionTaskBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FObjectiveUpdated, FUseTerminalStatus, Status, FSelectedMissionLocation, Location);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveUpdated ObjectiveUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IInteractionInterface>> FilteredObjectsByTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IInteractionInterface>> RelevantObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IInteractionInterface>> SelectedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APowerConsumer*> UseActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<APowerConsumer*, AMinimapActorBase*> MinimapActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> MatchingObjects;
    
public:
    UUseTerminalTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UUseTerminalTask* StartUseTerminalTask(UObject* WorldContextObject, FText MissionName, FUseTerminalParameters Parameters);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTerminalActivated(AActor* UsableObject, const TArray<APawn*>& Instigators, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void HandleLinkedObjectDestroyed(APowerConsumer* Consumer, AActor* DestroyedObject);
    
};

