#pragma once
#include "CoreMinimal.h"
#include "CharacterData.h"
#include "Damage.h"
#include "DisconnectedCharacterData.h"
#include "PlayerSkillShout.h"
#include "PlayerSkillShoutDelegateDelegate.h"
#include "PrefabLoadedDelegateDelegate.h"
#include "SolsticePlayerState.h"
#include "Templates/SubclassOf.h"
#include "RTS_PlayerState.generated.h"

class AHeroCharacterBase;
class ARTS_GameState;
class UAbilityBase;
class UDetonator;
class UInventoryComponent;
class UItem;

UCLASS(Blueprintable)
class TWINSTICK_API ARTS_PlayerState : public ASolsticePlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GameState, meta=(AllowPrivateAccess=true))
    ARTS_GameState* GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkirmishRequisitionEarnedThisMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NumLoadedPrefabs, meta=(AllowPrivateAccess=true))
    int32 NumLoadedPrefabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAbilityBase*> GrantedSkills;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrefabLoadedDelegate OnPrefabLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName PremadeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bWasInactive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisconnectedCharacterData SavedHeroData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInventoryComponent> InventoryComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItem> EmptyItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDetonator> DetonatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InventorySlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UItem*> InventorySlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UDetonator* Detonator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_Inventory, meta=(AllowPrivateAccess=true))
    UInventoryComponent* Inventory;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSkillShoutDelegate OnPlayerSkillShout;
    
    ARTS_PlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetPremadeName(FName InPremadeName);
    
    UFUNCTION(BlueprintCallable)
    void SetLevel(int32 NewLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetHUD_InventoryContext();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetCharacterData(const FCharacterData& HotJoinCharacterData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCallPlayerShoutForSkill(FPlayerSkillShout SkillShoutData);
    
    UFUNCTION(BlueprintCallable)
    void SendPlayerDiedMessage(const FDamage& DeathDamage);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NumLoadedPrefabs();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Inventory();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GameState();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCallPlayerShoutForSkill(FPlayerSkillShout SkillShoutData);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetHero(AHeroCharacterBase* NewHero);
    
    UFUNCTION(BlueprintCallable)
    void InitializeSlots(int32 AvailableSlots);
    
    UFUNCTION(BlueprintCallable)
    void HUD_CreateInventory();
    
    UFUNCTION(BlueprintCallable)
    void HandleInventorySlotChanged(int32 Slot, UItem* NewItem);
    
    UFUNCTION(BlueprintCallable)
    void GrantStartingStratagemItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryComponent* GetStorageInventoryComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void DropStack(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void DropItem(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateInventory(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientConfirmedCharacterData();
    
    UFUNCTION(BlueprintCallable)
    void ActivateInventoryByClass(TSubclassOf<UItem> ItemClass);
    
    UFUNCTION(BlueprintCallable)
    void ActivateInventory(int32 SlotIndex);
    
};

