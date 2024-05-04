#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "ActiveProduction.h"
#include "EProductionStatus.h"
#include "InventoryChangedDelegate.h"
#include "PostEngineeringManagerLoadedDelegate.h"
#include "ProductionChangedDelegate.h"
#include "ProductionStatusChangedDelegate.h"
#include "SolsticeSaveInterface.h"
#include "StrategyInventoryItem.h"
#include "StrategyInventoryItemData.h"
#include "Templates/SubclassOf.h"
#include "StrategyEngineeringManager.generated.h"

class UEngineeringData;
class UEngineeringObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UStrategyEngineeringManager : public UActorComponent, public IGameplayTagAssetInterface, public ISolsticeSaveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEngineeringObject> EngineeringObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PrototypedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Inventory, meta=(AllowPrivateAccess=true))
    TArray<FStrategyInventoryItem> Inventory;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryChanged OnInventoryChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FActiveProduction> ActiveProductions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveEngineeringObjects, meta=(AllowPrivateAccess=true))
    TArray<UEngineeringObject*> ActiveEngineeringObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEngineeringObject*> FinishedEngineeringObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEngineeringObject*, int32> ReservedSpecialists;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProductionStatusChanged OnProductionStatusChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProductionPaused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProductionChanged OnProductionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProductionChanged OnProductionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProductionChanged OnProductionFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostEngineeringManagerLoaded OnEngineeringManagerLoaded;
    
    UStrategyEngineeringManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartProduction(const FGameplayTag& InItemTag);
    
    UFUNCTION(BlueprintCallable)
    void ResumeProduction(UEngineeringObject* EngineeringObject, bool bFromInput);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItemFromInventory(FGameplayTag InItemTag, int32 InAmount);
    
    UFUNCTION(BlueprintCallable)
    void PauseProduction(UEngineeringObject* EngineeringObject, bool bFromInput);
    
    UFUNCTION(BlueprintCallable)
    void PauseAllEngineeringProjects();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Inventory(TArray<FStrategyInventoryItem>& OldItems);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveEngineeringObjects(TArray<UEngineeringObject*> OldArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MeetsRequirementsFor(const FGameplayTag& InItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSpecialistToBuild(const FGameplayTag& InItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSpaceForItem(const FGameplayTag& InItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasResourcesToProduce(const FGameplayTag& InItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPrototypedItem(const FGameplayTag& InItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveProductionFor(const FGameplayTag& InItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSupplyCostFor(const FGameplayTag& InItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EProductionStatus GetProductionStatusForObject(const UEngineeringObject* EngineeringObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProductionSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfEngineers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStrategyInventoryItemData GetItemDataFor(const FGameplayTag& InItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInventoryAmountFor(const FGameplayTag& InItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEngineeringData* GetEngineeringData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEngineerCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FStrategyInventoryItemData> GetAllEngineeringItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FActiveProduction> GetActiveProductionsFor(const FGameplayTag& InItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FActiveProduction> GetActiveProductions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveProductionCountFor(const FGameplayTag& InItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEngineeringObject*> GetActiveEngineeringObjectsFor(const FGameplayTag& InItemTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartProductionFor(const FGameplayTag& InItemTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanResumeProduction(const UEngineeringObject* EngineeringObject);
    
    UFUNCTION(BlueprintCallable)
    void AddItemToInventory(FGameplayTag InItemTag, int32 InAmount);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

