#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "ActiveConstruction.h"
#include "BaseUpgradeChangedDelegate.h"
#include "BasicDynamicMulticastDelegateDelegate.h"
#include "SolsticeSaveInterface.h"
#include "StrategyUpgradeTracker.h"
#include "Templates/SubclassOf.h"
#include "UpgradeTrackersUpdatedDelegate.h"
#include "StrategyUpgradeComponent.generated.h"

class UBaseUpgradeData;
class UConstructionObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UStrategyUpgradeComponent : public UActorComponent, public IGameplayTagAssetInterface, public ISolsticeSaveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UConstructionObject> ConstructionObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FActiveConstruction> ActiveConstructions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UConstructionObject*> ActiveConstructionObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UConstructionObject*> FinishedConstructions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConstructionPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseUpgradeData* UpgradeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FStrategyUpgradeTracker> UpgradeTrackers;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpgradeTrackersUpdated OnUpgradeTrackersUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseUpgradeChanged OnBaseUpgradeStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseUpgradeChanged OnBaseUpgradeCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_UpgradeTags, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UpgradeTags;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicDynamicMulticastDelegate OnUpgradeTagsChanged;
    
    UStrategyUpgradeComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Upgrade(const FGameplayTag& InTag);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UpgradeTags();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MeetsUpgradeRequirements(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuildingUpgrade(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUpgrade(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasResourcesToUpgrade(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllUpgrades() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllAvailableUpgrades() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpgradeLevelFor(const FGameplayTag& InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingTimeHours(FGameplayTag QueryItemUpgradeTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentUpgradeTagForTree(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetConstructionSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UConstructionObject* GetConstructionObjectFor(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseUpgradeData* GetBaseUpgradeData() const;
    

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

