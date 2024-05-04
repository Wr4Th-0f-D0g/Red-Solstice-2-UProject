#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MissionLocation.h"
#include "MissionTaskBase.h"
#include "ReachLocationCarriageStatus.h"
#include "SelectedMissionLocation.h"
#include "Templates/SubclassOf.h"
#include "ReachLocation_TrainCarriage.generated.h"

class ADestructibleTrainCarriageBase;
class AHeroCharacterBase;
class AInventoryPickup;
class AMinimapActorBase;
class UItem;
class UMissionObjectiveTracker;
class UObject;
class UReachLocation_TrainCarriage;

UCLASS(Blueprintable)
class TWINSTICK_API UReachLocation_TrainCarriage : public UMissionTaskBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTargetNotFound);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnObjectiveUpdated, FReachLocationCarriageStatus, Status, FSelectedMissionLocation, Location);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveUpdated ObjectiveUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveUpdated OnTimerExpired;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADestructibleTrainCarriageBase* TrainCarriage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReachLocationCarriageStatus Status;
    
public:
    UReachLocation_TrainCarriage();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UReachLocation_TrainCarriage* StartTrainCarriageReachLocationTask(UObject* WorldContextObject, FGameplayTag TrainCarriageTag, FMissionLocation InLocation, FText MissionName, FReachLocationCarriageStatus ReachLocationParameters, TSubclassOf<UMissionObjectiveTracker> ObjectiveTracker);
    
    UFUNCTION(BlueprintCallable)
    void HandleObjectiveReached();
    
    UFUNCTION(BlueprintCallable)
    void HandleItemPickedUp(AHeroCharacterBase* Instigator, AInventoryPickup* PickupItem, UItem* InventoryItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemDropped(AInventoryPickup* PickupItem, UItem* InventoryItem);
    
};

