#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AbilityFinishedDelegate.h"
#include "Inventory.h"
#include "InventoryItemChangedDelegate.h"
#include "StrategyInventoryItemData.h"
#include "Templates/SubclassOf.h"
#include "InventoryComponent.generated.h"

class AInventoryPickup;
class UAbilityBase;
class UItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UInventoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle FailedToPlaceTextHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle UnableToDropItemTextHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStrategyInventoryItemData> PointShopInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FInventory InventoryContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UItem*> DepletedComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UItem* EnvironmentSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 InventorySlotCount;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryItemChanged OnInventoryItemChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityFinished OnAbilityFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItem> EmptyItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InventoryDropDisallowTags;
    
    UInventoryComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TryAddItem(AInventoryPickup* Pickup, bool& bSuccess, UItem*& NewItem);
    
    UFUNCTION(BlueprintCallable)
    void SwapInventorySlots(int32 FirstSlotIndex, int32 SecondSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetInventory(TArray<UItem*> NewInventory);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItemStack(int32 InSlot);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllItemStack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInventoryFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItem(TSubclassOf<UItem> ItemClass) const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAppropriateInventoryStack(TSubclassOf<UItem> InInventoryItemClass, TMap<int32, int32>& OutSlotSpaceMap);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleStackDepleted(UItem* DepletedStack);
    
    UFUNCTION(BlueprintCallable)
    void HandleAbilityFinished(UAbilityBase* InAbility, const FGameplayTag& InAbilityTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemKey(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInventorySlotCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindItemSlot(UItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindItemClassSlot(TSubclassOf<UItem> InInventoryItemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItem* FindItem(TSubclassOf<UItem> InInventoryItemClass, bool bOnlyMissionItems);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DropItemStack(int32 InSlot, bool bForce);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DropItem(int32 InSlot, bool bForce);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DropAllItems(bool bForce);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDropItems() const;
    
};

