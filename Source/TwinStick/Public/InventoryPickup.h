#pragma once
#include "CoreMinimal.h"
#include "AbilityDescription.h"
#include "AbilityDisplay.h"
#include "PickedUpDelegate.h"
#include "PickupBase.h"
#include "PickupInteractionFinishedDelegate.h"
#include "Templates/SubclassOf.h"
#include "InventoryPickup.generated.h"

class AHeroCharacterBase;
class AInventoryPickup;
class APawn;
class UFMODEvent;
class UInventoryComponent;
class UItem;
class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class TWINSTICK_API AInventoryPickup : public APickupBase, public IAbilityDisplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickedUp OnPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupInteractionFinished OnPickupInteractionFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMissionItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDestroyedByExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItem> InventoryItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItem* InventoryItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DestroyParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* DestroySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Dropped, meta=(AllowPrivateAccess=true))
    bool bDropped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityDescription PickupDescription;
    
    AInventoryPickup(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetQuantity(int32 InQuantity);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryItemClass(TSubclassOf<UItem> ItemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PickedUp(AHeroCharacterBase* Hero, AInventoryPickup* PickupItem, UItem* InInventoryItem);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Dropped();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDestroyPickup(bool bExploded);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleItemPickedUp(UInventoryComponent* Inventory, AHeroCharacterBase* Hero);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleItemDropped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleInventoryFull(APawn* InteractionInstigator);
    
    UFUNCTION(BlueprintCallable)
    void DestroyPickup(bool bExploded, bool bFromLootManager);
    

    // Fix for true pure virtual functions not being implemented
};

