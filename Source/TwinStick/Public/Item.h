#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityBase.h"
#include "BasicDynamicMulticastDelegateDelegate.h"
#include "EInventoryItemType.h"
#include "Resource.h"
#include "ResourceChangedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "Item.generated.h"

class AInventoryPickup;
class UFMODEvent;
class UItem;
class USolsticeBuffBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UItem : public UAbilityBase, public IResource {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStackSizeIncreased, int32, NewSize);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStackDepleted, UItem*, DepletedItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemPickedUp, AInventoryPickup*, Pickup, UItem*, NewItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemDropped, AInventoryPickup*, Pickup, UItem*, DroppedItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemChanged, UItem*, NewItem);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PickupGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bSlotUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSplitStack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemChanged ItemChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StackSize, meta=(AllowPrivateAccess=true))
    int32 StackSize;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStackDepleted OnStackDepleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StackSizeDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MaximumStackSize;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicDynamicMulticastDelegate OnItemStackSizeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStackSizeIncreased OnStackIncreased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryPickup> DroppedActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> PassiveBuffType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemPickedUp OnItemPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDropped OnItemDropped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bUseDisallowed;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UseDisallowedMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* OutOfStackSound;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResourceChangedDelegate OnResourceChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UAbilityBase*, int32> ReservedResources;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint16, int32> SimulationExpendedResources;
    
    UItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetUseDisallowed(bool bNewDisallowed);
    
    UFUNCTION(BlueprintCallable)
    void SetStackSize(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StackSize(int32 PreviousStackSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemRemoved(UItem* RemovedItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemAdded(UItem* AddedItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStackSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsEmpty();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientConfirmItemDropped(int32 RemainingStackSize);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasEnoughResources(int32 Required) const override PURE_VIRTUAL(HasEnoughResources, return false;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSimulatedResourceDelta() const override PURE_VIRTUAL(GetSimulatedResourceDelta, return 0;);
    
    UFUNCTION(BlueprintCallable)
    float GetResources() const override PURE_VIRTUAL(GetResources, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetReservedResources() const override PURE_VIRTUAL(GetReservedResources, return 0;);
    
    UFUNCTION(BlueprintCallable)
    UFMODEvent* GetOutOfResourcesSound() const override PURE_VIRTUAL(GetOutOfResourcesSound, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaximumResources() const override PURE_VIRTUAL(GetMaximumResources, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAvailableResources() const override PURE_VIRTUAL(GetAvailableResources, return 0;);
    
};

