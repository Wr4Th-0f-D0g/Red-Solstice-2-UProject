#pragma once
#include "CoreMinimal.h"
#include "MissionLocation.h"
#include "MissionTaskBase.h"
#include "ReachLocationStatus.h"
#include "SelectedMissionLocation.h"
#include "Templates/SubclassOf.h"
#include "ReachLocationTask.generated.h"

class AHeroCharacterBase;
class AInventoryPickup;
class AMinimapActorBase;
class UItem;
class UMissionObjectiveTracker;
class UObject;
class UReachLocationTask;

UCLASS(Blueprintable)
class TWINSTICK_API UReachLocationTask : public UMissionTaskBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTargetNotFound);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnObjectiveUpdated, FReachLocationStatus, Status, FSelectedMissionLocation, Location);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveUpdated ObjectiveUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveUpdated UpdateMissionTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMinimapActorBase*> MinimapActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UItem*> InventoryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AInventoryPickup*, AMinimapActorBase*> PickupMinimapActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMissionObjectiveTracker> ObjectiveTrackerClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReachLocationStatus Status;
    
public:
    UReachLocationTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UReachLocationTask* StartReachLocationTask(UObject* WorldContextObject, FMissionLocation InLocation, FText MissionName, FReachLocationStatus ReachLocationParameters, TSubclassOf<UMissionObjectiveTracker> ObjectiveTracker);
    
    UFUNCTION(BlueprintCallable)
    void HandleObjectiveReached();
    
    UFUNCTION(BlueprintCallable)
    void HandleItemPickedUp(AHeroCharacterBase* Instigator, AInventoryPickup* PickupItem, UItem* InventoryItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemDropped(AInventoryPickup* PickupItem, UItem* InventoryItem);
    
};

