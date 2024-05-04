#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EndGameTimeChangedDelegate.h"
#include "EndGameTimeReachedDelegate.h"
#include "GlobalInfestationChangedDelegate.h"
#include "InfestedTerraformerData.h"
#include "MarsTime.h"
#include "SolsticeSaveInterface.h"
#include "StrategyInfestationManager.generated.h"

class ARegion;
class AStrategyInfestationDecal;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UStrategyInfestationManager : public UActorComponent, public ISolsticeSaveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MaximumGlobalInfestation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_GlobalInfestation, meta=(AllowPrivateAccess=true))
    float GlobalInfestation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalInfestationChanged OnGlobalInfestationChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FInfestedTerraformerData> InfestedTerraformers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_EndGameTime, meta=(AllowPrivateAccess=true))
    FMarsTime EndGameTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndGameTimeChanged OnEndGameTimeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndGameTimeReached OnEndGameTimeReached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARegion*> Regions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStrategyInfestationDecal*> InfestationDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float CurrentRevolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> TagsForRevolutionLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockAmountPerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRevolutionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RevolutionBonusTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RevolutionMitigationTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RevolutionBonusPerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RevolutionMitigationPerTag;
    
    UStrategyInfestationManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TickInfestation(int32 Days);
    
    UFUNCTION(BlueprintCallable)
    void SaveDecals();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GlobalInfestation(float OldInfestation);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EndGameTime();
    
    UFUNCTION(BlueprintCallable)
    void ModifyGlobalInfestation(float DeltaInfestation);
    
    UFUNCTION(BlueprintCallable)
    void HandleCampaignDayChanged(const FMarsTime& CampaignTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInfestationGrowthSpeed(ARegion* InRegion) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInfestationGrowthMultiplier(ARegion* InRegion) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanUseRevolution();
    
    UFUNCTION(BlueprintCallable)
    void AdjustDecals();
    

    // Fix for true pure virtual functions not being implemented
};

