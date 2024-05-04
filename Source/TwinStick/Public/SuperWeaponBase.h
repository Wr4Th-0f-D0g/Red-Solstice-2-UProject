#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "MarsTime.h"
#include "SolsticeSaveInterface.h"
#include "SuperWeaponFiredDelegate.h"
#include "SuperWeaponInfestationDamage.h"
#include "SuperWeaponBase.generated.h"

class ARegion;
class UColonyData;
class UDataTable;

UCLASS(Blueprintable)
class TWINSTICK_API ASuperWeaponBase : public AActor, public ISolsticeSaveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UColonyData* ColonyDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StrategyMissionGenerationTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RequiredTechTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RequiredUpgradeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RequiredCampaignTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FMarsTime LastFiringTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 TimesFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SuperWeaponActivated, meta=(AllowPrivateAccess=true))
    bool bSuperWeaponActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSuperWeaponFired OnSuperWeaponFired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSuperWeaponFired OnSuperWeaponFireStarted;
    
    ASuperWeaponBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SuperWeaponFired(const TArray<ARegion*>& TargetRegions, bool bPlayEffects);
    
    UFUNCTION(BlueprintCallable)
    void SuperWeaponFireCompleted(ARegion* TargetRegion);
    
    UFUNCTION(BlueprintCallable)
    void SetCooldownPercent(float CooldownPercent);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SuperWeaponActivated();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastFireSuperWeapon(const TArray<ARegion*>& TargetRegions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyToFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPrerequisitesToFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalCooldownHours() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTargetingCasualtyEstimation(const TArray<FSuperWeaponInfestationDamage>& InTargetingData, int32& CivilianCasualties, int32& InfestedCasualties) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FSuperWeaponInfestationDamage> GetSuperWeaponTargetSolutions(bool bOnlyContacted) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumTargets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSuperWeaponInfestationDamage> GetEstimatedInfestationDamage(ARegion* InRegion) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCooldownHours() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARegion*> GetAllRegions() const;
    
    UFUNCTION(BlueprintCallable)
    void FireSuperWeapon(const TArray<ARegion*>& TargetRegions, bool bPlayEffects);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExitSuperweaponDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CooldownReady() const;
    

    // Fix for true pure virtual functions not being implemented
};

