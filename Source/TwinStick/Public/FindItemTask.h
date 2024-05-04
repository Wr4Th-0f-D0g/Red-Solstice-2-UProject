#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FindItemTaskParameters.h"
#include "FindItemTaskStatus.h"
#include "MissionLocation.h"
#include "MissionTaskBase.h"
#include "SelectedMissionLocation.h"
#include "FindItemTask.generated.h"

class AActor;
class AHeroCharacterBase;
class AInventoryPickup;
class AMinimapActorBase;
class APawn;
class UFindItemTask;
class UItem;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UFindItemTask : public UMissionTaskBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnObjectiveUpdated, FFindItemTaskStatus, TaskStatus, const TArray<FVector>&, Locations, float, AreaRadius, FSelectedMissionLocation, LastLocation);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveUpdated Updated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFindItemTaskParameters TaskParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFindItemTaskStatus TaskStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, AMinimapActorBase*> MinimapActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItem*> InventoryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, AMinimapActorBase*> PickupMinimapActors;
    
public:
    UFindItemTask();

    UFUNCTION(BlueprintCallable)
    void HandleItemPickedUp(AHeroCharacterBase* Hero, AInventoryPickup* PickupItem, UItem* InventoryItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemDropped(AInventoryPickup* PickupItem, UItem* InventoryItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionCompleted(AActor* InteractableActor, const TArray<APawn*>& Instigators, bool bSuccess);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFindItemTask* GenerateFindItemObjective(UObject* WorldContextObject, FMissionLocation Location, FFindItemTaskParameters Parameters, FText MissionName);
    
};

