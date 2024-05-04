#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EAttribute.h"
#include "OutpostLevelChangedDelegate.h"
#include "OutpostNameChangedDelegate.h"
#include "StrategyMapActor.h"
#include "StrategyTimer.h"
#include "Outpost.generated.h"

class ARegion;
class UFMODAudioComponent;
class UFMODEvent;
class UStrategyUpgradeComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AOutpost : public AStrategyMapActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStrategyUpgradeComponent* UpgradeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* BuildAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* BuildCompletedAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* BuildSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* BuildCompletedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedRegion, meta=(AllowPrivateAccess=true))
    ARegion* ReplicatedRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARegion> Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString RegionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutpostInPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_BuildTimer, meta=(AllowPrivateAccess=true))
    FStrategyTimer BuildTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_OutpostLevel, meta=(AllowPrivateAccess=true))
    int32 OutpostLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutpostNameChanged OnOutpostNameChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString OutpostName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutpostLevelChanged OnOutpostOperationalChanged;
    
    AOutpost(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedRegion();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OutpostName();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OutpostLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuildTimer(const FStrategyTimer& Oldtimer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnderConstruction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOperational() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullyUpgraded() const;
    
    UFUNCTION(BlueprintCallable)
    void InvalidateBuildTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpgradeLevelFor(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<EAttribute, float> GetOutpostBaseAttributes(int32 InOutpostLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIntelPerHourAdjacentRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIntelPerHour() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIntelPerDayAdjacentRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIntelPerDay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetConstructionProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConstructionCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanHarvestDeployment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBuildOrUpgrade() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintConstructionStarted();
    
};

