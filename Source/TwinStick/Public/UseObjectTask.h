#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MissionTaskBase.h"
#include "SelectedMissionLocation.h"
#include "UseItemParamaters.h"
#include "UseItemStatus.h"
#include "UseObjectTask.generated.h"

class AActor;
class AInventoryPickup;
class AMinimapActorBase;
class APawn;
class IInteractionInterface;
class UInteractionInterface;
class UItem;
class UObject;
class UUseObjectTask;

UCLASS(Blueprintable)
class TWINSTICK_API UUseObjectTask : public UMissionTaskBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FObjectiveUpdated, FUseItemStatus, Status, FSelectedMissionLocation, Location);
    
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
    TArray<AActor*> UseActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, AMinimapActorBase*> MinimapActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> MatchingObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMinimapActorBase*> AreaMinimapActors;
    
public:
    UUseObjectTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UUseObjectTask* StartUseItemTask(UObject* WorldContextObject, FText MissionName, FUseItemParamaters Parameters);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleItemPickedUp(AInventoryPickup* PickupItem, UItem* InventoryItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemActivated(AActor* UsableObject, const TArray<APawn*>& Instigators, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void HandleDummyItemActivated(AActor* UsableObject, const TArray<APawn*>& Instigators, bool bSuccess);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleActorEndedPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

