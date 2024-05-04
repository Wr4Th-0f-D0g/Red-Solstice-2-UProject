#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DeployItemTaskParameters.h"
#include "DeployItemTaskStatus.h"
#include "MissionLocation.h"
#include "MissionTaskBase.h"
#include "DeployItemTask.generated.h"

class AHeroCharacterBase;
class AInventoryPickup;
class AMinimapActorBase;
class UAbilityBase;
class UDeployItemTask;
class UItem;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UDeployItemTask : public UMissionTaskBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnObjectiveUpdated, FDeployItemTaskStatus, Status);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeployed);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveUpdated ObjectiveUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMinimapActorBase*> MinimapActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UItem*> InventoryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AInventoryPickup*, AMinimapActorBase*> PickupMinimapActors;
    
public:
    UDeployItemTask();

private:
    UFUNCTION(BlueprintCallable)
    void HandleItemPickedUp(AHeroCharacterBase* Instigator, AInventoryPickup* PickupItem, UItem* InventoryItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemDropped(AInventoryPickup* PickupItem, UItem* InventoryItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemDeployed(UAbilityBase* InventoryItem, const FGameplayTag& AbilityTag);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDeployItemTask* GenerateDeployItemObjective(UObject* WorldContextObject, FMissionLocation MissionLocation, FDeployItemTaskParameters DeployParameters);
    
};

